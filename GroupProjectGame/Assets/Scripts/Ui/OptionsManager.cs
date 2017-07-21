/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.Ui
{
    public class OptionsManager : MonoBehaviour
    {
        private Slider _musicVolume;
        private Text _musicVolumePercentage;
        private Slider _soundEffectVolume;
        private Text _soundEffectPercentage;


        /// <summary>
        /// Find all the necessery componments and set them to the default values
        /// </summary>
        private void Start()
        {
            //Find components
            _musicVolume = GameObject.FindGameObjectWithTag("MusicVolume").GetComponentInChildren<Slider>();
            _musicVolumePercentage = GameObject.FindGameObjectWithTag("MusicVolume").GetComponentsInChildren<Text>()[1];
            _soundEffectVolume = GameObject.FindGameObjectWithTag("SoundVolume").GetComponentInChildren<Slider>();
            _soundEffectPercentage = GameObject.FindGameObjectWithTag("SoundVolume").GetComponentsInChildren<Text>()[1];

            //Set the percentages to refelct the sliders current value
            _musicVolumePercentage.text = _musicVolume.value + "%";
            _soundEffectPercentage.text = _soundEffectVolume.value + "%";
            //If the sliders change update the percentage accordingly
            _musicVolume.onValueChanged.AddListener(delegate { _musicVolumePercentage.text = _musicVolume.value + "%"; });
            _soundEffectVolume.onValueChanged.AddListener(delegate{_soundEffectPercentage.text = _soundEffectVolume.value + "%";});
        }
    }
}
