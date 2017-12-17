using System.Collections;
using System.Collections.Generic;
using UnityEngine;

<<<<<<< HEAD
public class PlayerController : MonoBehaviour
=======
public class PlayerController : Photon.PunBehaviour
>>>>>>> master
{

    private PositionTracker _positionTracker;
    private int _playerId;

    public bool isMe;

    private int _hp;
    public GameObject[] barriers;
    public GameObject particle;
    public GameObject player;
    public GameObject[] playerSkin;

    public PhotonView _photonView;

    void Start ()
    {
        _hp = 3;
        _positionTracker = GameObject.Find("ARManager").GetComponent<PositionTracker>();
        EnableSkin(_playerId);

        _photonView = GetComponent<PhotonView>();
    }

    public void EnableSkin (int playerId) 
    {
        if (!isMe) playerSkin[playerId].SetActive(true);
    }

    public int GetPlayerId()
    {
        return _playerId;
    }

    public void SetPlayerId(int playerId)
    {
        _playerId = playerId;
        if (!isMe) EnableSkin(playerId);
    }


    public void Damage () 
    {
        _photonView.RPC("DamageRPC", PhotonTargets.All);
    }

    [PunRPC]
    void DamageRPC () 
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
