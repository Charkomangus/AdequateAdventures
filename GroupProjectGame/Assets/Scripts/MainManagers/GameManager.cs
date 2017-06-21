using System.Collections.Generic;
using Assets.Scripts.Managers;
using Assets.Scripts.MapCreator;
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

       
        public AudioManager AudioManager;
        public UiManager UiManager;
        private StateManager _stateManager;
        private MapGenerator _mapGenerator;
        public Transform MapTransform;
        private int _mapSize;
        private List<List<Tile>> _map;
        public Tile LevelEntry, LevelExit;
        public int CurrentLevel = 1;
        public int CurrentAct = 1;
        public string CurrentScene;
        public Player.Player Player;
    


     

        // Use this for initialization
        private void Awake()
        {
            if(Instance != null)
                Destroy(gameObject);
            Application.targetFrameRate = 30;
            DontDestroyOnLoad(this);
            Instance = this;
            _stateManager = StateManager.Instance;
            _stateManager.OnStateChange += HandleOnStateChange;

            CurrentScene = SceneManager.GetActiveScene().name;

          
            AudioManager = GetComponentInChildren<AudioManager>();
         
            _mapGenerator = GetComponent<MapGenerator>();
            
        }

        // Use this for initialization
        void Start ()
        {
            if (CurrentScene == "Level1")
            {
                UiManager = FindObjectOfType<UiManager>();
                StartLevel();
              
            }
        }

        void OnLevelWasLoaded()
        {
            switch (SceneManager.GetActiveScene().name)
            {
                    
                case "Level1":
                    StartLevel();                    
                    break;
                case "Transistion":
                    MapTransform = null;
                    UnityEngine.Cursor.visible = true;
                    break;
                case "Intro":
                    MapTransform = null;
                    UnityEngine.Cursor.visible = false;
                    break;
                case "Menu":
                    UnityEngine.Cursor.visible = true;
                    break;
                case "Outro":
                    UnityEngine.Cursor.visible = false;

                    break;
            }
            
        }

        public void StartLevel()
        {
            MapTransform = GameObject.FindGameObjectWithTag("Map").transform;
           // _mapGenerator.LoadMapFromXml("LevelMap" + CurrentLevel +"_"+ CurrentAct);
            _mapGenerator.LoadMapFromXml("test");
            _map = Instance.GetComponent<MapGenerator>().ReturnMap();
            _mapSize = Instance.GetComponent<MapGenerator>().ReturnMapSize();
            FindLevelEntry();
            Player = FindObjectOfType<Player.Player>();
            Player.InitializePlayer();

        }
    

   

        // Update is called once per frame
        void Update () {       
        }

        void FindLevelEntry()
        {
            for (var i = 0; i < _mapSize; i++)
            {
              
                for (var j = 0; j < _mapSize; j++)
                {
                    if (_map[i][j].IsEntry())
                        LevelEntry = _map[i][j];
                }
            }
        }

        private void OnLevelWasLoaded(int level)
        {
            Debug.Log("Level " + level +" was loaded.");
            CurrentScene = SceneManager.GetActiveScene().name;
            switch (level)
            {
                case 1:

                    break;
                case 2:
                    break;
            }
        }

        

        //Starts the game with no other consideration of bools and things
        public void SimpleStartLevel()
        {
            //Start game scene
            _stateManager.SetGameState(GameState.Game);
            Debug.Log(_stateManager.GameState);

        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void RestartLevel()
        {
            //Start game scene
            _stateManager.SetGameState(GameState.Game);
            Debug.Log(_stateManager.GameState);
        }

        public void HandleOnStateChange()
        {
            Invoke("ChangeScene", 0f);
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
