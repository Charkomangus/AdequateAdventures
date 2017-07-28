using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using UnityEngine;

/// <summary>
/// Once a gameobject with this script attached is activated the scene will change. To be used in animation
/// </summary>
public class LevelBomb : MonoBehaviour {

    /// <summary>
    /// Next Level
    /// </summary>
    void Start()
    {
        GameManager.Instance.NextLevel();
    }


}
