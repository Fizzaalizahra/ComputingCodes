// Chapter 2 Exercise 1 (with extension)
#include<iostream>
using namespace std;
int main()
{
	int currentTime = 3; // initializing a variable called currentTime and initialise it with the value 3
	if (currentTime <= 12 && currentTime >= 0) // checking the time
	{
		cout << "Good Morning" << endl; // Good Morning statement
		cout << "It's AM " << endl;
	}
	else if (currentTime < 19)
	{
		cout << "Good Afternoon" << endl; // Good Afternoon statement
		cout << "It's PM " << endl;
	}
	else if (currentTime < 22)
	{
		cout << "Good Evening" << endl; // Good Evening statement
		cout << "It's PM " << endl;
	}
	else if (currentTime < 25)
	{
		cout << "Good Night" << endl; // Good Night statement
		cout << "It's PM " << endl;
	}
	else
	{
		cout << "Time not valid " << endl; // Time not valid output
	}
	return 0;
}
