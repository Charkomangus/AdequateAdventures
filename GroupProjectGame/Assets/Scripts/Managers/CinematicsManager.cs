using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// This class ensures that cinematics trigger at the right time
/// </summary>
public class CinematicsManager : MonoBehaviour
{

    private Animator[] _cinematics;
	// Use this for initialization
	void Start ()
	{
	    _cinematics = GetComponentsInChildren<Animator>();
	}

    /// <summary>
    /// Open a cinematic
    /// </summary>
    /// <param name="i"></param>
    public void TriggerCinematic(int i)
    {
        _cinematics[i].SetTrigger("Open");
    }


    private void OnLevelWasLoaded()
    {
        var act = GameManager.Instance.CurrentAct;
        var level = GameManager.Instance.CurrentLevel;

        switch (act)
        {
            case 1:
                switch (level)
                {
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                }
                break;
            case 2:
                break;
            case 3:
                break;
        }

    }


}
