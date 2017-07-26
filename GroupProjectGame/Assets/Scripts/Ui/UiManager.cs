/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using Assets.Scripts.Objects;
using UnityEngine;

namespace Assets.Scripts.Ui
{
    /// <summary>
    /// This class manages the various signs found in the game and the fade in - fade out screen
    /// </summary>
    public class UiManager : MonoBehaviour
    {
        private SignBox _signBox;
        [SerializeField]
        private Sign[] _signs;
        [SerializeField]private TextAsset[] _signTexts;
        private Animator _fade;
        private Animator _checkpoint;

        /// <summary>
        /// Fade is needed straight away so it goes in awake
        /// </summary>
        private void Awake()
        {
            _fade = GameObject.FindGameObjectWithTag("Fade").GetComponent<Animator>();

        }

        /// <summary>
        /// Find the signs and the UI element SignBox
        /// </summary>
        private void Start()
        {
            _signs = FindObjectsOfType<Sign>();
            _signTexts = Resources.LoadAll<TextAsset>("Sign/Text/");
            _signBox = FindObjectOfType<SignBox>();
            _checkpoint = GameObject.FindGameObjectWithTag("Checkpoint").GetComponent<Animator>();
        }

        /// <summary>
        /// Update is called once per frame
        /// </summary>
        private void Update()
        {
            //If the signs array is emptry fill it with all the signs
            if (_signs.Length <= 0)
            {
                _signs = FindObjectsOfType<Sign>();




                //Set each sign to its corresponding text
                for (int i = 0; i < _signs.Length; i++)
                {
                    _signs[i].SetSignText(_signTexts[i].text);
                }
            }

        }

        /// <summary>
        /// Open the signbox UI
        /// </summary>
        public void Open(string text)
        {
            _signBox.SetTextBoxText(text);
            _signBox.Open();
        }

        /// <summary>
        /// Open and close the fade
        /// </summary>
        public void SetFade(bool status)
        {
            if (_fade == null) return;
            _fade.SetBool("Open", status);
        }

        /// <summary>
        /// Switches on the checkpoint animation
        /// </summary>
        public void TriggerCheckpoint()
        {
            _checkpoint.SetTrigger("Open");
        }

    }
}
    
