using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class MenuManager : MonoBehaviour
{


    public Button start;
    public Button End;

    // Use this for initialization
    void Start()
    {
        start.onClick.AddListener(delegate { StartGame(); });
        End.onClick.AddListener(delegate { EndGame();   });
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


