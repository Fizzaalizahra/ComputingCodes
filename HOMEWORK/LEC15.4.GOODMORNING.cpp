#include<iostream>
using namespace std;
/*return type set to string as this function will return a string value back to main program*/

string greetings(int time) {
	//evaluate int value passed in and set return message
	if (time < 12)
	{
		return "Good Morning";
	}
	else
	{
		return "Good Afternoon";
	}
}
    int main()

   {
	cout << "What time is it?" << endl; //ask the user for time
	int userInput; //variable to store user response
	cin >> userInput; //get user input

	//output string returned by function
	cout << greetings(userInput) << endl;

	return 0;

	}
