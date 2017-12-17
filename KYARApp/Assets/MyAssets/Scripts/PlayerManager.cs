using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : Photon.PunBehaviour
{
    // Player の座標、回転
    private Vector3 _playerPosition;
    private Vector3 _playerRotation;

    // Player の Prefab
    public GameObject playerPrefab;
    private GameObject _playerObj;

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
        _playerId = _photonView.isMine ? 1 : 0; // 敵の ID
        _positionTracker = GetComponent<PositionTracker>();

        _playerObj = Instantiate(playerPrefab,
                                 -_positionTracker.PlayerPositionOffset(1),
                                 Quaternion.Euler(_positionTracker.PlayerRotationOffset(1)));

    }

    void Update()
    {
        _playerObj.transform.position = _positionTracker.PlayerPosition(_playerId, 1);
        _playerObj.transform.rotation = Quaternion.Euler(_positionTracker.PlayerRotation(_playerId, 1));

    }
}
