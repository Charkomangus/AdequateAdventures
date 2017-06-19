using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UiManager : MonoBehaviour
{


    public SignBox signBox;
    public Sign[] signs;
    public string[] SignTexts;
    // Use this for initialization
    void Start()
    {
        signBox = GameObject.FindObjectOfType<SignBox>();
        signs = GameObject.FindObjectsOfType<Sign>();

        for (int i = 0; i < signs.Length; i++)
        {
            signs[i].SetSignText(SignTexts[i]);
        }
        
        

     
    }

    // Update is called once per frame
    void Update()
    {
        signs = GameObject.FindObjectsOfType<Sign>();
    }

    public void Open(string text)
    {
        signBox.SetTextBoxText(text);
        signBox.Open(true);
    }

    
}
    
