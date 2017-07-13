using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JournalManager : MonoBehaviour
{

    private Animator _animator;

	// Use this for initialization
	void Start ()
	{
	    _animator = GetComponent<Animator>();

	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OpenJournal(bool status)
    {
        _animator.SetBool("Open", status);
    }
}
