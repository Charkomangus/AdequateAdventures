using System;
using System.Collections.Generic;
using System.Linq;
using Assets.Scripts.MapCreator;

using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Assets.Scripts.Dialogue
{
    public class DialogueCreatorManager : MonoBehaviour
    {

        public Dropdown ActorName, Expression, Direction, Special;
        public GameObject Choises;
        public InputField Content, FirstChoise, SecondChoise, ThirdChoice, SaveField, LoadField;
        public Line[] Lines = new Line[400];
        public GameObject PreviousPageButton;
        public int CurrentPage, MaxPages;
        public Text PageCounterText, PagePercentageText;
        public Slider PagePercentageSlider;
        public Animator MapNotification;

        // Use this for initialization
        void Start()
        {
            SetPageCounters();
            Special.onValueChanged.AddListener(delegate { SpecialChoices(Special.captionText.text); });
            SaveField.onEndEdit.AddListener(delegate{SaveDialogueToXml(SaveField.text);NewMapNotification(SaveField.text, 0);});


            LoadField.onEndEdit.AddListener(delegate { LoadDialogueFromXml(LoadField.text); SetPageCounters();  });
            //This allows the user to directly load a page by using the slider
            PagePercentageSlider.onValueChanged.AddListener(delegate
            {
                if (!Input.GetMouseButton(0)) return;
                Lines[CurrentPage] = CreateNewLine();
                CurrentPage = (int)PagePercentageSlider.value-1;
                LoadPage(CurrentPage);
                SetPageCounters();
            });
        }

        // Update is called once per frame
        void Update()
        {
            Lines[CurrentPage] = CreateNewLine();
        }

        //Update any page text or buttons that needs to be updated
        private void SetPageCounters()
        {
            PreviousPageButton.SetActive(CurrentPage != 0);
            PageCounterText.text = "Page " + (CurrentPage + 1) + "/" + (MaxPages + 1);
            PagePercentageSlider.maxValue = MaxPages + 1;
            PagePercentageSlider.value = CurrentPage + 1;

            //Set what percentage
            PagePercentageText.text = (int)((float)(CurrentPage + 1) / (MaxPages + 1) * 100) + "%";
        }

        //Resets the dialogue page to the default state
        public void ClearDialogue()
        {

            ActorName.value = 6;
            Expression.value = 0;
            Direction.value = 0;
            Special.value = 0;

            Content.text = "";
            FirstChoise.text = "";
            SecondChoise.text = "";
            ThirdChoice.text = "";
        }

        //Clear the page if its the last one otherwise delete the page entriely and update the page list
        public void DeletePage()
        {
            if (MaxPages == 0)
                ClearDialogue();
            else
            {
                Debug.Log(Lines.Length);
                //Create and arry one smaller than the original
                Line[] tempLines = new Line[Lines.Length - 1];

                int i = 0;
                int j = 0;
                //Loop through the lines and copy them to the new array (excluding the current one)
                while (i < Lines.Length)
                {
                    if (i != CurrentPage)
                    {
                        tempLines[j] = Lines[i];
                        j++;
                    }
                    i++;
                }

                //Copy the new array into the old one
                Lines = tempLines;
                MaxPages--;
                if (CurrentPage > MaxPages)
                    CurrentPage = MaxPages;
                LoadPage(CurrentPage);
                SetPageCounters();
                Debug.Log(Lines.Length);
            }
        }

        //Reveal the special choises
        private void SpecialChoices(string status)
        {
            Debug.Log(status);
            if (status == "Yes")
                Choises.SetActive(true);
            else
                Choises.SetActive(false);

        }

        //If this is a new page save the old otherwise access the next pages content
        public void NextPage()
        {
            Lines[CurrentPage] = CreateNewLine();
           
            CurrentPage++;
            if (CurrentPage > MaxPages)
            {
                ClearDialogue();
                MaxPages++;
            }
            else
            {
                LoadPage(CurrentPage);
            }
            SetPageCounters();
        }

        public void PreviousPage()
        {
            Lines[CurrentPage] = CreateNewLine();
            CurrentPage--;
            LoadPage(CurrentPage);
            SetPageCounters();
        }

        //Loads a page using infomation storred in a line
        private void LoadPage(int pageNumber)
        {
            var line = Lines[pageNumber];

        
            ActorName.value = DetermineActor(line.Actor);
            Expression.value = DetermineActorExpression(line.ActorExpression);
            Direction.value = line.Direction;
            Special.value = line.Special;
            Content.text = line.Content;
            FirstChoise.text = line.Choise0;
            SecondChoise.text = line.Choise1;
            ThirdChoice.text = line.Choise2;
        }

        //Create a new line using the inputted information
        private Line CreateNewLine()
        {
            Line line = new Line
            {
                Actor = DetermineActor(ActorName.value),
                ActorExpression = DetermineActorExpression(Expression.value),
                Direction = Direction.value,
                Content = Content.text,
                Special = Special.value,
                Choise0 = FirstChoise.text,
                Choise1 = SecondChoise.text,
                Choise2 = ThirdChoice.text
            };
            return line;
        }

        //Determines which actor expression to return according to the value given
        private ActorExpression DetermineActorExpression(int actorExpression)
        {
            switch (actorExpression)
            {
                case 0:
                    return ActorExpression.Neutral;
                case 1:
                    return ActorExpression.Angry;
                case 2:
                    return ActorExpression.Sad;
                default:
                    throw new ArgumentOutOfRangeException("actorExpression", actorExpression, null);
            }
        }

        //Determines which actor to return according to the value given
        public int DetermineActorExpression(ActorExpression actorExpression)
        {
            switch (actorExpression)
            {
                case ActorExpression.Neutral:
                    return 0;
                case ActorExpression.Angry:
                    return 1;
                case ActorExpression.Sad:
                    return 2;
                default:
                    throw new ArgumentOutOfRangeException("actorExpression", actorExpression, null);
            }
        }

        //Determines which actor to return according to the value given
        public Actor DetermineActor(int value)
        {
            switch (value)
            {
                case 0:
                    return Actor.Badger;
                case 1:
                    return Actor.Beaver;
                case 2:
                    return Actor.Hedgehog;
                case 3:
                    return Actor.Mouse;
                case 4:
                    return Actor.InjuredMouse;
                case 5:
                    return Actor.Pig;
                case 6:
                    return Actor.Bunny;
                case 7:
                    return Actor.Rats;
                case 8:
                    return Actor.Weasel;
                default:
                    throw new ArgumentOutOfRangeException("value", value, null);
            }
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

        //Notify user of any changes such as the map has been saved, etc.
        private void NewMapNotification(string dialogueName, int mode)
        {
            MapNotification.SetTrigger("Open");
            switch (mode)
            {
                case 0:
                    MapNotification.GetComponent<Text>().text = "'" + dialogueName + "' " + "Dialogue has been saved!";
                    break;
                case 1:
                    MapNotification.GetComponent<Text>().text = "'" + dialogueName + "' " + "Dialogue has been loaded!";
                    break;
                case 2:
                    MapNotification.GetComponent<Text>().text = "No such file found!";
                    break;
            }
        }

        /// <summary>
        /// Load a map from an XML file
        /// </summary>
        private void LoadDialogueFromXml(string filename)
        {
            //Load map level
            var container = DialogueSaveLoad.LoadFromResources(filename);

            if (container != null)
            {
                Lines = new Line[400];
                for (var x = 0; x < container.Size; x++)
                {
                    Line line = new Line
                    {
                        Actor = container.Lines[x].ActorName,
                        ActorExpression = container.Lines[x].ActorExpression,
                        Direction = container.Lines[x].Direction,
                        Content = container.Lines[x].Content,
                        Special = container.Lines[x].Special,
                        Choise0 = container.Lines[x].Choise0,
                        Choise1 = container.Lines[x].Choise1,
                        Choise2 = container.Lines[x].Choise2

                    };
                    Lines[x] = line;
                }

                MaxPages = container.Size;
                CurrentPage = 0;
                SetPageCounters();
                LoadPage(0);
                NewMapNotification(LoadField.text, 1);
            }
            else
            {
                NewMapNotification("", 2);
            }
        }

        /// <summary>
        /// Save current map to an xml file
        /// </summary>
        private void SaveDialogueToXml(string filename)
        {
            List<Line> lineList = Lines.ToList();
            lineList.RemoveAll(item => string.IsNullOrEmpty(item.Content));
            DialogueSaveLoad.Save(DialogueSaveLoad.CreateLineContainer(lineList), filename + ".xml");
        }


        public List<Line> ReturnLines()
        {
            List<Line> lineList = Lines.ToList();
            lineList.RemoveAll(item => string.IsNullOrEmpty(item.Content));
            return lineList;
        }
    }

}
    

