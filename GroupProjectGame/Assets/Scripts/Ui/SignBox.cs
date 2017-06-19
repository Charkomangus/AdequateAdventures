using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using UnityEngine;
using UnityEngine.UI;

public class SignBox : MonoBehaviour
{

    public Animator SignBoxAnimator;
    public Text SignBoxText;



    // Use this for initialization
    void Start ()
    {
        SignBoxAnimator = GetComponent<Animator>();
        SignBoxText = GetComponentInChildren<Text>();
    }
	
	// Update is called once per frame
	void Update () {
	    if (GameManager.Instance.Player.IsMoving())
	    {
	        Open(false);
	    }
	}

    public void SetTextBoxText(string newText)
    {
        SignBoxText.text = newText;
    }

    public void Open(bool status)
    {
        SignBoxAnimator.SetBool("Open", status);
    }

    public bool IsOpen()
    {
        return SignBoxAnimator.GetBool("Open");
    }

    private void OnMouseDown()
    {
       Open(false);
        
    }


}
