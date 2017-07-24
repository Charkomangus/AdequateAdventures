/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using UnityEngine;
namespace Assets.Scripts.Actors
{
    /// <summary>
    /// THis class starts guards up and keeps track of them for reseting purposes
    /// </summary>
    public class GuardManager : MonoBehaviour
    {
        [SerializeField]private Guard[] _guards;

        /// <summary>
        /// Initialize all the guards in the current level
        /// </summary>
        public void SpawnGuards()
        {
            _guards = FindObjectsOfType<Guard>();
            foreach (var guard in _guards)
            {
                guard.InitializeGuard();
            }
        }

        /// <summary>
        /// Reset all the guards in the current level
        /// </summary>
        public void ResetGuards()
        {
            foreach (var guard in _guards)
            {
                guard.ResetGuard();
            }
        }
    }
}
