/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using UnityEngine;

namespace Assets.Scripts.Managers
{
    /// <summary>
    /// This class ensures that cinematics trigger at the right time.
    /// </summary>
    public class CinematicsManager : MonoBehaviour
    {

        private Animator[] _cinematics;

        /// <summary>
        /// Use this for initialization
        /// </summary>
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
    }
}
