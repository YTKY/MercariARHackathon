using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : Photon.PunBehaviour
{
    // Player の座標、回転
    // private Vector3 _playerPosition;
    // private Vector3 _playerRotation;

    // 敵 Player の Prefab
    public GameObject playerPrefab;
    private GameObject _playerObj;

    // 自 Player 
    public GameObject myPlayer;

    // Photon
    private PhotonView _photonView;

    // 何番目にログインしたプレイヤーか
    private int _playerId;

    private PositionTracker _positionTracker;

    private void Awake()
    {
        _photonView = GetComponent<PhotonView>();
    }

    void Start()
    {
        // 自Playerの設定
        int myId = _photonView.isMine ? 0 : 1;
        myPlayer.GetComponent<PlayerController>().SetPlayerId(myId);

        // 敵Playerの設定
        _playerId = _photonView.isMine ? 1 : 0;
        _positionTracker = GetComponent<PositionTracker>();
        _playerObj = Instantiate(playerPrefab,
                                 -_positionTracker.PlayerPositionOffset(1),
                                 Quaternion.Euler(_positionTracker.PlayerRotationOffset(1)));
        _playerObj.GetComponent<PlayerController>().SetPlayerId(_playerId);

    }

    void Update()
    {
        _playerObj.transform.position = _positionTracker.PlayerPosition(_playerId, 1);
        _playerObj.transform.rotation = Quaternion.Euler(_positionTracker.PlayerRotation(_playerId, 1));

    }
}
