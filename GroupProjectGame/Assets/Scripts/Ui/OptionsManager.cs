using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts
{
    public class OptionsManager : MonoBehaviour
    {


        [SerializeField] private Slider _musicVolume;
        [SerializeField] private Text _musicVolumePercentage;

        [SerializeField]private Slider _soundEffectVolume;
        [SerializeField]private Text _soundEffectPercentage;
        // Use this for initialization
        private void Start () {
            _musicVolumePercentage.text = _musicVolume.value + "%";
            _musicVolume.onValueChanged.AddListener(delegate { _musicVolumePercentage.text = _musicVolume.value + "%"; });
            _soundEffectPercentage.text = _soundEffectVolume.value + "%";
            _soundEffectVolume.onValueChanged.AddListener(delegate { _soundEffectPercentage.text = _soundEffectVolume.value + "%"; });
        }
	
        // Update is called once per frame
        private void Update () {
		
        }
    }
}
