using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletManager : MonoBehaviour {

    // 打った人
    private int _shooterId;

    public void SetShooterId (int shooterId)
    {
        _shooterId = shooterId;
    }

    private void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == "Player") 
        {
            int playerId; // 打たれた人
            playerId = collision.transform.GetComponent<PlayerController>().GetPlayerId();

            if (playerId != _shooterId)
            {
                Debug.Log("Shot the player " + playerId.ToString());
            }
        }
    }
}
