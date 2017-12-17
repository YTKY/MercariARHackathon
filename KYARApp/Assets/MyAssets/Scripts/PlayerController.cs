using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    private PositionTracker _positionTracker;
    private int _playerId;

    private int _hp;
    public GameObject[] barriers;
    public GameObject particle;
    public GameObject player;
    public GameObject[] playerSkin;

    void Start()
    {
        _hp = 3;
        _positionTracker = GameObject.Find("ARManager").GetComponent<PositionTracker>();
        playerSkin[_playerId].SetActive(true);
    }

    public int GetPlayerId()
    {
        return _playerId;
    }

    public void SetPlayerId(int playerId)
    {
        _playerId = playerId;
    }

    public void Damage()
    {
        _hp--;
        if (_hp == 0)
        {
            Instantiate(particle, player.transform.position, Quaternion.identity);
            Destroy(player);
        }
        else
        {
            Instantiate(particle, barriers[_hp - 1].transform.position, Quaternion.identity);
            Destroy(barriers[_hp - 1]);
        }
    }

}
