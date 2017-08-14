/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/

using System.Collections;
using Assets.Scripts.MainManagers;
using FMOD;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Debug = UnityEngine.Debug;

namespace Assets.Scripts.Managers
{
    /// <summary>
    /// Audio manager class. Plays music and sfx.
    /// </summary>
    public class AudioManager : MonoBehaviour
    {
        //The main audio source
        public AudioSource MusicAudioSource;
        public AudioSource SoundAudioSource;

        //FMOD Music
        public FMOD.Studio.EventInstance MusicEvent; 
        private string Level1Music = "event:/Level1";
        private string Level2Music = "event:/Level1";
        private string Level3Music = "event:/Level3";
        private string Level4Music = "event:/Level4";
        //Music
        public AudioClip OpeningMenuClip;
        public AudioClip Loading;
        public AudioClip Ending;
        //Sound effects
        public AudioClip UiClick;
        public AudioClip Switch;
        public AudioClip CratePush;
        public AudioClip CrateObstacleCollision;
        public AudioClip AmbientMachinery;
        public AudioClip AmbientFire;
        public Button[] AllButtons;


        //Public references to the audio levels in order for them to carry through scenes and update UI
        public float AudioLevel;
        public float MusicLevel;


        public float weasel;


        /// <summary>
        /// Initialize scene
        /// </summary>
        private void Start()
        {
            OnLevelWasLoaded();
           
            SetMusicVolume(75);
            SetAudioVolume(100);
        }


        /// <summary>
        /// Start a new instance of an FMOD event and start the music
        /// </summary>
        /// <param name="musicPath"></param>
        public void PlayMusicFmod(string musicPath)
        {
            StopMusicFmod();
            //Set the music event to be a new instance
            MusicEvent = FMODUnity.RuntimeManager.CreateInstance(musicPath);
            //Attach the sound to the audio manager object. Doesn't do much but makes FMOD happier and removes some of the 3D space warnings
            FMODUnity.RuntimeManager.AttachInstanceToGameObject(MusicEvent, GetComponent<Transform>(), GetComponent<Rigidbody>());
            MusicEvent.setVolume(MusicLevel);
            MusicEvent.start(); //Start your music      
         
        }

        /// <summary>
        /// Slowly fade out the lief motifs and bring out the main melody
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public IEnumerator CloseMusicMotifs(string id)
        {
            if (MusicEvent == null) yield break;
            FMOD.Studio.ParameterInstance musicIntensity;
           
            MusicEvent.getParameter(id, out musicIntensity);
            float temp;
            musicIntensity.getValue(out temp);
            while (temp > 0)
            {
                temp -= 0.1f;
                yield return new WaitForSecondsRealtime(0.1f);
                if(temp < 0)
                    temp = 0;
                weasel = temp;
              MusicEvent.setParameterValue(id, temp);
            }
          
        }

        /// <summary>
        /// Slowly fade in the lief motif
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public IEnumerator OpenMusicMotif(string id)
        {
            if (MusicEvent == null) yield break;

            FMOD.Studio.ParameterInstance musicIntensity;
            MusicEvent.getParameter(id, out musicIntensity);
            float temp;
            musicIntensity.getValue(out temp);
            while (temp < 1)
            {
                temp += 0.1f;
                yield return new WaitForSecondsRealtime(0.1f);

                if (temp > 1)
                    temp = 1;
                weasel = temp;
                MusicEvent.setParameterValue(id, temp);
            }
        }


        /// <summary>
        /// Make sure all buttons do click
        /// </summary>
        private void Update()
        {
            //This is an absoultely disgusting way to make sure that all buttons play a click noise - extremely inefficient
            //This is done this way because lack of time. A solution is easy but would take too muc time.
            var temp = AllButtons;
            AllButtons = FindObjectsOfType<Button>();
            if (temp.Length == AllButtons.Length) return;
            foreach (Button button in AllButtons)
            {
                button.onClick.AddListener(delegate { PlayAudio(UiClick, false); });
            }


        }

        private void StopMusicFmod()
        {
            //If it's playing stop it
            if (MusicEvent != null)
            {
                MusicEvent.stop(FMOD.Studio.STOP_MODE.IMMEDIATE);
                MusicEvent.release();
            }
        }

        /// <summary>
        /// Play apropriate music
        /// </summary>
        private void OnLevelWasLoaded()
        {
            AllButtons = FindObjectsOfType<Button>();
            foreach (var button in AllButtons)
            {
                button.onClick.AddListener(delegate { PlayAudio(UiClick, false); });
            }

            switch (SceneManager.GetActiveScene().name)
            {
                case "LevelLoader":
                    StopMusicFmod();
                    PlayMusic(Loading);
                    break;
                case "menu":
                    StopMusicFmod();
                    PlayMusic(OpeningMenuClip);
                    break;
                case "Ending":
                    StopMusicFmod();
                    PlayMusic(Ending);
                    break;
                case "Level1":
                    var act = GameManager.Instance.CurrentAct;
                    var level = GameManager.Instance.CurrentLevel;

                    //Stop local audio
                    if(MusicAudioSource.isPlaying)
                        MusicAudioSource.Stop();
                    switch (act)
                    {
                        case 1:
                            switch (level)
                            {
                                case 1:
                                    PlayMusicFmod(Level1Music);
                                    break;
                                case 2:
                                    PlayMusicFmod(Level2Music);
                                    break;
                                case 3:
                                    PlayMusicFmod(Level3Music);
                                    break;
                                case 4:
                                    PlayMusicFmod(Level4Music);
                                    break;
                            }
                            break;
                        case 2:
                            //When implemented
                            break;
                        case 3:
                            //When implemented
                            break;
                    }

                    break;
            }

        }

        /// <summary>
        /// Determine which music track to play
        /// </summary>
        public void PlayMusic(AudioClip audioClip)
        {
            if (MusicAudioSource.isPlaying)
            {
                MusicAudioSource.Stop();

            }
            MusicAudioSource.loop = true;
            MusicAudioSource.clip = audioClip;
            MusicAudioSource.Play();
        }

        /// <summary>
        /// Determine which music track to play
        /// </summary>
        public void PlayAudio(AudioClip audioClip, bool loop)
        {
           
            if (SoundAudioSource.isPlaying)
            {
              return;
            }
            SoundAudioSource.loop = loop;
            SoundAudioSource.clip = audioClip;
            SoundAudioSource.Play();
           
        }


        /// <summary>
        /// Set the volume of the music audiosource
        /// </summary>
        /// <param name="volume"></param>
        public void SetMusicVolume(float volume)
        {
            MusicLevel = volume;
            //The input is 0 - 100. We convert it to 0 - 1
            var temp = volume / 100;
            MusicAudioSource.volume = temp;
         
            if (MusicEvent != null)
                MusicEvent.setVolume(temp);

        }

        /// <summary>
        /// Set the volume of the sound audiosource
        /// </summary>
        /// <param name="volume"></param>
        public void SetAudioVolume(float volume)
        {
            AudioLevel = volume;
            //The input is 0 - 100. We convert it to 0 - 1
            var temp = volume / 100;
            SoundAudioSource.volume = temp;
        }
    }
}
