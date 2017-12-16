using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PositionTracker : Photon.PunBehaviour
{
    // Player の座標
    private Vector3 _playerPosition;
    private Vector3 _playerRotation;

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

    void Update () 
    {
        // Player の座標をアップデート
        if (isPlayer && _photonView.isMine) 
        {
            _playerPosition = Camera.main.transform.position;
            _playerRotation = Camera.main.transform.rotation.eulerAngles;

            _photonView.RPC("UpdatePlayerPosition", 
                            PhotonTargets.All, 
                            _playerPosition, 
                            _playerRotation);

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
                        _photonView.RPC("Shot", PhotonTargets.All);
                    }
                }
            }   
        }
	}
    
    [PunRPC]
    void UpdatePlayerPosition(Vector3 position, Vector3 rotation) {
        // Player の座標を表示
        text.text = "Current Position \n" +
            "x = " + position.x.ToString() + "\n" +
            "y = " + position.y.ToString() + "\n" +
            "z = " + position.z.ToString() + "\n";

        // God の場合 private の positoin, rotation をアップデート
        if (isGod) 
        {
            _playerPosition = position*10;
            _playerRotation = rotation;
        }
    }

    [PunRPC]
    void Shot()
    {
        GameObject bulletObj = Instantiate(bulletPrefab,
                                           _playerPosition,
                                           Quaternion.Euler(_playerRotation));
        Vector3 force;
        force = bulletObj.transform.forward * 1000;
        bulletObj.GetComponent<Rigidbody>().AddForce(force);

        // will be destroyed in 5 seconds
        Destroy(bulletObj, 5);
    }

    public Vector3 PlayerPosition () 
    {
        return _playerPosition;
    }

    public Vector3 PlayerRotation () 
    {
        return _playerRotation;
    }
}
