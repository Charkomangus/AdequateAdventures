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
    /// Quits the game if input is given during the end scene.
    /// </summary>
    public class EndManager : MonoBehaviour
    {
        /// <summary>
        /// Update is called once per frame.
        /// </summary>
        void Update ()
        {
            if (Input.GetKey(KeyCode.Escape) || Input.GetKey(KeyCode.E) || Input.GetKeyDown(KeyCode.Keypad0))
                Application.Quit();
        }
    }
}
