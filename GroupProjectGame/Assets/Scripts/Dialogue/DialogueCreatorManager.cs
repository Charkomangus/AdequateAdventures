/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Assets.Scripts.Actors;

namespace Assets.Scripts.Dialogue
{
    /// <summary>
    /// This class governs the dialoguie creator. This lets writers create dialogues for the project quickly
    /// </summary>
    public class DialogueCreatorManager : MonoBehaviour
    {
        //Set all manager variables - This script is not used in any of the game scenes so they can be left public for ease of acess
        public Toggle KillOnExitToggle;
        public Button Load, Save;
        public Dropdown ActorName, Expression, Direction, Special, Branch, Condition;
        public GameObject Choises, AreYouSureLoad, AreYouSureSave;
        public InputField Content, FirstChoise, SecondChoise, ThirdChoice, SaveField, LoadField;
        public Line[] Lines = new Line[1000];
        public GameObject PreviousPageButton;
        public int CurrentPage = 1, MaxPages = 1;
        public Text PageCounterText, PagePercentageText;
        public Slider PagePercentageSlider;
        public Animator MapNotification;
    
        /// <summary>
        /// Set listeners for buttons and update the UI to begin with
        /// </summary>
        private void Start()
        {
            UpdateExpressions(ActorName.value);
            SetPageCounters();
            Special.onValueChanged.AddListener(delegate { SpecialChoices(Special.captionText.text); });
            LoadField.onEndEdit.AddListener(delegate { AreYouSureLoad.SetActive(true); });
            SaveField.onEndEdit.AddListener(delegate { AreYouSureSave.SetActive(true); });
            ActorName.onValueChanged.AddListener(delegate { UpdateExpressions(ActorName.value); });
            Load.onClick.AddListener(delegate { LoadDialogueFromXml(LoadField.text); SetPageCounters(); });
            Save.onClick.AddListener(delegate { SaveDialogueToXml(SaveField.text); NewMapNotification(SaveField.text, 0); });
      

            //This allows the user to directly load a page by using the slider
            PagePercentageSlider.onValueChanged.AddListener(delegate{if (!Input.GetMouseButton(0)) return;Lines[CurrentPage] = CreateNewLine();CurrentPage = (int)PagePercentageSlider.value;
                LoadPage(CurrentPage);SetPageCounters();});
        }
       
        /// <summary>
        /// Keep the current page saved including any latest updates
        /// </summary>
        private void Update()
        {
            Lines[CurrentPage] = CreateNewLine();
        }

        /// <summary>
        /// Delete everything and start anew
        /// </summary>
        public void NewDialogue()
        {
            CurrentPage = 0;
            MaxPages = 0;
            ClearDialogue();
            SetPageCounters();
        }

        /// <summary>
        /// Update the actor expression dropdown list depending on which actor has been selected
        /// </summary>
        /// <param name="value"></param>
        private void UpdateExpressions(int value)
        {
            Expression.options = new List<Dropdown.OptionData>();
            
       
            switch (value)
            {
                case 0:
                    Expression.options.Add(new Dropdown.OptionData("Neutral"));
                    Expression.options.Add(new Dropdown.OptionData("Agressive"));
                    break;
                case 1:
                    Expression.options.Add(new Dropdown.OptionData("Happy"));
                    Expression.options.Add(new Dropdown.OptionData("Confused"));
                    Expression.options.Add(new Dropdown.OptionData("Assertive"));
                    break;
                case 2:
                    Expression.options.Add(new Dropdown.OptionData("Neutral"));
                    Expression.options.Add(new Dropdown.OptionData("Shocked"));
                    break;
                //Mouse and Injured Mouse are treated alike
                case 3:
                case 4:
                    Expression.options.Add(new Dropdown.OptionData("Neutral"));
                    Expression.options.Add(new Dropdown.OptionData("Shy"));
                    break;
                case 5:
                    Expression.options.Add(new Dropdown.OptionData("Neutral"));
                    Expression.options.Add(new Dropdown.OptionData("Afraid"));
                    Expression.options.Add(new Dropdown.OptionData("Crying"));
                    break;
                case 6:
                    Expression.options.Add(new Dropdown.OptionData("Neutral"));
                    Expression.options.Add(new Dropdown.OptionData("Angry"));
                    Expression.options.Add(new Dropdown.OptionData("Triumphant"));
                    break;
                case 7:
                    Expression.options.Add(new Dropdown.OptionData("Neutral"));
                    Expression.options.Add(new Dropdown.OptionData("Annoyed"));
                    break;
                case 8:
                    Expression.options.Add(new Dropdown.OptionData("Neutral"));
                    Expression.options.Add(new Dropdown.OptionData("Sly"));
                    Expression.options.Add(new Dropdown.OptionData("Laughing"));
                    break;
                case 9:
                    Expression.options.Add(new Dropdown.OptionData("N/A"));
                    break;

            }
            //Set default choise - Neutral
            Expression.value = 0;
            Expression.captionText.text = Expression.options[0].text;
        }
        
        /// <summary>
        /// Update any page text or buttons that needs to be updated
        /// </summary>
        private void SetPageCounters()
        {
            PreviousPageButton.SetActive(CurrentPage != 0);
            PageCounterText.text = "Page " + (CurrentPage+1) + "/" + (MaxPages+1);
            PagePercentageSlider.maxValue = MaxPages;
            PagePercentageSlider.value = CurrentPage ;

            //Set what percentage
            PagePercentageText.text = (int)((float)(CurrentPage) / (MaxPages) * 100) + "%";
        }
        
        /// <summary>
        /// Resets the current page to the default empty state
        /// </summary>
        public void ClearDialogue()
        {
            ActorName.value = 6;
            Expression.value = 0;
            Direction.value = 0;
            Special.value = 0;
            Condition.value = 0;
            Branch.value = 0;
            KillOnExitToggle.isOn = false;
            Content.text = "";
            FirstChoise.text = "";
            SecondChoise.text = "";
            ThirdChoice.text = "";
        }

        /// <summary>
        /// Clear the page if its the last one otherwise delete the page entriely and update the page list
        /// </summary>
        public void DeletePage()
        {
            //If the dialogue only has one page just clear the page
            if (MaxPages == 0)
                ClearDialogue();
            else
            {
                //Create and arry one smaller than the original - This will result in an error eventually but currently the limit is at a 1000 deletes
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

                //If you are over the max page reset back to the max page
                if (CurrentPage > MaxPages)
                    CurrentPage = MaxPages;
                LoadPage(CurrentPage);
                SetPageCounters();
            }
        }

        /// <summary>
        /// Reveal the special choises text input
        /// </summary>
        /// <param name="status"></param>
        private void SpecialChoices(string status)
        {
            Choises.SetActive(status == "Yes");
        }

        /// <summary>
        /// If this is a new page save the old otherwise access the next pages content
        /// </summary>
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

        /// <summary>
        /// Access the previous pages content - save current page
        /// </summary>
        public void PreviousPage()
        {
            Lines[CurrentPage] = CreateNewLine();
            CurrentPage--;
            LoadPage(CurrentPage);
            SetPageCounters();
        }
        
        /// <summary>
        /// Loads a page using infomation storred in a line
        /// </summary>
        /// <param name="pageNumber"></param>
        private void LoadPage(int pageNumber)
        {
            var line = Lines[pageNumber];
            ActorName.value = (int)line.Actor;
            Expression.value = line.ActorExpression;
            Branch.value = line.Branch;
            Condition.value = (int)line.Condition;
            Direction.value = line.Direction;
            Special.value = line.Special;
            Content.text = line.Content;
            FirstChoise.text = line.Choise0;
            SecondChoise.text = line.Choise1;
            ThirdChoice.text = line.Choise2;
            KillOnExitToggle.isOn = line.KillOnExit;
        }
        
        /// <summary>
        /// Create a new line using the inputted information
        /// </summary>
        /// <returns></returns>
        private Line CreateNewLine()
        {
            Line line = new Line
            {
                Actor = (Actor)ActorName.value,
                ActorExpression = Expression.value,
                Direction = Direction.value,
                Branch = Branch.value,
                Condition = (Condition)Condition.value,
                Content = Content.text,
                Special = Special.value,
                Choise0 = FirstChoise.text,
                Choise1 = SecondChoise.text,
                Choise2 = ThirdChoice.text,
                KillOnExit = KillOnExitToggle.isOn
            
            };
            return line;
        }

        /// <summary>
        /// Notify user of any changes such as the map has been saved, etc.
        /// </summary>
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
                default:
                    MapNotification.GetComponent<Text>().text = "No such file found!";
                    break;
            }
        }

        /// <summary>
        /// Load a dialogue from an XML file
        /// </summary>
        private void LoadDialogueFromXml(string filename)
        {
            //Load map level
            var container = DialogueSaveLoad.LoadFromResources(filename);

            if (container != null)
            {
                //Set lines to be 1000 places large - this allows for fairly large dialogues
                Lines = new Line[1000];
                for (var x = 0; x < container.Size; x++)
                {
                    Line line = new Line
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
                        Choise2 = container.Lines[x].Choise2,
                        KillOnExit = container.Lines[x].KillOnExit
                    };
                    //Add the new line
                    Lines[x] = line;
                }
                //Update variables
                MaxPages = container.Size;
                CurrentPage = 0;
                SetPageCounters();
                LoadPage(0);
                NewMapNotification(LoadField.text, 1);
            }
            else
            {
                //Inform of failure
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


        /// <summary>
        /// Returns a list with all the dialogue lines
        /// </summary>
        /// <returns></returns>
        public List<Line> ReturnLines()
        {
            List<Line> lineList = Lines.ToList();
            lineList.RemoveAll(item => string.IsNullOrEmpty(item.Content));
            return lineList;
        }
    }

}
    

