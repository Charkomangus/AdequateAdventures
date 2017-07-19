using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Assets.Scripts.MainManagers;
using Assets.Scripts.MapCreator;
using Assets.Scripts.Tiles;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Assets.Scripts.Dialogue
{
    public class DialogueManager : MonoBehaviour, IPointerDownHandler
    {
        [SerializeField]private Sprite[] _portraitsBunny, _portraitsBadger, _portraitsBeaver, _portraitsMouse, _portraitsInjuredMouse, _portraitsPig, _portraitsWeasel, _portraitsRats, _portraitsHedgehog;
        [SerializeField]private Animator _actor0, _actor1, _textbox, _managerAnimator;
        [SerializeField]private DialogueCreatorManager _manager;
        [SerializeField] private Line[] _lines = new Line[1000];
        [SerializeField]private int _currentPage, _maxPage;
        [SerializeField]private Text _content;
        [SerializeField] private GameObject _actorName, _choisesTransform;
        [SerializeField]private Line _currentyLine;
        [SerializeField] private GameObject _choisePrefab;

        [SerializeField] private List<GameObject> _choises;
        [SerializeField] private int _currentBranch;
          // Use this for initialization
        void Awake()
        {
            _portraitsBunny = Resources.LoadAll<Sprite>("Portraits/Bunny/");
            _portraitsBadger = Resources.LoadAll<Sprite>("Portraits/Badger/");
            _portraitsBeaver = Resources.LoadAll<Sprite>("Portraits/Beaver/");
            _portraitsMouse = Resources.LoadAll<Sprite>("Portraits/Mouse/");
            _portraitsInjuredMouse = Resources.LoadAll<Sprite>("Portraits/InjuredMouse/");
            _portraitsPig = Resources.LoadAll<Sprite>("Portraits/Pig/");
            _portraitsWeasel = Resources.LoadAll<Sprite>("Portraits/Weasel/");
            _portraitsRats = Resources.LoadAll<Sprite>("Portraits/Rats/");
            _portraitsHedgehog = Resources.LoadAll<Sprite>("Portraits/Hedgehog/");


            _manager = GameObject.FindObjectOfType<DialogueCreatorManager>();
            _content = GameObject.FindGameObjectWithTag("Content").GetComponent<Text>();
            _actorName = GameObject.FindGameObjectWithTag("ActorName");
            _choisesTransform = GameObject.FindGameObjectWithTag("Choises");
       
        }

        //Input
        private void Update()
        {
            if (_managerAnimator.GetBool("Open") &&  (Input.GetKeyDown(KeyCode.E) || Input.GetKeyDown(KeyCode.KeypadEnter)))
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


        //When a dialogue is treiggered ddisbale the trigger and open the dialogue
        public void DialogueTrigger(Tile tile, string filename)
        {
            OpenDialogue(filename);
            var container = GameManager.Instance.ReturnMap();
            
            tile.SetDialogue(false);
            tile.ShowFlags();
            foreach (List<Tile> row in container)
                for (var y = 0; y < container.Count; y++)
                {
                    if (!row[y].IsDialogue() || row[y].ReturnPuzzleNumber() != tile.ReturnPuzzleNumber()) continue;
                    row[y].SetDialogue(false);
                    row[y].ShowFlags();
                }
        }

        //Opens the dialogue TEMP - for dialogue creator use only!
        public void OpenCreatorDialogue()
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

        //Opens the dialogue TEMP - for dialogue creator use only!
        public void OpenDialogue(string filename)
        {
            //Pause movement
            Time.timeScale = 0;

            //Load map level
            var container = DialogueSaveLoad.LoadFromResources(filename);

            if (container == null) return;
            for (var x = 0; x < container.Size; x++)
            {
                var line = new Line
                {
                    Actor = container.Lines[x].ActorName,
                    ActorExpression = container.Lines[x].ActorExpression,
                    Direction = container.Lines[x].Direction,
                    Branch = container.Lines[x].Branch,
                    Condition = container.Lines[x].Condition,
                    Content = container.Lines[x].Content,
                    Special = container.Lines[x].Special,
                    Choise0 = container.Lines[x].Choise0,
                    Choise1 = container.Lines[x].Choise1,
                    Choise2 = container.Lines[x].Choise2


                };
                _lines[x] = line;
            }
            _maxPage = _lines.Length;
            if (_currentPage < _maxPage)
            {
                _maxPage = container.Size;
                _currentPage = 0;
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
            Time.timeScale = 1;
            _currentPage = 0;
           _managerAnimator.SetBool("Open", false);
            _textbox.SetBool("Open", false);
            _actor0.SetBool("Open", false);
            _actor1.SetBool("Open", false);
        }
      
        //Set the apropriate actors spite and position
        private void SetActor(Line line)
        {
            //Left or right
            var direction = line.Direction;
            //Activate correct actor
            var actor = direction == 0 ? _actor0 : _actor1;
            //Assign correct sprite according to actor and expression chosen
            var sprite = DetermineActor(line.Actor, line.ActorExpression);
            actor.GetComponent<Image>().sprite = sprite;
            actor.SetBool("Open", true);

            //Set the actors name to what the actor is. If its the injured mouse just call him mouse, its be cruel otherwise.
            _actorName.GetComponentInChildren<Text>().text = line.Actor == Actor.InjuredMouse ? "Mouse" : line.Actor.ToString();
            _actorName.transform.localPosition = direction == 0 ? new Vector3(-750, _actorName.transform.localPosition.y, _actorName.transform.localPosition.z) : new Vector3(Mathf.Abs(_actorName.transform.localPosition.x), _actorName.transform.localPosition.y, _actorName.transform.localPosition.z);
          
        }

        //Load the next line of dialogue
        private void NextLine()
        {
            //Destroy previous choises
            foreach (var choise in _choises)
            {
                Destroy(choise.gameObject);
            }
            _choises.Clear();


            _currentPage++;
            //Check if the next dialogue suits the breanch we are on - if not skip it
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


        //Click to the rest of the dialogue
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
            yield return new WaitForSecondsRealtime(1);
            button.GetComponent<Animator>().SetBool("Open", false);
            yield return new WaitForSecondsRealtime(1);
            _choisesTransform.GetComponent<Animator>().SetBool("Open", false);
            NextLine();
        
            
        }

        //Determineswhich sprite is apropriate given the current actor and its expression
        private Sprite DetermineActor(Actor actor, int actorExpression)
        {
            switch (actor)
            {
                case Actor.Badger:
                    return _portraitsBadger[actorExpression];
                case Actor.Beaver:
                    return _portraitsBeaver[actorExpression];
                case Actor.Hedgehog:
                    return _portraitsHedgehog[actorExpression];
                case Actor.Mouse:
                    return _portraitsMouse[actorExpression];
                case Actor.InjuredMouse:
                    return _portraitsInjuredMouse[actorExpression];
                case Actor.Pig:
                    return _portraitsPig[actorExpression];
                case Actor.Bunny:
                    return _portraitsBunny[actorExpression];
                case Actor.Rats:
                    return _portraitsRats[actorExpression];
                case Actor.Weasel:
                    return _portraitsWeasel[actorExpression];
                default:
                    throw new ArgumentOutOfRangeException("actor", actor, null);
            }
        }
    }
}
