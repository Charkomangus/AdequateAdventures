/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using UnityEngine;

namespace Assets.Scripts.Tiles
{
    /// <summary>
    /// This holds a database of publicly usable prefabs. This includes tiles, objects and actors.
    /// </summary>
    public class PrefabHolder : MonoBehaviour
    {
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

        [Header("Tile Evidence")]
        public GameObject Evidence1;
        public GameObject Evidence2;
        public GameObject Evidence3;
        public GameObject Evidence4;
        public GameObject Evidence5;
        public GameObject Evidence6;
        public GameObject Evidence7;
        public GameObject Evidence8;
        public GameObject Evidence9;

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
