#include <iostream>

using namespace std;
int main()
{

	cout << "Kindly select what type of temperature conversion you're interested in" << endl;
	cout << "Type 'c' for conversion from celcius into fahrenheit" << endl;
	cout << "Type 'f' for conversion from fahrenheit into celcius" << endl;

	char select;//initializing select with character
	int temp;//initiliazing temperature with integer
	cin >> select;//taking select as input
	switch (select)
	{
	case 'c':
	case 'C':

	{
		cout << "\nKindly enter the temperature in celcius to be converted into fahrenheit\n";
		cin >> temp;//taking temp as input
		temp = (temp * 1.8) + 32;
		cout << "\n The temperature after converison is " << temp;
		break;
	}
	case 'f':
	case 'F':
	{
		cout << "\nKindly enter the temperature in fahrenheit to be converted into celcius\n";
		cin >> temp;//taking temp as input
		temp = (temp - 32) * 0.5556;
		cout << "\n The temperature after converison is " << temp;
		break;
	}

	default:
	{
		cout << "Incorrect command";
		break;
	}

	}


	cin.get(); //keeps console window open in Visual Studio
	return 0;
}

