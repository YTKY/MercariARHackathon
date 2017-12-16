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

    private PositionTracker _positionTracker;

    private void Awake()
    {
        _photonView = GetComponent<PhotonView>();
    }

    void Start()
    {
        _playerObj = Instantiate(playerPrefab);
        _positionTracker = GetComponent<PositionTracker>();
    }

    void Update()
    {
        int playerId = _photonView.isMine ? 1 : 0;

        _playerObj.transform.position = _positionTracker.PlayerPosition(playerId);
        _playerObj.transform.rotation = Quaternion.Euler(_positionTracker.PlayerRotation(playerId));

    }
}
