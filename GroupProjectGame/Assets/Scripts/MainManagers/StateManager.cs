/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using UnityEngine;

namespace Assets.Scripts.MainManagers
{
    // Game States
    public enum GameState { Intro, Menu, Paused, Game }

    public delegate void OnStateChangeHandler();

    /// <summary>
    /// Old solution to handle current game state. Was dropped for being overly complex for what was needed
    /// </summary>
    public class StateManager : Object
    {
        protected StateManager() { }
        private static StateManager _instance = null;
        public event OnStateChangeHandler OnStateChange;
        public GameState GameState { get; private set; }

        /// <summary>
        /// Singleton pattern
        /// </summary>
        public static StateManager Instance
        {
            get
            {
                if (_instance != null) return _instance;
                _instance = new StateManager();
                DontDestroyOnLoad(_instance);
                return _instance;
            }

        }

        /// <summary>
        /// Set the game state
        /// </summary>
        /// <param name="state"></param>
        public void SetGameState(GameState state)
        {
            GameState = state;
            if (OnStateChange != null) OnStateChange();
        }

        /// <summary>
        /// Destroy the instance when the app;lication quits
        /// </summary>
        public void OnApplicationQuit()
        {
            _instance = null;
        }

    }
}