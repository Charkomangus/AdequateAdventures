using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Assets.Scripts.Managers
{
    public class MenuManager : MonoBehaviour
    {


        public Button start;
        public Button End;

        // Use this for initialization
        private void Start()
        {
         
            start.onClick.AddListener(delegate { StartCoroutine(StartGame()); });
            End.onClick.AddListener(EndGame);
        }


        private IEnumerator StartGame()
        {
            GetComponent<Animator>().SetBool("Open", false);
            start.interactable = false;
         
            yield return new WaitForSeconds(3);
            SceneManager.LoadScene("LevelLoader");
        }

        public void EndGame()
        {
            Application.Quit();
        }
    }
}


