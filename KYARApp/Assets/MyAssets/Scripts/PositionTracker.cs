using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PositionTracker : Photon.PunBehaviour
{
    // Player の座標
    private Vector3[] _playerPosition;
    private Vector3[] _playerRotation;

    private Vector3[] _playerPositionOffset;
    private Vector3[] _playerRotationOffset;

    private Vector3[] _bulletPositionOffset;

    // Photon
    private PhotonView _photonView = null;

    // この Component がアタッチされているのが誰か
    public bool isPlayer = false;
    public bool isGod = false;

    // Bullet 関連
    public GameObject bulletPrefab;

    // Debug 用
    // Player の座標を表示する Text
    public Text text;

    private void Awake()
    {
        // Login できてなかったら戻る
        if (!PhotonNetwork.connected)
        {
            SceneManager.LoadScene("Top");
            return;
        }

        _photonView = GetComponent<PhotonView>();
    }

    private void Start()
    {
        _playerPosition = new Vector3[]{
            new Vector3 (0.0f, 0.0f, 0.0f),
            new Vector3 (0.0f, 0.0f, 0.0f),
        };
        _playerRotation = new Vector3[]{
            new Vector3 (0.0f, 0.0f, 0.0f),
            new Vector3 (0.0f, 0.0f, 0.0f),
        };
        _playerPositionOffset = new Vector3[]{
            new Vector3 (0.0f, 0.0f, 0.0f),
            new Vector3 (0.0f, 0.0f, -5.0f),
        };
        _playerRotationOffset = new Vector3[]{
            new Vector3 (0.0f, 0.0f, 0.0f),
            new Vector3 (0.0f, 180.0f, 0.0f),
        };
        _bulletPositionOffset = new Vector3[]{
            new Vector3 (0.0f, 0.0f, 1.0f),
            new Vector3 (0.0f, 0.0f, -1.0f),
        };
    }


    void Update () 
    {
        if (isPlayer)
        {
            // 最初に Room に入った人が isMine = true
            // God の人は最後に Room に入る必要があるので注意
            int playerId = _photonView.isMine ? 0 : 1;

            // Player の座標をアップデート
            _playerPosition[playerId] = Camera.main.transform.position;
            _playerRotation[playerId] = Camera.main.transform.rotation.eulerAngles;

            _photonView.RPC("UpdatePlayerPosition", 
                            PhotonTargets.All, 
                            _playerPosition[playerId], 
                            _playerRotation[playerId],
                            playerId);

            // 玉を発射
            if (Application.isEditor)
            {
                if (Input.GetMouseButtonUp(0))
                {
                    _photonView.RPC("ShotRPC", PhotonTargets.All);
                }
            }
            else
            {
                if (Input.touchCount > 0)
                {
                    Touch touch = Input.GetTouch(0);
                    if (touch.phase == TouchPhase.Ended)
                    {
                        _photonView.RPC("ShotRPC", PhotonTargets.All, 
                                        playerId);
                    }
                }
            }
        }
	}
    
    [PunRPC]
    void UpdatePlayerPosition(Vector3 position, 
                              Vector3 rotation,
                              int playerId
                             )
    {
        // Player の座標を表示
        text.text = "Current Position \n" +
            "x = " + position.x.ToString() + "\n" +
            "y = " + position.y.ToString() + "\n" +
            "z = " + position.z.ToString() + "\n";

        // God の場合 private の position, rotation をアップデート
        if (isGod) 
        {
            _playerPosition[playerId] = position * 10;
            _playerRotation[playerId] = rotation;
        }

        // Player の場合 private の position, rotation をアップデート
        if (isPlayer)
        {
            _playerPosition[playerId] = position * 5;
            _playerRotation[playerId] = rotation;
        }
    }

    [PunRPC]
    void ShotRPC (int playerId) // playerId = 打った人
    {
        if (isGod) 
        {
            Shot(playerId, playerId);
        }
        if (isPlayer) 
        {
            // 打ったのが自分かどうか
            int myId = _photonView.isMine ? 0 : 1; // 自分のID

            if (myId == playerId) { // 自分が打った
                Shot(playerId, 0);
            } 
            else // 敵が打った
            {
                Shot(playerId, 1);
            }
        }
    }

    void Shot (int playerId, int offsetId) 
    {
        GameObject bulletObj = Instantiate(bulletPrefab,
                                           PlayerPosition(playerId, offsetId) + _bulletPositionOffset[playerId],
                                           Quaternion.Euler(PlayerRotation(playerId, offsetId)));
        Vector3 force;
        force = bulletObj.transform.forward * 1000;
        bulletObj.GetComponent<Rigidbody>().AddForce(force);

        // この玉は 5 秒後に消えます
        Destroy(bulletObj, 5);
    }

    public Vector3 PlayerPosition (int playerId, int offsetId) 
    {
        // 相手のプレイヤーは 180° 回転しているので元に戻す
        // God のときは Player1 を回転
        int myId = _photonView.isMine ? 0 : 1;
        Vector3 tmp = _playerPosition[playerId];
        
        if ((playerId != myId && isPlayer) || (playerId == 1 && isGod)) { 
            tmp.x *= -1;
            tmp.z *= -1;
        }
            
        return tmp - _playerPositionOffset[offsetId];
    }

    public Vector3 PlayerRotation (int playerId, int offsetId) 
    {
        return _playerRotation[playerId] - _playerRotationOffset[offsetId];
    }

    public Vector3 PlayerPositionOffset (int playerId)
    {
        return _playerPositionOffset[playerId];
    }

    public Vector3 PlayerRotationOffset(int playerId)
    {
        return _playerRotationOffset[playerId];
    }
}
