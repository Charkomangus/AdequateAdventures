using UnityEngine;

namespace Assets.Scripts.Tiles
{
    public class PrefabHolder : MonoBehaviour {
        public static PrefabHolder Instance;

        
        [Header("Tile Prefabs")]
        public GameObject BaseTilePrefab;
        public GameObject TileNormal;
        public GameObject TileOil;
        public GameObject TileIce;
        public GameObject TileFire;
        public GameObject TileIceCracks;
        public GameObject TileBlocked;
        public GameObject TileWall;
        public GameObject TileDoor;
        public GameObject RedBelt;
        public GameObject GreenBelt;
        public GameObject BlueBelt;
        public GameObject TileNull;

        [Header("Tile Objects")]
        public GameObject Box;
        public GameObject SlidingBox;
        public GameObject Sign;
        public GameObject RedSwitch;
        public GameObject GreenSwitch;
        public GameObject BlueSwitch;


        [Header("Tile Actors")]
        public GameObject Badger;
        public GameObject Beaver;
        public GameObject Hedgehog;
        public GameObject Mouse;
        public GameObject InjuredMouse;
        public GameObject Pig;
        public GameObject Bunny;
        public GameObject Rats;
        public GameObject Weasel;
        public GameObject Guard;
        

        private void Awake()
        {
            Instance = this;
        
        }
    }
}
