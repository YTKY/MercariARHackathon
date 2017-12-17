using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GodManager : MonoBehaviour
{
    //// Player の座標、回転
    //private Vector3 _playerPosition;
    //private Vector3 _playerRotation;

    // Player の Prefab
    public GameObject playerPrefab;
    private GameObject[] _playerObj;

    private PositionTracker _positionTracker;

    void Start () {
        _positionTracker = GetComponent<PositionTracker>();
        _playerObj = new GameObject[] {Instantiate(playerPrefab),
                                       Instantiate(playerPrefab)};
	}
	
	void Update () {
        for (int i = 0; i<2; i++) 
        {
            _playerObj[i].transform.position = _positionTracker.PlayerPosition(i, i);
            _playerObj[i].transform.rotation = Quaternion.Euler(_positionTracker.PlayerRotation(i, i));  
            //Debug.Log("Player " + i.ToString());
            //Debug.Log(_playerObj[i].transform.position);
            //Debug.Log(_playerObj[i].transform.rotation);
        }

	}
}
