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
    /// This class loads the appropriate image to match the current level.
    /// </summary>
    public class EnviromentManager : MonoBehaviour
    {
        /// <summary>
        /// Load the enviroment art image
        /// </summary>
        /// <param name="mapName"></param>
        public void LoadEnviromentArt(string mapName)
        {
            GetComponentInChildren<SpriteRenderer>().sprite = Resources.Load<Sprite>("LevelMapArt/EnviromentArt/" + mapName); 
        }
    }
}
