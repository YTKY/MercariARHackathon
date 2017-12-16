using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneLoader : MonoBehaviour 
{
    private LoginManager _loginManager;

    void Start()
    {
        _loginManager = GetComponent<LoginManager>();
    }

    public void LoadPlayerScene () 
    {
        _loginManager.Login("Player");
    }

    public void LoadGodScene () 
    {
        _loginManager.Login("God");
    }
}
