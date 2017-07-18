using System;
using System.Collections.Generic;
using Assets.Scripts.Managers;
using Assets.Scripts.MapCreator;
using Assets.Scripts.Objects;
using Assets.Scripts.Tiles;
using Assets.Scripts.Ui;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

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


        public Transform MapTransform;
        private int _mapSize;
        private List<List<Tile>> _map;
        public Tile LevelEntry, LevelExit;
        private Vector2  _checkpoint;
        public int CurrentAct;
        public int CurrentLevel;
  
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

        }

        // Use this for initialization
        void Start ()
        {
            if (CurrentScene == "Level1")
            {
                StartLevel();
            }
        }

     

        void OnLevelWasLoaded()
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
            Debug.Log("hey");
            UiManager.SetFade(true);
            GuardManager.SpawnGuards();
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
        
       

        //Starts the game with no other consideration of bools and things
        public void SimpleStartLevel()
        {
            //Start game scene
            StateManager.SetGameState(GameState.Game);
        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void RestartLevel()
        {
            _checkpoint = Player.DetermingStartingTile().ReturnPosition();
            Player.Restart();
          PuzzleManager.ResetPuzzle();
            GuardManager.ResetGuards();
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
