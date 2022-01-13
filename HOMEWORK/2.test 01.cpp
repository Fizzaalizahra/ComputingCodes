#include <iostream>
using namespace std;
int main()
{
	int a;
	char b;
	string n;
	cout << "Enter your full name: ";
	cout << "enter your age: ";
	cin >> a;
	if (a >= 16 && a <= 18)
	{
		cout << "Do you want to go to the mall? (Y/N)" << endl;
		cin >> b;
	}
	else if (a >= 19 && a <= 21)
	{
		cout << "Do you want to go to a theme park? (Y/N)" << endl;
		cin >> b;
	}
	else if (a >= 22 && a <= 25)
	{
		cout << "Do you want to go to Istanbul? (Y/N)" << endl;
		cin >> b;
	}
	else if (a >= 26 && a <= 30)
	{
		cout << "Do you want to go to a trip to hawaii? (Y/N)" << endl;
		cin >> b;
	}
	return 0;

}
switch (b)
{
	case 'y':
	case 'Y':
	{
		cout << "enjoy" << endl;
		break;
	}
	case 'n':
	case 'N':
	{
		cout << "Cancelled" << endl;
		break;
	}
	default:
	{
		cout << "Invalid" << endl;
		break;
	}
	return 0;

}



	}
}
















