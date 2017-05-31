using UnityEngine;

namespace Assets.Scripts.Tiles
{
    public class PrefabHolder : MonoBehaviour {
        public static PrefabHolder Instance;

        public GameObject BaseTilePrefab;

        public GameObject TileNormalPrefab;
        public Material TileNormalMaterial;
        public GameObject TileOil;
        public Material TileOilMaterial;
        public GameObject TileBlocked;
        public Material TileBlockedMaterial;
        public GameObject TileWall;
        public Material TileWallMaterial;
        public GameObject TileFire;
        public Material TileFireMaterial;
        public GameObject TileNull;
        public Material TileNullMaterial;
        public GameObject TileExit;
        public Material TileExitMaterial;
        public GameObject TileEntry;
        public Material TileEntryMaterial;
        public GameObject TileBelt1;
        public Material TileBelt1Material;
        public GameObject TileBelt2;
        public Material TileBelt2Material;
        public GameObject TileBelt3;
        public Material TileBelt3Material;
        public GameObject TileDoor;
        public Material TileDoorMaterial;
        public GameObject TileBox;
        public Material TileBoxMaterial;
        public GameObject RollableBox;
        public Material RollableBoxMaterial;
        public GameObject TileSwitch;
        public Material TileSwitchMaterial;





        private void Awake()
        {
            Instance = this;
            TileNormalMaterial = TileNormalPrefab.GetComponentInChildren<Renderer>().sharedMaterial;
            TileOilMaterial = TileOil.GetComponentInChildren<Renderer>().sharedMaterial;
            TileBlockedMaterial = TileBlocked.GetComponentInChildren<Renderer>().sharedMaterial;
            TileWallMaterial = TileWall.GetComponentInChildren<Renderer>().sharedMaterial;
            TileFireMaterial = TileFire.GetComponentInChildren<Renderer>().sharedMaterial;
            TileNullMaterial = TileNull.GetComponentInChildren<Renderer>().sharedMaterial;
            TileExitMaterial = TileExit.GetComponentInChildren<Renderer>().sharedMaterial;
            TileEntryMaterial = TileEntry.GetComponentInChildren<Renderer>().sharedMaterial;
            TileBelt1Material = TileBelt1.GetComponentInChildren<Renderer>().sharedMaterial;
            TileBelt2Material = TileBelt2.GetComponentInChildren<Renderer>().sharedMaterial;
            TileBelt3Material = TileBelt3.GetComponentInChildren<Renderer>().sharedMaterial;
            TileDoorMaterial = TileDoor.GetComponentInChildren<Renderer>().sharedMaterial;
            TileBoxMaterial = TileBox.GetComponentInChildren<Renderer>().sharedMaterial;
            RollableBoxMaterial = RollableBox.GetComponentInChildren<Renderer>().sharedMaterial;
            TileSwitchMaterial = TileSwitch.GetComponentInChildren<Renderer>().sharedMaterial;
        }
    }
}
