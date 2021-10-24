#include<iostream>
using namespace std;
int main()
{
	double side;//initialising side with doublle
	cout << "Enter the sides number to see the shape name (minimum 3 sides, maximum 10) \n";
	cin >> side;//taking side from user as input 

	if (side <= 2)
	{
		cout << "You enter 2 as side, which is incorrect input";
	}
	else if (side == 3)
	{
		cout << "Triangle  has " << side << " sides" << endl;//declaring number of sides
	}
	else if (side == 4)
	{
		cout << "Square | Rectangle has " << side << " sides" << endl;
	}
	else if (side == 5)
	{
		cout << "Pentagon has " << side << " sides" << endl;
	}
	else if (side == 6)
	{
		cout << "Hexagon have " << side << " sides" << endl;

	}
	else if (side == 7)
	{
		cout << "Hepaton have " << side << " sides" << endl;

	}
	else if (side == 8)
	{
		cout << "Octagon have " << side << " sides" << endl;

	}

	else if (side == 9)
	{
		cout << "Nonagon have " << side << " sides" << endl;

	}
	else if (side == 10)
	{
		cout << "Decagon have " << side << " sides" << endl;

	}
	else
	{
		cout << "Incorrect";//incorrect statement 

	}

	return 0;
}
