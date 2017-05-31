using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UiManager : MonoBehaviour
{

    public GameObject _final;
    public Animator fade, _finalFade;

    public Button LetHimFree;
    public Button TurnHimIn;
    public Button LetHimBurn;

    // Use this for initialization
    void Start ()
	{
	  
	    LetHimFree.onClick.AddListener(delegate { EndGame(0); });
	    TurnHimIn.onClick.AddListener(delegate { EndGame(1); });
	    LetHimBurn.onClick.AddListener(delegate { EndGame(2); });
    }
	
	// Update is called once per frame
	void Update () {
	    if (GameManager.Instance.CurrentLevel == 10 && !_final.activeSelf && SceneManager.GetActiveScene().name == "Level1")
	    {
	        _final.SetActive(true);
	    }
        if(SceneManager.GetActiveScene().name == "Outro")
            _final.SetActive(false);
    }


    void EndGame(int end)
    {
        GameManager.Instance.Ending = end;
        if(end ==2)
            _finalFade.GetComponent<Image>().color = new Color(0.7f,0.1f,0.1f,0);
           _finalFade.SetTrigger("Failde");


    }

    public void TriggerFade()
    {
        fade.SetTrigger("Fade");
    }
}
