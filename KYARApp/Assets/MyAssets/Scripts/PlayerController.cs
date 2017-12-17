using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    private PositionTracker _positionTracker;

    private int _playerId;

	void Start () {
        //_playerId = -1;
        _positionTracker = GameObject.Find("ARManager").GetComponent<PositionTracker>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public int GetPlayerId () 
    {
        return _playerId;
    }

    public void SetPlayerId (int playerId) 
    {
        _playerId = playerId;
    }


}
