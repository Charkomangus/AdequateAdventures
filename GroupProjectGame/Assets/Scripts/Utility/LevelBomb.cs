/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Utility
{
    /// <summary>
    /// Once a gameobject with this script attached is activated the scene will change. To be used in cinematics animation
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
}
