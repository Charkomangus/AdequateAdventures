using UnityEngine;

namespace Assets.Scripts.Dialogue
{
    public struct Line
    {
        public Actor Actor;

        public ActorExpression ActorExpression;

        public string Content, Choise0, Choise1, Choise2;

        public int Special, Direction, Branch;

        public Condition Condition;


    }

    public enum Condition
    {
        None,
        PigInJail
    }
}
    