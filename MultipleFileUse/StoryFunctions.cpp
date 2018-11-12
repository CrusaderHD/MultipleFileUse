//Lets include Preprocessor Directives
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include "Declarations.h"
//Lets add a namespace
using namespace std;

//Lets Describe some Variables.

string userName;      //Takes in a string of UserName.
string userCommands;  //Displays a list of commands for the user.
string userLost;      //String to confirm user is lost.
string look;		  //String for user to look.
string inspect;		  //String for user to inspect something.
string grab;	      //String for user to grab something.
string yes;		      //String for user to confirm yes.
string no;		      //String for user to confirm no.
string touch;         //String for user to touch an item.
string open;		  //String for user to open something.
string continueStory; //String for user to return to the story.
string box;			  //String for user to touch box.
string metalKey;	  //String for user to touch metal key.
string metalLock;	  //String for user to use the lock, if they have the key.
string metalDoor;	  //String for user to open door. IF they have the key and have unlocked the lock.


bool lookLeft;        //Bool for user to look left.
bool lookRight;       //Bool for user to look right.
bool lightsOn;		  //Bool that symbolizes a light is turned on.
bool commandsUsed;    //Create a bool to determine if commands are being used.
bool seeDresser;	  //Bool if user sees the dresser.
bool openDresser;	  //Bool if user opens Dresser.
bool keyGrabbed;	  //Bool if user grabs key.
bool seeDoor;		  //Bool if user sees the door.
bool openDoor;	      //Bool if user opens the door.
bool seeLock;		  //Bool if user sees the lock.
bool unlockLock;	  //Bool if user unlocks the lock.
bool roomEscaped;     //Bool if user escapes the room.

//Lets Add some Functions.
//Let's the Functions begin!!!
//Function: GetUserCommands. Allows user to see a list of commands.
void GetUserCommands()
{
	cout << "\nTo see commands. Simply type commands: ";
	cin >> userCommands;
	system("pause");
	//If user types the word Commands/commands.
	if (userCommands == "Commands" || userCommands == "commands")
	{
		cout << "\n\nCommands: Yes, No, Look Left, Look Right, Inspect, Grab, Touch, Open.\n" << endl;
		commandsUsed = true;
	}
	if (commandsUsed)
	{
		cout << "\nRemember these...You only see them once.\n";
		cout << "To continue to the story. Please type Continue: ";
		cin >> continueStory;
	}
	//Conditional if user types in Continue. 
	if (continueStory == "Continue" || continueStory == "continue")
	{
		cout << "\n\nVery well. Moving Along then. Thanks for your participation..." << endl;
	}
	else if (!commandsUsed)
	{
		cout << "\n\nYou missed out. Good luck guessing." << endl;
	}
	system("pause");
}

//Function Named 'GetTextFromUser' this will take a string and returns a string.
void GetTextFromUser()
{
	//TODO: Make This
	system("pause");
	GetUserCommands();
	cout << "\n... What is your name? ";
	cin >> userName;
}

//Function Named 'GetNumbersFromUser' this will take a string and return an integer.
void GetNumbersFromUser()
{
	//TODO: Make This
}

//Function Named 'WelcomeUser' this will be an introduction to the story. As well as a list of commands prior to beginning.
void WelcomeUser()
{
	//TODO: Make This
	cout << "\n" << userName << ", welcome to the Lost Room." << endl;
	cout << "......." << endl;
	cout << ".............." << endl;
	cout << "....................." << endl;
	system("pause");
	cout << "\nAre You Feeling lost?" << endl;
	cin >> userLost;
	if (userLost == "Yes" || userLost == "yes" || userLost == "Y" || userLost == "y")
	{
		cout << "\nPerfect." << endl;
	}
	else if (userLost == "No" || userLost == "no" || userLost == "N" || userLost == "n")
	{
		cout << "\nIt's okay. I was in denial at first too." << endl;
	}
	else
	{
		cout << "\nTry Again...";
		cin >> userLost;
	}
}


//Function: LookLeft. 
void LookLeft()
{
	lookLeft = true;
	lookRight = false;

	do
	{
		if (lookLeft)
		{
			seeDoor = true;
			cout << "\nYou see the door." << endl;
			if (seeDoor)
			{
				cin >> inspect;
				if (inspect == "inspect" || inspect == "Inspect")
				{
					seeLock = true;
					cout << "After a closer look. All you see is the lock." << endl;
				}
			}
		}
	} while (!keyGrabbed);

	//Conditional if user has the key in their pocket and they look to the left or at the door.
	if (lookLeft && keyGrabbed)
	{
		seeDoor = true;
		cout << "\nYou look at the door and remember the key in your pocket." << endl;
		cout << "You grab the key out of your pocket and look at the lock." << endl;
		cout << "You  begin to think, no way it's this easy." << endl;
		cin >> inspect;
		if (inspect == "inspect" || inspect == "Inspect")
		{
			cout << "\nYou inspect the grooves on the key. Then slowly walk up to the lock." << endl;
			cout << "You begin to insert the key and listen as the grooves sound like they are falling in line with the lock." << endl;
			cout << "As you feel the key is fully inserted in the lock, you turn the key..." << endl;
			//TODO: Eventually, make the escape scene more intense...
			cout << "You hear the lock click and the lock falls off the door and onto the carpet." << endl;
			cout << "You pull the door open..." << endl;
			system("pause");
			cout << "\nTo be continued....\n\n";
			roomEscaped = true;
		}

	}
}

//Function: LookRight.
void LookRight()
{
	lookLeft = false;
	lookRight = true;

	do
	{
		if (lookRight)
		{
			seeDresser = true;
			cout << "\nYou see a dresser." << endl;
			if (seeDresser)
			{
				cin >> inspect;
				if (inspect == "inspect" || inspect == "Inspect")
				{
					seeDresser = true;
					cout << "After a closer look. You notice a drawer is loose." << endl;
					if (seeDresser)
					{
						cin >> open;
						if (open == "open" || open == "Open")
						{
							openDresser = true;
							cout << "\nYou slowly pull open the loose drawer..." << endl;
							if (openDresser)
							{
								cout << "You see a shiny object. Looks like a key.";
								cin >> grab;
								if (grab == "grab" || grab == "Grab")
								{
									keyGrabbed = true;
									cout << "\nYou grab the key and place it in your pocket.";
									//TODO:Add Key to INVENTORY - Pocket
								}
							}
						}
						else
						{
							cout << "\nNot the correct command...";
							cin >> open;
						}
					}
				}
				else
				{
					cout << "\nNot the correct command...";
					cin >> inspect;
				}
			}
		}
	} while (!keyGrabbed);

}

//Function Named 'NarrativeForUser' this will be the main handler for the story. It will incorporate use of other functions. Primarily used to keep main() clean and organized.
void NarrativeForUser()
{
	system("pause");
	system("cls");
	cout << "\nSlowly you begin to feel the room become filled with a haze." << endl;
	cout << "Your senses begin to heighten. You spin in circles. Hoping for something." << endl;
	cout << "But alas. The room is dark. You see nothing. You smell...nothing." << endl;
	cout << "You begin to wonder how you got here. But quickly shake that thought, because your primary focus is to escape." << endl;
	cout << "You close your eyes. Trying to get a sense for this room that you're in." << endl;
	cout << "Your heart immediately starts racing as you remember you have seen every single 'SAW' movie." << endl;
	cout << "You begin to wonder. Is this how it ends? No, it can't be." << endl;
	cout << "C'MON " << userName << ", you say to yourself. Pull yourself together..." << endl;
	cout << "You get on your hands and knees and begin to crawl. The floor is carpet. At least it's soft, you mutter quietly..." << endl;
	cout << "As your crawling, you feel something. What do you do? ";
	cin >> touch;
	if (touch == "touch" || touch == "Touch")
	{
		lightsOn = true;
		if (lightsOn)
		{
			cout << "Bingo. You turned on a light. Although dim. It still works..." << endl;
		}
	}
	else if (touch == "grab" || touch == "Grab")
	{
		lightsOn = false;
		cout << "You feel something. But can't grab it. Maybe something else? ";
		cin >> touch;
		if (touch == "touch" || touch == "Touch")
		{
			lightsOn = true;
			if (lightsOn)
			{
				cout << "Bingo. You turned on a light. Although dim. It still works..." << endl;
			}
		}
	}

	system("pause");

	cout << "\nNow that there is light, you look around the room..." << endl;
	cout << "You see a metal door, with a huge metal lock. You also notice a dresser." << endl;
	cout << "Which you find rather odd. If I am trapped...why is the lock on the inside. Not the outside? Also, why a dresser" << endl;
	cout << "Is there a different way out? How would someone trap me inside, lock the door from the inside and be able to leave?" << endl;

	//Do while loop for user to keep iterating through the game until roomEscaped.
	do
	{
		roomEscaped = false;

		cout << "\nWell, guess I better find a way out...\n";

		cin.ignore();

		getline(cin, look);
		cout << look << endl;
		cout << "\n\n";


		//If user types look left here do the following.
		if (look == "look left" || look == "Look Left")
		{
			LookLeft();
		}
		//If user types look right here do the following.
		else if (look == "look right" || look == "Look Right")
		{
			LookRight();
		}
		//If user types look up here do the following.
		else
		{
			cout << "\nHmm something isn't right." << endl;
			system("pause");
		}

	} while (!roomEscaped);



	//TODO: Make This
}
