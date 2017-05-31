using Assets.Scripts.MainManagers;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.Managers
{
    public class EndingManager : MonoBehaviour
    {

        public Text One, Two, Three, Four;

        // Use this for initialization
        void Start ()
        {
            if (GameManager.Instance == null)
            {
                One.text = "'To the jail with you,’ \n The Bunny announced. \n 'You will pay dearly, \n Your status denounced.'";
                Two.text = "	She dragged him outside, \n Into cold winter snow \n And she held him there, \n For a tawdry show.";
                Three.text = "	Soon the police came \n Pig prayed to the Lord. \n Whilst he tried to shift blame, \n Implicating the Board.";
                Four.text = "Critters thanked Bunny, \n The hero of the day! \n And she found them new jobs, \n Rebuilding the factory.";
                return;
            }

            switch (GameManager.Instance.Ending)
            {
                case 0:
                    One.text =
                        "'You won’t regret this'. \n The pathetic pig whined.\n The Bunny retorts \n 'Leave, or I’ll change my mind'";
                    Two.text =
                        "'There need not be death', \n Enough tragedy today. \n You did not mean the harm \n That sadly came our way.'";
                    Three.text =
                        "And so Bunny left, \n The factory wrecked. \n She never came back: \n Now an arson suspect.";
                    Four.text =
                        "She resolved herself \n To always fight the fight. \n But often blurred between \n What’s wrong and what is right.";
                    break;
                case 1:
                    One.text =
                        "'To the jail with you,’ \n The Bunny announced. \n 'You will pay dearly, \n Your status denounced.'";
                    Two.text =
                        "	She dragged him outside, \n Into cold winter snow \n And she held him there, \n For a tawdry show.";
                    Three.text =
                        "	Soon the police came \n Pig prayed to the Lord. \n Whilst he tried to shift blame, \n Implicating the Board.";
                    Four.text =
                        "Critters thanked Bunny, \n The hero of the day! \n And she found them new jobs, \n Rebuilding the factory.";
                    break;
                case 2:
                    One.text =
                        "Anger in her heart, \n The bunny turned and ran. \n Blocked the door behind her, \n Whilst fire overran.";
                    Two.text = "She heard his screams, \n But did not care. \n That evil Pig had \n This cross to bare.";
                    Three.text =
                        "Bunny felt no guilt \n For what she’d done. \n And told the critters \n Of vengeful action.";
                    Four.text = "Then off she hopped, \n And never returned. \n But in her heart \n Still a fire burned.";
                    break;
                default:
                    One.text = "'To the jail with you,’ \n The Bunny announced. \n 'You will pay dearly, \n Your status denounced.'";
                    Two.text = "	She dragged him outside, \n Into cold winter snow \n And she held him there, \n For a tawdry show.";
                    Three.text = "	Soon the police came \n Pig prayed to the Lord. \n Whilst he tried to shift blame, \n Implicating the Board.";
                    Four.text = "Critters thanked Bunny, \n The hero of the day! \n And she found them new jobs, \n Rebuilding the factory.";
                    break;
            }
        }
	
        // Update is called once per frame
        void Update () {
		
        }
    }
}
