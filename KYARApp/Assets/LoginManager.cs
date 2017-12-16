using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoginManager : Photon.PunBehaviour
{
    private string _gameVersion = "v0.01";
    private string _nextScene;

    public void Login(string nextScene)
    {
        _nextScene = nextScene;

        if (!PhotonNetwork.connected)
        {
            PhotonNetwork.ConnectUsingSettings(_gameVersion);
        }
    }

    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        Debug.Log("Joined Lobby.");
        PhotonNetwork.JoinRandomRoom();
    }

    public override void OnPhotonRandomJoinFailed(object[] codeAndMsg)
    {
        base.OnPhotonRandomJoinFailed(codeAndMsg);
        Debug.Log("Failed: OnPhotonRandomJoin");
        RoomOptions roomOptions = new RoomOptions();
        //roomOptions.MaxPlayers = 3;
        PhotonNetwork.CreateRoom("", roomOptions, null);
    }

    public override void OnPhotonPlayerDisconnected(PhotonPlayer otherPlayer)
    {
        base.OnPhotonPlayerDisconnected(otherPlayer);
        Debug.Log("Another player disconnect.");
        PhotonNetwork.Disconnect();
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log("Joined Room.");
        PhotonNetwork.LoadLevel(_nextScene);
    }
}
