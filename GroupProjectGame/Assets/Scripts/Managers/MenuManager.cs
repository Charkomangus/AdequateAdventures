using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class MenuManager : MonoBehaviour
{


    public Button start;
    public Button end;

    // Use this for initialization
    void Start()
    {
        start.onClick.AddListener(delegate { StartGame(); });
        end.onClick.AddListener(delegate { EndGame();   });
    }



    public void StartGame()
    {
        SceneManager.LoadScene("Intro");
    }

    public void EndGame()
    {
        Application.Quit();
    }
}


