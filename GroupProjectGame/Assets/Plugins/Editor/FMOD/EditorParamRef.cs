using UnityEngine;

namespace FMODUnity
{
    public class EditorParamRef : ScriptableObject
    {
        [SerializeField]
        public string Name;
        [SerializeField]
        public float Min;
        [SerializeField]
        public float Max;
        [SerializeField]
        public float Default;
    }
}
