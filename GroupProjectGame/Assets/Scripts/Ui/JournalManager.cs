/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/

using System.Collections;
using Assets.Scripts.MainManagers;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Assets.Scripts.Ui
{
    /// <summary>
    /// This class is responsible for the journal - it's animation and content. 
    /// </summary>
    public class JournalManager : MonoBehaviour
    {
        private Animator _animator;
        private GameObject _evidence, _options;
        private Button[] _evidenceButtons;
        private Sprite[] _hiddenSprites;
        private Sprite[] _foundSprites;
        private GameObject[] _pageButtons;
        private GameObject _evidenceTextBox;
        [SerializeField]private bool _evidencePicked;
        [SerializeField]private bool _inputFrozen;
        [SerializeField]private TextAsset[] _evidenceTexts;

        /// <summary>
        /// Find all the necessery componments and set them to the default values
        /// </summary>
        private void Start()
        {
            //Find journal compoments
            _animator = GetComponent<Animator>();
            _evidence = GameObject.FindGameObjectWithTag("Evidence");
            _evidenceButtons = _evidence.GetComponentsInChildren<Button>();
            _options = GameObject.FindGameObjectWithTag("Options");
            _evidenceTextBox = GameObject.FindGameObjectWithTag("EvidenceTextBox");
            _pageButtons = GameObject.FindGameObjectsWithTag("PageButtons");
            
            //Load items from resourses
            _evidenceTexts = Resources.LoadAll<TextAsset>("Evidence/Text/");
            _hiddenSprites = Resources.LoadAll<Sprite>("Evidence/Hidden/");
            _foundSprites = Resources.LoadAll<Sprite>("Evidence/Found/");
            
            //Set all evidence buttons to be hidden
            for (int i = 0; i < _evidenceButtons.Length; i++)
            {
                var i1 = i; //Using local variable
                _evidenceButtons[i].onClick.AddListener(delegate { OpenEvidenceTextBox(i1); });
                EvidenceFound(i, false);
            }

            //If the evidence text box is clicked it will make the evidence interactable and close itself
            _evidenceTextBox.GetComponent<Button>().onClick.AddListener(delegate{_evidence.GetComponent<CanvasGroup>().interactable = true;_evidenceTextBox.GetComponent<Animator>().SetBool("Open", false);});
        }


        /// <summary>
        /// Update is called once per frame
        /// </summary>
        private void Update()
        {
            if (_inputFrozen) return;
            JournalInput();
        }

        /// <summary>
        /// J will colose the evidence text box if its open otherwise will completely close the journal
        /// </summary>
        private void JournalInput()
        {
            if (Input.GetKeyDown(KeyCode.J))
            {
                if (_evidenceTextBox.GetComponent<Animator>().GetBool("Open"))
                {
                    _evidence.GetComponent<CanvasGroup>().interactable = true;
                    _evidenceTextBox.GetComponent<Animator>().SetBool("Open", false);
                }
                else
                {
               
                    OpenJournal(!_animator.GetBool("Open"));
                }
            }
            else if (Input.GetKeyDown(KeyCode.X))
            {
                OpenJournal(!_animator.GetBool("Open"));
            }

            else if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
                PreviousPage();

            else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
                NextPage();


            //EVIDENCE - if the evidence is found and its number is pressed open it
            if ((Input.GetKeyDown(KeyCode.Keypad1) || Input.GetKeyDown(KeyCode.Alpha1)) && _evidenceButtons[0].interactable)
            {
                OpenEvidenceTextBox(0);
            }
            else if ((Input.GetKeyDown(KeyCode.Keypad2) || Input.GetKeyDown(KeyCode.Alpha2)) && _evidenceButtons[1].interactable)
            {
                OpenEvidenceTextBox(1);
            }
            else if ((Input.GetKeyDown(KeyCode.Keypad3) || Input.GetKeyDown(KeyCode.Alpha3)) && _evidenceButtons[2].interactable)
            {
                OpenEvidenceTextBox(2);
            }
            else if ((Input.GetKeyDown(KeyCode.Keypad4) || Input.GetKeyDown(KeyCode.Alpha4)) && _evidenceButtons[3].interactable)
            {
                OpenEvidenceTextBox(3);
            }
            else if ((Input.GetKeyDown(KeyCode.Keypad5) || Input.GetKeyDown(KeyCode.Alpha5)) && _evidenceButtons[4].interactable)
            {
                OpenEvidenceTextBox(4);
            }
            else if ((Input.GetKeyDown(KeyCode.Keypad6) || Input.GetKeyDown(KeyCode.Alpha6)) && _evidenceButtons[5].interactable)
            {
                OpenEvidenceTextBox(5);
            }
            else if ((Input.GetKeyDown(KeyCode.Keypad7) || Input.GetKeyDown(KeyCode.Alpha7)) && _evidenceButtons[6].interactable)
            {
                OpenEvidenceTextBox(6);
            }
            else if ((Input.GetKeyDown(KeyCode.Keypad8) || Input.GetKeyDown(KeyCode.Alpha8)) && _evidenceButtons[7].interactable)
            {
                OpenEvidenceTextBox(7);
            }
            else if ((Input.GetKeyDown(KeyCode.Keypad9) || Input.GetKeyDown(KeyCode.Alpha9)) && _evidenceButtons[8].interactable)
            {
                OpenEvidenceTextBox(8);
            }
        }
        
        /// <summary>
        /// Set the aproporate text then open the textBox - adiditinaly set the evidence to be non-interactable
        /// </summary>
        /// <param name="evidence"></param>
        private void OpenEvidenceTextBox(int evidence)
        {
            _evidenceTextBox.GetComponent<Animator>().SetBool("Open", true);
            _evidenceTextBox.GetComponentInChildren<Text>().text = _evidenceTexts[evidence].text;
            _evidence.GetComponent<CanvasGroup>().interactable = false;
        }
 
        /// <summary>
        /// Open Page 2 - Options
        /// </summary>
        public void NextPage()
        {
            _pageButtons[1].SetActive(true);
            _pageButtons[0].SetActive(false);
            _evidence.SetActive(false);
            _options.SetActive(true);
        }

        /// <summary>
        /// Open Page 1 - Evidence
        /// </summary>
        public void PreviousPage()
        {
            _pageButtons[1].SetActive(false);
            _pageButtons[0].SetActive(true);
            _evidence.SetActive(true);
            _options.SetActive(false);
        }



        /// <summary>
        /// Open or close the journal - freeze time for everything but UI
        /// </summary>
        /// <param name="status"></param>
        public void OpenJournal(bool status)
        {
            if (status)
            {
                PreviousPage();
                Time.timeScale = 0;
                Cursor.visible = true;
            }
            else
            {
                _evidenceTextBox.GetComponent<Animator>().SetBool("Open", false);
                _evidence.GetComponent<CanvasGroup>().interactable = true;
                Time.timeScale = 1;
                Cursor.visible = false;
                if (_evidencePicked)
                {
                    GameManager.Instance.TriggerDialogue();
                    _evidencePicked = false;
                }
            }

            _animator.SetBool("Open", status);
        }
       
        /// <summary>
        /// If the evidence is found make it into an interactable button and change the graphic accordingly
        /// </summary>
        /// <param name="evidence"></param>Which button should be affected
        /// <param name="status"></param>True of False - Open or Close
        public void EvidenceFound(int evidence, bool status)
        {
            Sprite sprite;
            //Make the button interactable and show the sprite and text
            if (status)
            {
                _evidenceButtons[evidence].interactable = true;
                sprite = _foundSprites[evidence];
                _evidenceButtons[evidence].GetComponentInChildren<Text>().text = evidence + " - Evidence";
            }
            //Make the button non-interactable and hide the sprite and text
            else
            {
                _evidenceButtons[evidence].interactable = false;
                sprite = _hiddenSprites[evidence];
                _evidenceButtons[evidence].GetComponentInChildren<Text>().text = "";
            }

            //This is done to exlude the parent buttons image
            var images = _evidenceButtons[evidence].GetComponentsInChildren<Image>();
            foreach (Image image in images)
            {
                if (image.gameObject == _evidenceButtons[evidence].gameObject) continue;
                image.sprite = sprite;
                break;
            }
        }

        //Guard waits in place
        /// <summary>
        /// Open the recently aquired evidence and show the contents
        /// </summary>
        /// <param name="number"></param>
        /// <returns></returns>
        public IEnumerator OpenEvidence(int number)
        {
            _inputFrozen = true;
            _evidencePicked = true;
            OpenJournal(true);
            yield return new WaitForSecondsRealtime(0.75f);
            OpenEvidenceTextBox(number);
            yield return new WaitForSecondsRealtime(0.75f);
            _inputFrozen = false;
        }

        /// <summary>
        /// Return true if the journal is open
        /// </summary>
        public bool IsOpen()
        {
            return _animator.GetBool("Open");
        }

        /// <summary>
        /// Return the game to the menu
        /// </summary>
        public void GoBackToMenu()
        {
           SceneManager.LoadScene("Menu");
        }
    }
}
