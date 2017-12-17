using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletManager : MonoBehaviour {

	void Start () {
		
	}
	
	void Update () {
		
	}

    private void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == "Player") 
        {
            int playerId;
            playerId = collision.transform.GetComponent<PlayerController>().GetPlayerId();
            Debug.Log("Shot the player " + playerId.ToString());
        }
    }
}
