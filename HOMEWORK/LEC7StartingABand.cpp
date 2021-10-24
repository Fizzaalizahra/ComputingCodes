#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool musician;//initializing musician with boolean
	string reply;//initializing reply with string
	string instrument;//initializng instrument by string 
	cout << "Do you play any musical instrument? \n type 'y' for yes \n and 'n' for no \n ";
	cin >> reply; //taking reply as input from user
	if (reply == "y" || reply == "Y")
	{
		musician = true;
		if (musician == true)
		{
			cout << "What kind of insturment you can play \n type d if you're a drummer \n type g if you're a guitarist\n type o for other\n" << endl;
			cin >> instrument;
			if (instrument == "g" || instrument == "G")
			{
				cout << "That's great! I really needed a guitarist." << endl;
			}
			else if (instrument == "d" || instrument == "D")
			{
				cout << "That's great! I really needed a drummer." << endl;
			}
			else if (instrument == "o" || instrument == "O")
			{
				cout << "Ah I see, actually I'm looking for guitarist or a drummer.\n Let me know if you someone who plays them\n Thank you :)" << endl;
			}
			else
			{
				cout << "Incorrect input" << endl;
			}

		}
	}
	else if (reply == "N" || reply == "n")
	{
		musician = false;
		cout << "Oh! so you don't know how to play any instrument\n it's alright, let me know if you know someone who does \n Thanks" << endl;
	}
	else
	{

		cout << "Incorrect input" << endl;
	}


	return 0;
}