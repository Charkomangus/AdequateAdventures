using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TranscriptManager : MonoBehaviour
{
    public List<string> Titles, Body, Afterword,  Afterword2;
    public Animator[] _animators;
    public Text TitleText, BodyText, AfterwordText, AfterwordText2;

	// Use this for initialization
	void Start ()
	{
	    _animators = GameObject.FindObjectsOfType<Animator>();

	    Titles.Add("INVOICE #1");
	    Body.Add("INVOICE: Supplier Parts \n Machine oil from the rig. \n COST: \n A king’s ransom. \n SIGNATURE: Mr Pig.");
	    Afterword.Add("Mr Pig’s assistant \n Has scribbled on the side,\n Please include a number! \n The details we can’t hide.");
	    Afterword2.Add("");

        Titles.Add("Board Minutes #1");
	    Body.Add("Minutes of the Board, \n From the first week in May. \n Chair - 'Profits are down, \n Accounts in disarray");
	    Afterword.Add("Budget lines inflating, \n Repairs seems awfully high!\n Can Pig explain this? \n Should we say goodbye?'");
	    Afterword2.Add("Pig - 'I can still fix this! \n Clearly workers did it. \n Give me another chance.' \n Clerk - End of minute");

	    Titles.Add("Letters #1");
	    Body.Add("Letter from the office, \n Of Pig, the CEO. \n Dear Mr Weasel, \n I hear you’re in the know,");
	    Afterword.Add("About how to source parts, \n That will lower our costs.\n I’ve heard that the quality \n Is barely even lost!");
	    Afterword2.Add("A conveyor and belt \n And some lubricant oil. \n Could this be arranged? \n You’ll get your fair spoil.");

	    Titles.Add("INVOICE #2");
	    Body.Add("INVOICE: Supplier Parts \n Gears to make belts go. \n COST: Way too much \n SIGNATURE: CEO");
	    Afterword.Add("Note from the accountant \n Who audits the accounts.\n Mr Pig, not again! \n Please write the real amount.");
	    Afterword2.Add("");

        Titles.Add("Board Minutes #2");
	    Body.Add("Minutes of the Board, \n Last meeting of summer. \n Pig - 'Warm welcome all, \n I've brought a newcomer'");
	    Afterword.Add("'This is Mr Weasel, \n He deals in ‘discount’ parts.\n He’s cut down overheads, \n Due to his street smarts.'");
	    Afterword2.Add("Chair - 'It’s good to meet you, \n We welcome your input. \n We’ll all get rich together. \n The game is now afoot.'");

	    Titles.Add("Letters #2");
	    Body.Add("To Pig, the CEO \n Of Forrest Brothers Inc. \n Good to hear from you, \n Positive step, I think!");
	    Afterword.Add("Don’t let big suppliers, \n Fleece you for their parts.\n Mine are just as good, \n Performance off the charts!");
	    Afterword2.Add("You’re a savvy customer, \n That much is clear to me. \n Best wishes and talk soon. \n Weasel, respectfully.");

	    Titles.Add("INVOICE #3");
	    Body.Add("INVOICE: Factory Parts, \n From unknown third party. \n TOTAL COST:  Much less now. \n From Mr Pig the smarty.");
	    Afterword.Add("");
	    Afterword2.Add("");

        Titles.Add("Board Minutes #3");
	    Body.Add("Minutes of the Board, \n The most recent meeting. \n Chair - 'Our books look great, \n But re: overheating…'");
	    Afterword.Add("'Foreman has reported. \n That machines are seizing up.\n The friction resulting, \n Could cause a heat buildup'");
	    Afterword2.Add("'Pig - Friends, worry not: \n A temporary problem. \n Winter is setting in. \n Cold is sure to solve ‘em.'");

	    Titles.Add("Letters #3");
	    Body.Add("Enclosed a leaked memo, \n From the Chair of the Board. \n Private/confidential, \n Seemingly untoward.");
	    Afterword.Add("RE: Your annual bonus, \n Need to see improvements.\n Invest in counterfeits. \n Cover up their movements.");
	    Afterword2.Add("The workers cannot know, \n They’d riot if they knew \n The 'official' line regarding this; \n ‘All our parts are new’.");



        SetText(GameManager.Instance.CurrentLevel-1);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.KeypadEnter))
        {
            ContinueLevel();
        }
    }
    public void ContinueLevel()
    {
        GameManager.Instance.CurrentLevel++;
        SceneManager.LoadScene("Level1");
    }

    void SetText(int level)
    {
        
        TitleText.text = Titles[level];
        BodyText.text = Body[level];
        AfterwordText.text = Afterword[level];
        AfterwordText2.text = Afterword2[level];
    }
	
}
