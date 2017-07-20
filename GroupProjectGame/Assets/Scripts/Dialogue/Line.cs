using Assets.Scripts.Actors;

namespace Assets.Scripts.Dialogue
{
    public struct Line
    {
        public Actor Actor;

        public int ActorExpression;

        public string Content, Choise0, Choise1, Choise2;

        public int Special, Direction, Branch;

        public Condition Condition;

        public bool KillOnExit;
    }

    public enum Condition
    {
        None,
        PigInJail
    }
}
    