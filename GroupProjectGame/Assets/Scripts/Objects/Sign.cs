using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sign : MonoBehaviour
{


    [SerializeField] private string SignText;

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }


    public string ReturnSignText()
    {
        return SignText;
    }
    
    public void SetSignText(string text)
    {
        SignText = text;
    }
}
