using UnityEngine;

namespace Assets.Scripts.Tiles
{
    public class Box : MonoBehaviour {


        [Header("Tiles")]
        [SerializeField]private Tile _parentTile;

        // Use this for initialization
        void Start ()
        {
            _parentTile = GetComponentInParent<Tile>();
        }
	
        // Update is called once per frame
        void Update () {
            SmoothMove(transform.position, _parentTile.transform.position, 3);
        }

        public void SetParentTile(Tile tile)
        {
            if (tile.IsBlocked()) return;
            _parentTile.SetBlocked(false);
            _parentTile.SetObject(TileObject.Empty);
            _parentTile = tile;
           _parentTile.SetObject(TileObject.Box);
        }

        public void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
        {
            transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
        }
    }
}
