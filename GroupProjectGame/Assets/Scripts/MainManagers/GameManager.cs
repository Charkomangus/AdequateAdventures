using System.Collections.Generic;
using Assets.Scripts.Actors;
using Assets.Scripts.Cameras;
using Assets.Scripts.Dialogue;
using Assets.Scripts.Managers;
using Assets.Scripts.MapCreator;
using Assets.Scripts.Tiles;
using Assets.Scripts.Ui;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.MainManagers
{
    public class GameManager : MonoBehaviour {

        //Creating an Instance so scripts can access it's variables.
        public static GameManager Instance;

       //Managers
        public AudioManager AudioManager;
        public UiManager UiManager;
        public PuzzleManager PuzzleManager;
        public StateManager StateManager;
        public MapGenerator MapGenerator;
        public EnviromentManager EnviromentManager;
        public GuardManager GuardManager;
        public DialogueManager DialogueManager;


        public Transform MapTransform;
        private int _mapSize;
        private List<List<Tile>> _map;
        public Tile LevelEntry, LevelExit;
       
        public int CurrentAct;
        public int CurrentLevel;
        [SerializeField]private int _dialogueNumber;
        public string CurrentScene;
        public Player.Player Player;


        public string Level; //TEMP
   

        // Use this for initialization
        private void Awake()
        {
            if(Instance != null)
                Destroy(gameObject);
            Application.targetFrameRate = 30;
            DontDestroyOnLoad(this);
            Instance = this;
            StateManager = StateManager.Instance;
            StateManager.OnStateChange += HandleOnStateChange;
            CurrentScene = SceneManager.GetActiveScene().name;
            AudioManager = GetComponentInChildren<AudioManager>();
            MapGenerator = GetComponent<MapGenerator>();
            EnviromentManager = FindObjectOfType<EnviromentManager>();
            GuardManager = FindObjectOfType<GuardManager>();
            DialogueManager = FindObjectOfType<DialogueManager>();

        }

        // Use this for initialization
        private void Start ()
        {
            if (CurrentScene == "Level1")
            {
                StartLevel();
            }
        }

        private void Update()
        {
            var puzzle = Player.ReturnCurrentPuzzle();
            if (Player.IsInitialized() == false) return;
            if (CurrentAct == 1)
            {
                switch (CurrentLevel)
                {
                    case 1:
                        if (puzzle == 4)
                            Camera.main.GetComponent<GameCamera>().SetCameraHeight(10);
                        else
                            Camera.main.GetComponent<GameCamera>().SetCameraHeight(7.5f);
                        break;
                    case 2:
                        if (puzzle == 2 || puzzle == 3)
                            Camera.main.GetComponent<GameCamera>().SetCameraHeight(10);
                        else
                            Camera.main.GetComponent<GameCamera>().SetCameraHeight(7.5f);
                        break;
                    case 3:
                        if (puzzle == 1 || puzzle == 2)
                            Camera.main.GetComponent<GameCamera>().SetCameraHeight(10);
                        else
                            Camera.main.GetComponent<GameCamera>().SetCameraHeight(7.5f);
                        break;
                }
            }

        }


        private void OnLevelWasLoaded()
        {
            Debug.Log("Level" + CurrentAct + "_" + CurrentLevel + " was loaded.");
            CurrentScene = SceneManager.GetActiveScene().name;
            
            switch (SceneManager.GetActiveScene().name)
            {
                case "Level1":
                    StartLevel();                    
                    break;
                case "Menu":
                    UnityEngine.Cursor.visible = true;
                    break;
            }
            
        }

        //Start level
        public void StartLevel()
        {
            UiManager = FindObjectOfType<UiManager>();
            PuzzleManager = FindObjectOfType<PuzzleManager>();
            InitializeMap();
            PuzzleManager.Initialize();
            Player = FindObjectOfType<Player.Player>();
            Player.InitializePlayer();
            UiManager.SetFade(true);
            GuardManager.SpawnGuards();
            if (CurrentAct == 1 && CurrentLevel == 1)
                TriggerDialogue();
        }

        //Loads the corresponding map to the current act and level and initializes variables concerning it
        private void InitializeMap()
        {
            MapTransform = GameObject.FindGameObjectWithTag("Map").transform;

            if (CurrentAct == 4)
            {
                MapGenerator.LoadMapFromXml("LevelMaps/testStealth");
                EnviromentManager.LoadEnviromentArt("");
            }
            else
            {
                MapGenerator.LoadMapFromXml("LevelMaps/LevelMap" + CurrentAct + "_" + CurrentLevel);
                EnviromentManager.LoadEnviromentArt("LevelMap" + CurrentAct + "_" + CurrentLevel);
            }

            _map = MapGenerator.ReturnMap();
            _mapSize = MapGenerator.ReturnMapSize();
            LevelEntry = MapGenerator.ReturnEntryTile();
        }



        //Open the apropriate dialogue
        public void TriggerDialogue(Tile tile)
        {
            _dialogueNumber++;
            DialogueManager.DialogueTrigger(tile, "Level" + CurrentAct + "_" + CurrentLevel +"_" + _dialogueNumber);
          
        }
        //Open the apropriate dialogue
        public void TriggerDialogue()
        {
            _dialogueNumber++;
            DialogueManager.OpenDialogue("Level" + CurrentAct + "_" + CurrentLevel + "_" + _dialogueNumber);

        }


        //Starts the game with no other consideration of bools and things
        public void SimpleStartLevel()
        {
            //Start game scene
            StateManager.SetGameState(GameState.Game);
        }

        /// <summary>
        /// Restarts the game to start from the last puzzle encountered
        /// </summary>
        public void RestartFromCheckPoint()
        {
            //Restart the player
            Player.Restart();

            //Reset the current Puzzle, leaving the others untouched
            PuzzleManager.ResetPuzzle();

            //Reset all guards
            GuardManager.ResetGuards();

            //DO the introdocturary fade in from black
            UiManager.SetFade(true);

        }


        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel1(int level)
        {
            CurrentAct = 1;
            CurrentLevel = level;
            SimpleStartLevel();

        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel2(int level)
        {
            CurrentAct = 2;
            CurrentLevel = level;
            SimpleStartLevel();

        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel3(int level)
        {
            CurrentAct = 3;
            CurrentLevel = level;
            SimpleStartLevel();
        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel0()
        {
            CurrentAct = 4;
            SimpleStartLevel();
        }
        //Go to the next level
        public void NextLevel()
        {
            if (CurrentAct == 3 && CurrentLevel == 3)
                Debug.Log("ENDGAME");
            else if (CurrentLevel == 3)
                CurrentAct++;
            else
                CurrentLevel++;
            SimpleStartLevel();
        }


        //DEBUG
        public void NextLevelDebug()
        {
            switch (CurrentLevel)
            {
                case 1:
                    CurrentLevel = 2;
                    break;
                case 2:
                    CurrentLevel = 3;
                    break;
                case 3:
                    CurrentLevel = 1;
                    CurrentAct++;
                    break;
            }
            SimpleStartLevel();
        }

        public void HandleOnStateChange()
        {
            Invoke("StartLevel", 0);
        }


        #region Sets & Returns
        /// <summary>
        /// Return the currently generated Map
        /// </summary>
        /// <returns></returns>
        public List<List<Tile>> ReturnMap()
        {
            return _map;
        }

        /// <summary>
        /// Return the currently generated Maps size
        /// </summary>
        /// <returns></returns>
        public int ReturnMapSize()
        {
            return _mapSize;
        }

        /// <summary>
        /// Return the currently generated Maps size
        /// </summary>
        /// <returns></returns>
        public Tile ReturnLevelEntry()
        {
            return LevelEntry;
        }


       
        #endregion

    }
}
