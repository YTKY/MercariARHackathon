using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GodManager : MonoBehaviour
{
    // Player の座標、回転
    private Vector3 _playerPosition;
    private Vector3 _playerRotation;

    // Player の Prefab
    public GameObject playerPrefab;
    private GameObject _playerObj;

    private PositionTracker _positionTracker;

    void Start () {
        _playerObj = Instantiate(playerPrefab);
        _positionTracker = GetComponent<PositionTracker>();
	}
	
	// Update is called once per frame
	void Update () {
        _playerObj.transform.position = _positionTracker.PlayerPosition();
        _playerObj.transform.rotation = Quaternion.Euler(_positionTracker.PlayerRotation());
	}
}
