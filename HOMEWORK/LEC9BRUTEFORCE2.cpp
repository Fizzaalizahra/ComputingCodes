#include <iostream>
using namespace std;
int main()
{
	string password = "246";
	string userInput;
	int x = 5;
	cout << "You will only have 5 attempts" << endl;


	while (x > 0)
	{
		cout << "Enter the pass code for the safe" << endl;
		cin >> userInput;
		if (userInput == password)
		{
			cout << "You have finally unlocked the safe" << endl;

			break;
		}
		else
			x--;
	}
	//to print the ran out of message only if the password was not found within 5 attempts
	if (x == 0)
	{
		cout << "You ran out of attempts" << endl;
	}
}