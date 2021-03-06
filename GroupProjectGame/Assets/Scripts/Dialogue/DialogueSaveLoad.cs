﻿/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using System.Collections.Generic;
using System.IO;
using System.Xml.Serialization;
using Assets.Scripts.Actors;
using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Dialogue
{
    /// <summary>
    /// Details needed to store a tile in XML
    /// </summary>
    public class LinesXml
    {
        [XmlAttribute("ActorName")]
        public Actor ActorName;

        [XmlAttribute("Expression")]
        public int ActorExpression;

        [XmlAttribute("Direction")]
        public int Direction;

        [XmlAttribute("Audio")]
        public string Audio;

        [XmlAttribute("Branch")]
        public int Branch;

        [XmlAttribute("Condition")]
        public Condition Condition;

        [XmlAttribute("Content")]
        public string Content;

        [XmlAttribute("Special")]
        public int Special;

        [XmlAttribute("FirstChoice")]
        public string Choise0;

        [XmlAttribute("SecondChoice")]
        public string Choise1;

        [XmlAttribute("ThirdChoice")]
        public string Choise2;

        [XmlAttribute("KillOnExit")]
        public bool KillOnExit;
    }

    /// <summary>
    /// Details needed to store a List of XML lines in an XML container
    /// </summary>
    [XmlRoot("LineCollection")]
    public class LineContainer
    {
        [XmlAttribute("size")]
        public int Size;

        [XmlArray("Lines")]
        [XmlArrayItem("Line")]
        public List<LinesXml> Lines = new List<LinesXml>();
    }

    /// <summary>
    /// Manages saving and loading of dialogues
    /// </summary>
    public static class DialogueSaveLoad
    {
        /// <summary>
        /// Create an XML container for the dialogue
        /// </summary>
        /// <param name="map"></param>
        /// <returns></returns>
        public static LineContainer CreateLineContainer(List<Line> dialogue)
        {
            var lines = new List<LinesXml>();


            for (var x = 0; x < dialogue.Count; x++)
                    lines.Add(CreateLineXml(dialogue[x]));

            return new LineContainer()
            {
                Size = dialogue.Count,
                Lines = lines
            };
        }


        /// <summary>
        /// Create a line that can be stored in xml files
        /// </summary>
        /// <param name="line"></param>
        /// <returns></returns>
        public static LinesXml CreateLineXml(Line line)
        {
            return new LinesXml
            {
                ActorName = line.Actor,
                ActorExpression = line.ActorExpression,
                Direction = line.Direction,
                Audio = line.Audio,
                Branch = line.Branch,
                Condition = line.Condition,
                Content = line.Content,
                Special = line.Special,
                Choise0 = line.Choise0,
                Choise1 = line.Choise1,
                Choise2 = line.Choise2,
                KillOnExit = line.KillOnExit
            };
        }

        /// <summary>
        /// Create File stream
        /// </summary>
        /// <param name="lineContainer"></param>
        /// <param name="filename"></param>
        public static void Save(LineContainer lineContainer, string filename)
        {
            var serializer = new XmlSerializer(typeof(LineContainer));

            if (Application.isEditor)
            {
                using (var stream = new FileStream("Assets/Resources/Dialogue/" + filename, FileMode.Create))
                {
                    serializer.Serialize(stream, lineContainer);
                }
            }
            else
            {
                using (var stream = new FileStream("Level Creator_Data/Resources/Dialogue/" + filename, FileMode.Create))
                {
                    serializer.Serialize(stream, lineContainer);
                }
            }
        }

        /// <summary>
        ///Open File stream
        /// </summary>
        /// <param name="filename"></param>
        /// <returns></returns>
        public static LineContainer Load(string filename)
        {
            var serializer = new XmlSerializer(typeof(LineContainer));
            using (var stream = new FileStream("Resources/Dialogue/" + filename, FileMode.Open))
            {
                return serializer.Deserialize(stream) as LineContainer;
            }
        }

        /// <summary>
        ///Load from Resources folder as Unity cannot import foreign xmls during run time - bad Unity >__O
        /// </summary>
        /// <param name="filename"></param>
        /// <returns></returns>
        public static LineContainer LoadFromResources(string filename)
        {
            var text = (TextAsset)Resources.Load("Dialogue/"+filename);
            if (text == null)
            {
                Debug.Log("File not found");

                Time.timeScale = 1;
                if(GameManager.Instance != null)
                    GameManager.Instance.Player.SetInitialized(true);
                return null;
            }

            var serializer = new XmlSerializer(typeof(LineContainer));
            return serializer.Deserialize(new StringReader(text.text)) as LineContainer;
        }
    }
}