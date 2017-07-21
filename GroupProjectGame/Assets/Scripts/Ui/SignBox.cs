/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using Assets.Scripts.MainManagers;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.Ui
{
    /// <summary>
    /// Sign object - when interacted with by the player UI textbox will appear with the stored text found here.
    /// </summary>
    public class SignBox : MonoBehaviour
    {
        private Animator _signBoxAnimator;
        private Text _signBoxText;
        
        /// <summary>
        /// Use this for initialization
        /// </summary>
        private void Start ()
        {
            _signBoxAnimator = GetComponent<Animator>();
            _signBoxText = GetComponentInChildren<Text>();
        }
        
        /// <summary>
        /// Update is called once per frame
        /// </summary>
        private void Update()
        {
            //Switch off when the player moves away
            if (GameManager.Instance.Player.IsMoving() && _signBoxAnimator.GetBool("Open"))
            {
                Open();
            }
        }

        /// <summary>
        /// Change stored text
        /// </summary>
        public void SetTextBoxText(string newText)
        {
            _signBoxText.text = newText;
        }

        /// <summary>
        /// Change status of the animator
        /// </summary>
        public void Open()
        {
            _signBoxAnimator.SetBool("Open", !_signBoxAnimator.GetBool("Open"));
        }

        /// <summary>
        /// Returns text box's current state
        /// </summary>
        public bool IsOpen()
        {
            return _signBoxAnimator.GetBool("Open");
        }
    }
}
