#include<iostream>
using namespace std;
int main()
{
	cout << "Would you like to continue? (Y/N): "; //ask for  input
	char a;//variable for user answer;
	cin >> a;//get user input
	switch (a)  //evaluate expression
	{
	case 'y':
	case 'Y': //case for Y
	{
		cout << "You are advancing to the next level!" << endl;	//cout message if user enters Y
		break;//break to end case
	}
	case'n':
	case'N': //case for N
	{
		cout << "You chose to stop playing the game" << endl;	//cout message if user enters N  
		break;  // break to end case
	}
	default: //default case
	{
		cout << "You entered an invalid option" << endl;
	}
	}
	return 0;
}