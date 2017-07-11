using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Assets.Scripts.MapCreator;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Assets.Scripts.Dialogue
{
    public class DialogueManager : MonoBehaviour, IPointerDownHandler
    {
        [SerializeField]private Sprite[] _portraits;
        [SerializeField]private Animator _actor0, _actor1, _textbox, _managerAnimator;
        [SerializeField]private DialogueCreatorManager _manager;
        [SerializeField] private Line[] _lines;
        [SerializeField]private int _currentPage, _maxPage;
        [SerializeField]private Text _content;
        [SerializeField] private GameObject _actorName, _choisesTransform;
        [SerializeField]private Line _currentyLine;
        [SerializeField]private Text _expressionText;
        [SerializeField] private GameObject _choisePrefab;

        [SerializeField] private List<GameObject> _choises;
        [SerializeField] private int _currentBranch;
          // Use this for initialization
        void Awake()
        {
            _portraits = Resources.LoadAll<Sprite>("Portraits");
          
             _manager = GameObject.FindObjectOfType<DialogueCreatorManager>();
            _content = GameObject.FindGameObjectWithTag("Content").GetComponent<Text>();
            _actorName = GameObject.FindGameObjectWithTag("ActorName");
            _choisesTransform = GameObject.FindGameObjectWithTag("Choises");
       
        }

        private void Update()
        {

            if (_managerAnimator.GetBool("Open") &&            (Input.GetKeyDown(KeyCode.E) || Input.GetKeyDown(KeyCode.KeypadEnter)))
            {
                Debug.Log(_lines[_currentPage].Special);
                var line = _lines[_currentPage];

                if (line.Special == 0)
                    NextLine();
                else if (!_choisesTransform.GetComponent<Animator>().GetBool("Open"))
                {
                    _choisesTransform.GetComponent<Animator>().SetBool("Open", true);

                    InstantiateChoise(line.Choise0);
                    InstantiateChoise(line.Choise1);
                    InstantiateChoise(line.Choise2);

                }
            }
        }


        //Opens the dialogue TEMP - for dialogue creator use only!
        public void OpenDialogue()
        {
            _lines = _manager.ReturnLines().ToArray();
            _maxPage = _lines.Length;
            if (_currentPage < _maxPage)
            {
                Debug.Log("OPEN");
                _managerAnimator.SetBool("Open", true);
                _textbox.SetBool("Open", true);
               
                _currentyLine = _lines[_currentPage];
                SetActor(_currentyLine);
                SetContent(_currentyLine);
            }
            else
                CloseDialogue();
        }


        //Close the dialogue screen
        private void CloseDialogue()
        {
            _currentPage = 0;
           _managerAnimator.SetBool("Open", false);
            _textbox.SetBool("Open", false);
            _actor0.SetBool("Open", false);
            _actor1.SetBool("Open", false);
        }
      
        //Set the apropriate actors spite and position
        private void SetActor(Line line)
        {
         
            int direction = line.Direction;
            var actor = direction == 0 ? _actor0 : _actor1;
            Sprite sprite = _portraits[DetermineActor(line.Actor)];

            actor.GetComponent<Image>().sprite = sprite;
            actor.SetBool("Open", true);
            _actorName.GetComponentInChildren<Text>().text = line.Actor.ToString();
            _actorName.transform.localPosition = direction == 0 ? new Vector3(-750, _actorName.transform.localPosition.y, _actorName.transform.localPosition.z) : new Vector3(Mathf.Abs(_actorName.transform.localPosition.x), _actorName.transform.localPosition.y, _actorName.transform.localPosition.z);
            _expressionText.text = _currentyLine.ActorExpression.ToString(); //TEMP
            _expressionText.transform.localPosition = direction == 0 ? new Vector3(-750, _expressionText.transform.localPosition.y, _expressionText.transform.localPosition.z) : new Vector3(Mathf.Abs(_expressionText.transform.localPosition.x), _expressionText.transform.localPosition.y, _expressionText.transform.localPosition.z);
        }

        //Load the next line of dialogue
        private void NextLine()
        {
         
            foreach (var choise in _choises)
            {
                Destroy(choise.gameObject);
            }
            _choises.Clear();


            _currentPage++;
            if (_currentPage < _maxPage)
            {
                if (_lines[_currentPage].Branch == _currentBranch)
                {
                    _currentyLine = _lines[_currentPage];
                    SetActor(_currentyLine);
                    SetContent(_currentyLine);
                }
                else if (_lines[_currentPage].Branch == 0)
                {

                    _currentyLine = _lines[_currentPage];
                    SetActor(_currentyLine);
                    SetContent(_currentyLine);
                }
                else
                {
                    NextLine();
                }
            }
            else
                CloseDialogue();
        }

        //Create a new line
        private void CreateNewLine(string content)
        {
            _lines[_currentPage] = _lines[_currentPage + 1];
            _lines[_currentPage].Content = content;
            _lines[_currentPage].Special = 0;
            
            SetContent(_lines[_currentPage]);
            SetActor(_lines[_currentPage]);
            _currentPage++;

        }

        //Set the content
        private void SetContent(Line line)
        {
            _content.text = line.Content;
        }



        public void OnPointerDown(PointerEventData eventData)
        {
            Debug.Log(_lines[_currentPage].Special);
            var line =  _lines[_currentPage];


            if (line.Special == 0)
                NextLine();
            else if(!_choisesTransform.GetComponent<Animator>().GetBool("Open"))
            {
                _choisesTransform.GetComponent<Animator>().SetBool("Open", true);

                InstantiateChoise(line.Choise0);
                InstantiateChoise(line.Choise1);
                InstantiateChoise(line.Choise2);

            }

        }

        //Create a new choise if there is content in the string
        private void InstantiateChoise(string choise)
        {
            if (string.IsNullOrEmpty(choise)) return;
            var button = Instantiate(_choisePrefab, _choisesTransform.transform);
            button.GetComponentInChildren<Text>().text = choise;
            button.GetComponent<Animator>().SetBool("Open", true);
            var temp = _choises.Count;
            button.GetComponent<Button>().onClick.AddListener(delegate { ChooseResponse(temp); });
            _choises.Add(button);
        }



        //Switch off the choises
        private void ChooseResponse(int chosenButton)
        {
            for (int j = 0; j < _choises.Count; j++)
            {
               if (j == chosenButton)
               {
                   _choises[j].GetComponent<Button>().interactable = false;
                    StartCoroutine(CloseSpecial(_choises[j]));
                   _currentBranch = chosenButton+1;
               }
                else
                {
                    _choises[j].GetComponent<Animator>().SetBool("Open", false);

                }
            }
        
        }

        //Close any remaining special items
        IEnumerator CloseSpecial(GameObject button)
        {
            yield return new WaitForSeconds(1);
            button.GetComponent<Animator>().SetBool("Open", false);
            yield return new WaitForSeconds(1);
            _choisesTransform.GetComponent<Animator>().SetBool("Open", false);
            CreateNewLine(button.GetComponentInChildren<Text>().text);
        
            
        }

        //Determines which value to set according to the actor given
        private int DetermineActor(Actor actor)
        {
            switch (actor)
            {
                case Actor.Badger:
                    return 0;
                case Actor.Beaver:
                    return 1;
                case Actor.Hedgehog:
                    return 2;
                case Actor.Mouse:
                    return 3;
                case Actor.InjuredMouse:
                    return 4;
                case Actor.Pig:
                    return 5;
                case Actor.Bunny:
                    return 6;
                case Actor.Rats:
                    return 7;
                case Actor.Weasel:
                    return 8;
                default:
                    throw new ArgumentOutOfRangeException("actor", actor, null);
            }
        }
    }
}
