using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml;
using System.Xml.Serialization;
using Assets.Scripts.Dialogue;
using Assets.Scripts.Tiles;

using UnityEngine;

namespace Assets.Scripts.MapCreator
{
    /// <summary>
    /// Details needed to store a tile in XML
    /// </summary>
    public class TileXml {
        [XmlAttribute("Type")]
        public TileType Type;

        [XmlAttribute("LocationX")]
        public int LocationX;

        [XmlAttribute("LocationY")]
        public int LocationY;

        [XmlAttribute("Object")]
        public TileObject Object;

        [XmlAttribute("Flag")]
        public string Flag;

        [XmlAttribute("Puzzle")]
        public string PuzzleNumber;

        [XmlAttribute("Actor")]
        public Actor Actor;
    }

    /// <summary>
    /// Details needed to store a List of XML tiles in XML
    /// </summary>
    [XmlRoot("MapCollection")]
    public class MapXmlContainer {
        [XmlAttribute("size")]
        public int Size;

        [XmlArray("Tiles")]
        [XmlArrayItem("Tile")]
        public List<TileXml> Tiles = new List<TileXml>();
    }

    public static class MapSaveLoad {

        /// <summary>
        /// Create an XML container for the map
        /// </summary>
        /// <param name="map"></param>
        /// <returns></returns>
        public static MapXmlContainer CreateMapContainer(List <List<Tile>> map) {

            var tiles = new List<TileXml>();

            
            for (var x = 0; x < map.Count; x++)
                for (var y = 0; y < map.Count; y++)
                    tiles.Add(CreateTileXml(map[x][y]));
            
            return new MapXmlContainer 
            {
                Size = map.Count,
                Tiles = tiles
            };
        }

        /// <summary>
        /// Create a tile that can be stored in xml files
        /// </summary>
        /// <param name="tile"></param>
        /// <returns></returns>
        public static TileXml CreateTileXml(Tile tile)
        {
            return new TileXml
            {
                Type = tile.ReturnType(),
                LocationX = (int) tile.ReturnPosition().x,
                LocationY = (int) tile.ReturnPosition().y,
                Object = tile.ReturnObject(),
                Flag = tile.ReturnFlag(),
                PuzzleNumber = tile.ReturnPuzzleNumber().ToString(),
                Actor = tile.ReturnActor()
            };
        }

        /// <summary>
        /// Create File stream
        /// </summary>
        /// <param name="mapContainer"></param>
        /// <param name="filename"></param>
        public static void Save(MapXmlContainer mapContainer, string filename) 
        {
            var serializer = new XmlSerializer(typeof(MapXmlContainer));

            if (Application.isEditor)
            {
                using (var stream = new FileStream("Assets/Resources/LevelMaps/" + filename, FileMode.Create))
                {
                    serializer.Serialize(stream, mapContainer);
                }
            }
            else
            {
                using (var stream = new FileStream("Level Creator_Data/Resources/LevelMaps/" + filename, FileMode.Create))
                {
                    serializer.Serialize(stream, mapContainer);
                }
            }
        }

        /// <summary>
        ///Open File stream
        /// </summary>
        /// <param name="filename"></param>
        /// <returns></returns>
        public static MapXmlContainer Load(string filename) 
        {
            var serializer = new XmlSerializer(typeof(MapXmlContainer));
            using(var stream = new FileStream("Resources/LevelMaps/" + filename, FileMode.Open))
            {
                return serializer.Deserialize(stream) as MapXmlContainer;
            }
        }

        /// <summary>
        ///Load from Resources folder as Unity cannot import foreign xmls during run time - bad Unity >__O
        /// </summary>
        /// <param name="filename"></param>
        /// <returns></returns>
        public static MapXmlContainer LoadFromResources(string filename)
        {
            var text = (TextAsset)Resources.Load(filename);
            if (text == null)
            {
                Debug.Log("File not found");
                return null;
            }

            var serializer = new XmlSerializer(typeof(MapXmlContainer));
            return serializer.Deserialize(new StringReader(text.text)) as MapXmlContainer;
        }
    }
}