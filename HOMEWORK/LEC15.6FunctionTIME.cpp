#include<iostream>
using namespace std;
string greetings(int time)
{
	//evaluate int value passed in and set return message
	if (time < 12)
	{
		return "Good Morning";
	}
	else if (time > 11 && time < 18)
	{
		return "Good Afternoon";
	}
	else if (time > 17 && time < 22)
	{
		return "Good Evening";
	}
	else if (time > 21 && time < 25)
	{
		return "Good Night";
	}
}
int main()
{
	cout << "What time is it?" << endl; //ask the user for time
	int userInput; //variable to store user response
	cin >> userInput; //get user input
	while (cin.fail() || userInput < 0 || userInput > 24)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid Time\nTry again: ";
		cin >> userInput;
	}
	//output string returned by function
	cout << greetings(userInput) << endl;
	return 0;
}