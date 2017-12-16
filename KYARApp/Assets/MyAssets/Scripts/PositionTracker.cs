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

    private Vector3 _playerPositionOffset;

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
        _playerPositionOffset = new Vector3(5.0f, 0.0f, 0.0f);
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
                    _photonView.RPC("Shot", PhotonTargets.All);
                }
            }
            else
            {
                if (Input.touchCount > 0)
                {
                    Touch touch = Input.GetTouch(0);
                    if (touch.phase == TouchPhase.Ended)
                    {
                        _photonView.RPC("Shot", PhotonTargets.All, 
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
                             ) {
        // Player の座標を表示
        text.text = "Current Position \n" +
            "x = " + position.x.ToString() + "\n" +
            "y = " + position.y.ToString() + "\n" +
            "z = " + position.z.ToString() + "\n";

        // God の場合 private の position, rotation をアップデート
        if (isGod) 
        {
            _playerPosition[playerId] = position*10;
            _playerRotation[playerId] = rotation;
        }

        // Player の場合 private の position, rotation をアップデート
        if (isPlayer)
        {
            _playerPosition[playerId] = position;
            _playerRotation[playerId] = rotation;
        }
    }

    [PunRPC]
    void Shot(int playerId)
    {
        GameObject bulletObj = Instantiate(bulletPrefab,
                                           PlayerPosition(playerId),
                                           Quaternion.Euler(PlayerRotation(playerId)));
        Vector3 force;
        force = bulletObj.transform.forward * 1000;
        bulletObj.GetComponent<Rigidbody>().AddForce(force);

        // will be destroyed in 5 seconds
        Destroy(bulletObj, 5);
    }

    public Vector3 PlayerPosition (int playerId) 
    {
        if (playerId == 1)
        {
            return _playerPosition[playerId] - _playerPositionOffset;
        }
        else
        {
            return _playerPosition[playerId];
        }
    }

    public Vector3 PlayerRotation (int playerId) 
    {
        return _playerRotation[playerId];
    }
}
