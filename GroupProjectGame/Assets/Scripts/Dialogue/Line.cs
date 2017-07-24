/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using Assets.Scripts.Actors;

namespace Assets.Scripts.Dialogue
{
    /// <summary>
    /// This class is a fancy struct of what the line is and contains
    /// </summary>
    public struct Line
    {
        public Actor Actor;

        public int ActorExpression;

        public string Content, Choise0, Choise1, Choise2;

        public int Special, Direction, Branch;

        public Condition Condition;

        public bool KillOnExit;
    }
    
    /// <summary>
    /// These variables are set by ceratin events in the game story. Certain lines will only appear if these have been activated
    /// </summary>
    public enum Condition
    {
        None,
        PigFailedInterrogation,
        PigFakedEvidence,
        PigFree,
        BadgerFailedInterrogation,
        BadgerFakedEvidence,
        BadgerFree,
        RatsFailedInterrogation,
        RatsFakedEvidence

    }
}
    