using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Assets.Scripts.Actors;

namespace Assets.Scripts.Dialogue
{
    public class DialogueCreatorManager : MonoBehaviour
    {
        public Toggle KillOnExiToggle;
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

        // Use this for initialization
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
            PagePercentageSlider.onValueChanged.AddListener(delegate
            {
                if (!Input.GetMouseButton(0)) return;
                Lines[CurrentPage] = CreateNewLine();
                CurrentPage = (int)PagePercentageSlider.value;
                LoadPage(CurrentPage);
                SetPageCounters();
            });
        }

        // Update is called once per frame
        private void Update()
        {
            Lines[CurrentPage] = CreateNewLine();
        }

        public void NewDialogue()
        {
            CurrentPage = 0;
            MaxPages = 0;
            ClearDialogue();
            SetPageCounters();
        }

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
            Expression.value = 0;
            Expression.captionText.text = Expression.options[0].text;
        }

        //Update any page text or buttons that needs to be updated
        private void SetPageCounters()
        {
            PreviousPageButton.SetActive(CurrentPage != 0);
            PageCounterText.text = "Page " + (CurrentPage+1) + "/" + (MaxPages+1);
            PagePercentageSlider.maxValue = MaxPages;
            PagePercentageSlider.value = CurrentPage ;

            //Set what percentage
            PagePercentageText.text = (int)((float)(CurrentPage) / (MaxPages) * 100) + "%";
        }

        //Resets the dialogue page to the default state
        public void ClearDialogue()
        {

            ActorName.value = 6;
            Expression.value = 0;
            Direction.value = 0;
            Special.value = 0;
            Condition.value = 0;
            Branch.value = 0;
            KillOnExiToggle.isOn = false;
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
            Choises.SetActive(status == "Yes");
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
            KillOnExiToggle.isOn = line.KillOnExit;
           
        }

        //Create a new line using the inputted information
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
                KillOnExit = KillOnExiToggle.isOn
            
            };
            return line;
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
                default:
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
    

