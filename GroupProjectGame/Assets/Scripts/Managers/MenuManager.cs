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
            start.onClick.AddListener(StartGame);
            End.onClick.AddListener(EndGame);
        }


        public void StartGame()
        {
            SceneManager.LoadScene("Level1");
        }

        public void EndGame()
        {
            Application.Quit();
        }
    }
}


