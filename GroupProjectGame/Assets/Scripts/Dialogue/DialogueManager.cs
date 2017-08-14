/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Actors;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

namespace Assets.Scripts.Dialogue
{
    /// <summary>
    /// This class manages the dialogues in the game.
    /// </summary>
    public class DialogueManager : MonoBehaviour, IPointerDownHandler
    {
        [SerializeField]private Sprite[] _portraitsBunny, _portraitsBadger, _portraitsBeaver, _portraitsMouse, _portraitsInjuredMouse, _portraitsPig, _portraitsWeasel, _portraitsRats, _portraitsHedgehog;
        [SerializeField]
        private Sprite[] _portraitsBlinkingBunny, _portraitsBlinkingHedgehog, _portraitsBlinkingBadger, _portraitsBlinkingRats, _portraitsBlinkingWeasel, _portraitsBlinkingBeaver, _portraitsBlinkingMouse, _portraitsBlinkingPig, _portraitsBlinkingInjuredMouse;
        [SerializeField]private Animator _actor0, _actor1, _textbox, _managerAnimator;
        [SerializeField]private DialogueCreatorManager _manager;
        [SerializeField] private Line[] _lines = new Line[1000];
        [SerializeField]private int _currentPage, _maxPage;
        [SerializeField]private Text _content;
        [SerializeField] private GameObject _actorName, _choisesTransform;
        [SerializeField]private Line _currentLine;
        [SerializeField] private GameObject _choisePrefab;

        [SerializeField] private List<GameObject> _choises;
        [SerializeField] private int _currentBranch;
        private Animator _currentActor;
        private bool _specialsOpen;
        public bool _EvidencePicked;
        public int _evidenceNumber;
        private Actor actor0, actor1;
        private int ActorExpression0, ActorExpression1;
        private bool blinking;


       //Eye blinking frequency
        private float _blinkEyeRate = 4;

        private string lastDialogue;
        private float blinkEyeTime;


        /// <summary>
        ///  Use this for initialization
        /// </summary>
        private void Awake()
        {
            //Load all the portraits of characters
            _portraitsBunny = Resources.LoadAll<Sprite>("Portraits/Bunny/Normal/");
            _portraitsBlinkingBunny = Resources.LoadAll<Sprite>("Portraits/Bunny/Blink/");
            _portraitsBadger = Resources.LoadAll<Sprite>("Portraits/Badger/Normal/");
            _portraitsBlinkingBadger = Resources.LoadAll<Sprite>("Portraits/Badger/Blink/");
            _portraitsBeaver = Resources.LoadAll<Sprite>("Portraits/Beaver/Normal/");
            _portraitsBlinkingBeaver = Resources.LoadAll<Sprite>("Portraits/Beaver/Blink/");
            _portraitsMouse = Resources.LoadAll<Sprite>("Portraits/Mouse/Normal/");
            _portraitsBlinkingMouse = Resources.LoadAll<Sprite>("Portraits/Mouse/Blink/");
            _portraitsInjuredMouse = Resources.LoadAll<Sprite>("Portraits/InjuredMouse/Normal/");
            _portraitsBlinkingInjuredMouse = Resources.LoadAll<Sprite>("Portraits/InjuredMouse/Blink/");
            _portraitsPig = Resources.LoadAll<Sprite>("Portraits/Pig/Normal/");
            _portraitsBlinkingPig = Resources.LoadAll<Sprite>("Portraits/Pig/Blink/");
            _portraitsWeasel = Resources.LoadAll<Sprite>("Portraits/Weasel/Normal/");
            _portraitsBlinkingWeasel = Resources.LoadAll<Sprite>("Portraits/Weasel/Blink/");
            _portraitsRats = Resources.LoadAll<Sprite>("Portraits/Rats/Normal/");
            _portraitsBlinkingRats = Resources.LoadAll<Sprite>("Portraits/Rats/Blink/");
            _portraitsHedgehog = Resources.LoadAll<Sprite>("Portraits/Hedgehog/Normal/");
            _portraitsBlinkingHedgehog = Resources.LoadAll<Sprite>("Portraits/Hedgehog/Blink/");

         
            _content = GameObject.FindGameObjectWithTag("Content").GetComponent<Text>();
            _actorName = GameObject.FindGameObjectWithTag("ActorName");
            _choisesTransform = GameObject.FindGameObjectWithTag("Choises");
        }

        /// <summary>
        /// Mouse Input - when clicked go to the next line
        /// </summary>
        /// <param name="eventData"></param>
        public void OnPointerDown(PointerEventData eventData)
        {
            if (!IsOpen()) return;
            if(GameManager.Instance != null)
                GameManager.Instance.AudioManager.PlayAudio(GameManager.Instance.AudioManager.UiClick, false);
            DetermineNextLine();
        }

        /// <summary>
        /// Keyboard Input 
        /// </summary>
        private void Update()
        {
            if(!IsOpen()) return;
            if (Input.GetKeyDown(KeyCode.E) || Input.GetKeyDown(KeyCode.Keypad0))
            {
                GameManager.Instance.AudioManager.PlayAudio(GameManager.Instance.AudioManager.UiClick, false);
                if (GameManager.Instance == null)
                {
                    DetermineNextLine();
                }
                else if (!GameManager.Instance.JournalManager.IsOpen())
                    DetermineNextLine();
            }
        }

        /// <summary>
        /// When a dialogue is triggered disable the trigger and open the dialogue
        /// </summary>
        /// <param name="tile"></param>
        /// <param name="filename"></param>
        public void DialogueTrigger(Tile tile, string filename)
        {
            lastDialogue = filename;
            OpenDialogue(filename);
            tile.DeleteDialogue();
        }

        /// <summary>
        /// Opens the dialogue TEMP - for dialogue creator use only!
        /// </summary>
        public void OpenCreatorDialogue()
        {
            _lines = _manager.ReturnLines().ToArray();
            _maxPage = _lines.Length;
            if (_currentPage < _maxPage)
            {
                _managerAnimator.SetBool("Open", true);
                _textbox.SetBool("Open", true);

                _currentLine = _lines[_currentPage];
                SetActor(_currentLine);
                SetContent(_currentLine);
                SetAudio(_currentLine);
            }
            else
                StartCoroutine(CloseDialogue());
        }

        /// <summary>
        /// Opens the dialogue 
        /// </summary>
        /// <param name="filename"></param>
        public void OpenDialogue(string filename)
        {
            //Pause movement
            Time.timeScale = 0;
            UnityEngine.Cursor.visible = true;
            GameManager.Instance.Player.SetInitialized(false);

            //Dialogue
            var container = DialogueSaveLoad.LoadFromResources(filename);

            if (container == null) return;
            for (var x = 0; x < container.Size; x++)
            {
                //Create new line
                var line = new Line
                {
                    Actor = container.Lines[x].ActorName,
                    ActorExpression = container.Lines[x].ActorExpression,
                    Direction = container.Lines[x].Direction,
                    Branch = container.Lines[x].Branch,
                    Condition = container.Lines[x].Condition,
                    Content = container.Lines[x].Content,
                    Audio =  container.Lines[x].Audio,
                    Special = container.Lines[x].Special,
                    Choise0 = container.Lines[x].Choise0,
                    Choise1 = container.Lines[x].Choise1,
                    Choise2 = container.Lines[x].Choise2,
                    KillOnExit = container.Lines[x].KillOnExit

                };
                _lines[x] = line;
            }
            _maxPage = _lines.Length;

            //Only continue if you havent reachged the end of the dialogue
            if (_currentPage <= _maxPage)
            {
                _maxPage = container.Size;
                _currentPage = 0;
                _managerAnimator.SetBool("Open", true);
                _textbox.SetBool("Open", true);

                _currentLine = _lines[_currentPage];
                SetActor(_currentLine);
                SetContent(_currentLine);
                SetAudio(_currentLine);
              
            }
            //End of dialogue has been reached
            else
                StartCoroutine(CloseDialogue());
        }

        /// <summary>
        /// Close the dialogue screen
        /// </summary>
        /// <returns></returns>
        private IEnumerator CloseDialogue()
        {
            //Cinematics trigger
            switch (lastDialogue)
            {
                case "Level1_3_2":
                    GameManager.Instance.CinematicsManager.TriggerCinematic(0);
                    yield break;
                case "Level1_4_3":
                    SceneManager.LoadScene("Ending");
                    yield break;
            }

            //Unfreeze time
            Time.timeScale = 1;

            //Reset dialogue manager
            _currentPage = 0;
            _specialsOpen = false;
           _managerAnimator.SetBool("Open", false);
            _textbox.SetBool("Open", false);
            _actor0.SetBool("Open", false);
           
            _actor1.SetBool("Open", false);
            UnityEngine.Cursor.visible = false;

            //Open the journal if evidence was picked up
            if (_EvidencePicked)
            {
                StartCoroutine(GameManager.Instance.JournalManager.OpenEvidence(_evidenceNumber));
                _EvidencePicked = false;
            }
            yield return new WaitForSeconds(0.5f);
            //Start player
            if(GameManager.Instance != null)
                GameManager.Instance.Player.SetInitialized(true);
            yield return new WaitForSeconds(1);

            //After everything is finished set the actor sprites to null
            _actor1.GetComponent<Image>().sprite = null;
            _actor0.GetComponent<Image>().sprite = null;
           
        }

        /// <summary>
        /// Set the apropriate actors spite and position
        /// </summary>
        /// <param name="line"></param>
        private void SetActor(Line line)
        {
            //Left or right
            var direction = line.Direction;
            //Activate correct actor
            if (direction == 0)
            {
                actor0 = line.Actor;
                ActorExpression0 = line.ActorExpression;
                _currentActor = _actor0;
            }
            else
            {
                actor1 = line.Actor;
                ActorExpression1 = line.ActorExpression;
                _currentActor = _actor1;
            }
            //Assign correct sprite according to actor and expression chosen
            var sprite = DetermineActor(line.Actor, line.ActorExpression);

            if (sprite == null)
            {
                _currentActor.SetBool("Open", false);
                _actorName.GetComponent<Image>().color = new Color(0,0,0,0);
                _actorName.GetComponentInChildren<Text>().text = "";

            }
            else
            {
                _currentActor.GetComponent<Image>().sprite = sprite;
                blinking = true;
                //Set the actors name to what the actor is. If its the injured mouse just call him mouse, its too cruel otherwise.
                _actorName.GetComponent<Image>().color = new Color(1, 1, 1, 1);
                _actorName.GetComponentInChildren<Text>().text =line.Actor == Actor.InjuredMouse ? "Mouse" : line.Actor.ToString();
                _actorName.transform.localPosition = direction == 0                    ? new Vector3(-750, _actorName.transform.localPosition.y, _actorName.transform.localPosition.z)
                    : new Vector3(Mathf.Abs(_actorName.transform.localPosition.x), _actorName.transform.localPosition.y,
                        _actorName.transform.localPosition.z);

                if (_currentActor.GetBool("Open")) return;
                _currentActor.SetBool("Open", true);
                StartCoroutine(Blink(direction));
            }
        }
       

        /// <summary>
        /// Load the next line of dialogue
        /// </summary>
        private void NextLine()
        {
            //Destroy previous choises
            foreach (var choise in _choises)
            {
                Destroy(choise.gameObject);
            }
            _choises.Clear();

            //If it was set to dissapear the actor will do so. However nothing will occur if the same side is used for the next line.
            if (_lines[_currentPage].KillOnExit)
            {
                _currentActor.SetBool("Open", false);
            }

            //Increment the current page
            _currentPage++;
         
            //If the page was the last page close the dialogue otherwise carry on
            if (_currentPage < _maxPage)
            {
                //Check if the next dialogue suits the branch we are on or is main dialogue - if not skip it
                if (_lines[_currentPage].Branch == _currentBranch || _lines[_currentPage].Branch == 0)
                {
                    _currentLine = _lines[_currentPage];
                    SetActor(_currentLine);
                    SetContent(_currentLine);
                    SetAudio(_currentLine);
                }
                else
                {
                    //This skips the line
                    NextLine();
                }
            }
            else
                StartCoroutine(CloseDialogue());
        }


        /// <summary>
        /// Set the content
        /// </summary>
        /// <param name="line"></param>
        private void SetContent(Line line)
        {
            _content.text = line.Content;
        }

        /// <summary>
        /// Change the audio motif
        /// </summary>
        /// <param name="line"></param>
        private void SetAudio(Line line)
        {
            var temp = line.Audio;
            Debug.Log(temp);
            switch (temp)
            {
                case "Kill":
                    StartCoroutine(GameManager.Instance.AudioManager.CloseMusicMotifs("Weasel"));
                    StartCoroutine(GameManager.Instance.AudioManager.CloseMusicMotifs("Pig"));
                    StartCoroutine(GameManager.Instance.AudioManager.CloseMusicMotifs("Mouse"));
                    break;
                case "N/A":
                    break;
                case "Pig":
                case "Mouse":
                case "Weasel":
                    if (GameManager.Instance != null)
                        StartCoroutine(GameManager.Instance.AudioManager.OpenMusicMotif(temp));
                    break;
            }
        }

        /// <summary>
        /// Call determine next line for the current page 0- this exxists to make it easier to call this function
        /// </summary>
        public void DetermineNextLine()
        {
            DetermineNextLine(_lines[_currentPage]);
        }
       

        /// <summary>
        /// Determine what action the next line needs to be set up
        /// </summary>
        /// <param name="line"></param>
        private void DetermineNextLine(Line line)
        {
            if (SceneManager.GetActiveScene().name == "Level1")
               if(GameManager.Instance.JournalManager.IsOpen()) return;
            if (line.Special == 0)
            {
                NextLine();
                _specialsOpen = false;
            }
            else if (!_choisesTransform.GetComponent<Animator>().GetBool("Open") && !_specialsOpen)
            {
                _choisesTransform.GetComponent<Animator>().SetBool("Open", true);
                InstantiateChoise(line.Choise0);
                InstantiateChoise(line.Choise1);
                InstantiateChoise(line.Choise2);
                _specialsOpen = true;
            }

        }

        /// <summary>
        /// Create a new choise object if there is content in the string
        /// </summary>
        /// <param name="choise"></param>
        private void InstantiateChoise(string choise)
        {
            if (string.IsNullOrEmpty(choise)) return;
            var button = Instantiate(_choisePrefab, _choisesTransform.transform);
            button.GetComponentInChildren<Text>().text = choise;

            var temp = _choises.Count;
            button.GetComponent<Button>().onClick.AddListener(delegate { ChooseResponse(temp); });
            _choises.Add(button);
        }



        /// <summary>
        /// Switch off the choises
        /// </summary>
        /// <param name="chosenButton"></param>
        private void ChooseResponse(int chosenButton)
        {
            StartCoroutine(CloseSpecial(_choises[chosenButton]));
            _currentBranch = chosenButton+1;
        
        }

        /// <summary>
        /// Close any remaining special items
        /// </summary>
        /// <param name="button"></param>
        /// <returns></returns>
        private IEnumerator CloseSpecial(GameObject button)
        {
            List<GameObject> otherButtons = new List<GameObject>();

            foreach (GameObject choise in _choises)
            {
                if (choise != button)
                    otherButtons.Add(choise);
            }
        
            foreach (var otherButton in otherButtons)
            {
                otherButton.GetComponent<Button>().interactable = false;
            }
            yield return new WaitForSecondsRealtime(1);
            if(button != null)
                button.GetComponent<Button>().interactable = false;


            yield return new WaitForSecondsRealtime(0.25f);
            _choisesTransform.GetComponent<Animator>().SetBool("Open", false);
            NextLine();
        }

        /// <summary>
        /// Every so often (random value) swap the actor texture with a blinking one
        /// </summary>
        /// <param name="direction"></param>
        /// <returns></returns>
        private IEnumerator Blink(int direction)
        {
            while (blinking)
            {
                _blinkEyeRate = Random.Range(40, 100);

                //Left side actor
                if (direction == 0)
                {
                    //Blink!
                    if (blinkEyeTime >= _blinkEyeRate)
                    {
                        var sprite = DetermineActorBlinking(actor0, ActorExpression0);
                        if (sprite != null)
                            _actor0.GetComponent<Image>().sprite = sprite;
                        blinkEyeTime = 0;
                    }
                    //Normal
                    else
                    {
                        var sprite = DetermineActor(actor0, ActorExpression0);
                        if (sprite != null)
                            _actor0.GetComponent<Image>().sprite = sprite;
                        blinkEyeTime++;
                    }
                }
                //Right side actor
                else
                {
                    //Blink
                    if (blinkEyeTime >= _blinkEyeRate)
                    {
                        var sprite = DetermineActorBlinking(actor1, ActorExpression1);
                        if (sprite != null)
                            _actor1.GetComponent<Image>().sprite = sprite;
                        blinkEyeTime = 0;
                    }
                    //Normal
                    else
                    {
                        var sprite = DetermineActor(actor1, ActorExpression1);
                        if (sprite != null)
                            _actor1.GetComponent<Image>().sprite = sprite;
                        blinkEyeTime++;
                    }
                }
                //Wait for a bit - this enables the count
                yield return new WaitForSecondsRealtime(0.05f);
            }
        }

        /// <summary>
        /// Determineswhich sprite is apropriate given the current actor and its expression
        /// </summary>
        /// <param name="actor"></param>
        /// <param name="actorExpression"></param>
        /// <returns></returns>
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
                    return null;
            }
        }

        /// <summary>
        /// Determines which blinking sprite is apropriate given the current actor and its expression
        /// </summary>
        /// <param name="actor"></param>
        /// <param name="actorExpression"></param>
        /// <returns></returns>
        private Sprite DetermineActorBlinking(Actor actor, int actorExpression)
        {
            switch (actor)
            {
                case Actor.Badger:
                    return _portraitsBlinkingBadger[actorExpression];
                case Actor.Beaver:
                    return _portraitsBlinkingBeaver[actorExpression];
                case Actor.Hedgehog:
                    return _portraitsBlinkingHedgehog[actorExpression];
                case Actor.Mouse:
                    return _portraitsBlinkingMouse[actorExpression];
                case Actor.InjuredMouse:
                    return _portraitsBlinkingInjuredMouse[actorExpression];
                case Actor.Pig:
                    return _portraitsBlinkingPig[actorExpression];
                case Actor.Bunny:
                    return _portraitsBlinkingBunny[actorExpression];
                case Actor.Rats:
                    return _portraitsBlinkingRats[actorExpression];
                case Actor.Weasel:
                    return _portraitsBlinkingWeasel[actorExpression];
                default:
                    return null;
            }
        }

        /// <summary>
        /// Checks if the dialogue is open
        /// </summary>
        /// <returns></returns>
        public bool IsOpen()
        {
            return _managerAnimator.GetBool("Open");
        }
    }
}
