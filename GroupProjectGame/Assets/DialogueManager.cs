using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueManager : MonoBehaviour
{

    public bool Open;

    [SerializeField] private Animator[] _animators;

	// Use this for initialization
	void Start ()
	{
	    _animators = GetComponentsInChildren<Animator>();

	}
	
	// Update is called once per frame
	void Update () {
	    foreach (var animator in _animators)
	    {
	        animator.SetBool("Open", Open);
	    }
	}
}
