﻿using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Assets.Scripts.Ui
{
    public class JournalManager : MonoBehaviour
    {

        private Animator _animator;

        private GameObject _evidence, _options;
     private Button[] _evidenceButtons;
        private Sprite[] _hiddenSprites;
       private Sprite[] _foundSprites;
        private GameObject[] _pageButtons;
      private GameObject _evidenceTextBox;
        [SerializeField] private string[] _evidenceTexts;
        private EventSystem eventSystem;

        // Use this for initialization
        void Start()
        {
            _animator = GetComponent<Animator>();
            _evidence = GameObject.FindGameObjectWithTag("Evidence");
            _evidenceButtons = _evidence.GetComponentsInChildren<Button>();
            _options = GameObject.FindGameObjectWithTag("Options");
            _evidenceTextBox = GameObject.FindGameObjectWithTag("EvidenceTextBox");

            _hiddenSprites = Resources.LoadAll<Sprite>("Evidence/Hidden/");
            _foundSprites = Resources.LoadAll<Sprite>("Evidence/Found/");
            _pageButtons = GameObject.FindGameObjectsWithTag("PageButtons");

            for (int i = 0; i < _evidenceButtons.Length; i++)
            {
                var i1 = i;
                _evidenceButtons[i].onClick.AddListener(delegate { OpenEvidenceTextBox(i1); });
                EvidenceFound(i1, false);
                if (i1 < 3)
                EvidenceFound(i1, true);
            }
            _evidenceTextBox.GetComponent<Button>().onClick.AddListener(delegate
            {
                _evidence.GetComponent<CanvasGroup>().interactable = true; _evidenceTextBox.GetComponent<Animator>().SetBool("Open", false); });


        }



        // Update is called once per frame
        void Update ()
        {
            if (Input.GetKeyDown(KeyCode.J))
              OpenJournal(true);



            else if (Input.GetKeyDown(KeyCode.Escape))
                if (_evidenceTextBox.GetComponent<Animator>().GetBool("Open"))
                {
                    _evidence.GetComponent<CanvasGroup>().interactable = true; _evidenceTextBox.GetComponent<Animator>().SetBool("Open", false);
                }
                else
                    OpenJournal(false);

            else if(Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
                PreviousPage();

            else if(Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
                NextPage();

            else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
                NextPage();
            else
            {
                _evidenceButtons[0].Select();
            }
        }


        private void OpenEvidenceTextBox(int evidence)
        {
            _evidenceTextBox.GetComponent<Animator>().SetBool("Open", true);
            _evidenceTextBox.GetComponentInChildren<Text>().text = _evidenceTexts[evidence];
            _evidence.GetComponent<CanvasGroup>().interactable = false;
        }

        //Open the options page
        public void NextPage()
        {
            _pageButtons[1].SetActive(true);
            _pageButtons[0].SetActive(false);
            _evidence.SetActive(false);
            _options.SetActive(true);
            
        }

        //Open the evidence Page
        public void PreviousPage()
        {
            _pageButtons[1].SetActive(false);
            _pageButtons[0].SetActive(true);
            _evidence.SetActive(true);
            _options.SetActive(false);
          
        }


        //Open the journal
        public void OpenJournal(bool status)
        {
            if (status)
            {
                PreviousPage();
                Time.timeScale = 0;
            }
            else
                Time.timeScale = 1;

            _animator.SetBool("Open", status);
        }


        //if the evidence is found make it into an interactable button and change the graphic accordingly
        public void EvidenceFound(int evidence, bool status)
        {
            Sprite sprite;
            if (status)
            {
                _evidenceButtons[evidence].interactable = true;
                sprite = _foundSprites[evidence];
            }
            else
            {
                _evidenceButtons[evidence].interactable = false;
                sprite = _hiddenSprites[evidence];
            }

            //This is done to exlude the parent buttons image
            var temp = _evidenceButtons[evidence].GetComponentsInChildren<Image>();
            foreach (Image image in temp)
            {
                if (image.gameObject == _evidenceButtons[evidence].gameObject) continue;
                image.sprite = sprite;
                break;
            }
        
              


         
        }
    }
}
