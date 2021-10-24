#include<iostream>
using namespace std;
int main()
{
	double mag;//initializing magnitude with double
	cout << "please enter the mangitude of the earthquake in numbers 0 input is not accepted : ";
	cin >> mag;//taking magnitude from user 



	if (mag < 2.0 && mag >0) {
		cout << " earthquake is considered to be a micro earthquake.";
	}
	else if (mag >= 2.0 && mag < 3)
	{
		cout << mag << " earthquake is considered to be a very minor earthquake.";
	}
	else if (mag >= 3.0 && mag < 4)
	{
		cout << mag << " earthquake is considered to be a minor earthquake.";
	}
	else if (mag >= 4.0 && mag < 5.0)
	{
		cout << mag << " earthquake is considered to be a light earthquake.";
	}
	else if (mag >= 5.0 && mag < 6.0)
	{
		cout << mag << " earthquake is considered to be a moderate earthquake." << endl;
	}
	else if (mag >= 6.0 && mag < 7)
	{
		cout << mag << " earthquake is considered to be a strong earthquake." << endl;
	}
	else if (mag >= 7.0 && mag < 8)
	{
		cout << mag << " earthquake is considered to be a major earthquake." << endl;
	}
	else if (mag >= 8.0 && mag <= 10)
	{
		cout << mag << " earthquake is considered to be a great earthquake." << endl;
	}
	else if (mag > 10.0)
	{
		cout << mag << " earthquake is considered to be a meteoric earthquake." << endl;
	}

	else {
		cout << "You entered an invalid value" << endl;
	}
	return 0;
}