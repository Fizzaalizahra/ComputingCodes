#include <iostream>
using namespace std;
int main()
{
	string password = "246";
	string userInput;



	while (userInput != password)
	{
		cout << "Enter the pass code for the safe" << endl;
		cin >> userInput;

	}
	//to print the ran out of message only if the password was not found within 5 attempts
	cout << "You found the code";
}
