/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using UnityEngine;
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
        [SerializeField] private TextAsset[] _evidenceTexts;

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
                    OpenJournal(!_animator.GetBool("Open"));
            }

            else if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
                PreviousPage();

            else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
                NextPage();
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
            }
            else
            {
                _evidenceTextBox.GetComponent<Animator>().SetBool("Open", false);
                _evidence.GetComponent<CanvasGroup>().interactable = true;
                Time.timeScale = 1;
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
                _evidenceButtons[evidence].GetComponentInChildren<Text>().text = "Evidence";
            }
            //Make the button non-interactable and hide the sprite and text
            else
            {
                _evidenceButtons[evidence].interactable = false;
                sprite = _hiddenSprites[evidence];
                _evidenceButtons[evidence].GetComponentInChildren<Text>().text = "";
            }

            //This is done to exlude the parent buttons image
            var Images = _evidenceButtons[evidence].GetComponentsInChildren<Image>();
            foreach (Image image in Images)
            {
                if (image.gameObject == _evidenceButtons[evidence].gameObject) continue;
                image.sprite = sprite;
                break;
            }
        }
    }
}
