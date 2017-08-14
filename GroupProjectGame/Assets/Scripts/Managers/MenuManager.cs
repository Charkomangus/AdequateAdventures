/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Assets.Scripts.Managers
{
    /// <summary>
    /// This class controls the main  menu. Assigns uses to buttons mainly.
    /// </summary>
    public class MenuManager : MonoBehaviour
    {
        public Button start;
        public Button End;

        /// <summary>
        ///  Use this for initialization
        /// </summary>
        private void Start()
        {
         
            start.onClick.AddListener(delegate { StartCoroutine(StartGame()); });
            End.onClick.AddListener(EndGame);
        }

        /// <summary>
        /// Waits until the application laods then starts the game
        /// </summary>
        /// <returns></returns>
        private IEnumerator StartGame()
        {
            GetComponent<Animator>().SetBool("Open", false);
            start.interactable = false;
         
            yield return new WaitForSeconds(2.5f);
            SceneManager.LoadScene("LevelLoader");
        }

        /// <summary>
        /// Quits application
        /// </summary>
        public void EndGame()
        {
            Application.Quit();
        }
    }
}


