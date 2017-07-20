using UnityEngine;

namespace Assets.Scripts.Managers
{
    public class EnviromentManager : MonoBehaviour
    {

       [SerializeField] private SpriteRenderer _enviromentArt;
    

        // Use this for initialization
        private void Awake ()
        {
            _enviromentArt = GetComponentInChildren<SpriteRenderer>();
        }


        public void LoadEnviromentArt(string mapName)
        {
            _enviromentArt.sprite = Resources.Load<Sprite>("LevelMapArt/EnviromentArt/" + mapName); 
        }
    }
}
