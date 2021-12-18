#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

string message(double num)
{

	cout << "\n\nThe rooth from 1-10 is: " << endl;
	double y = 1;
	do
	{
		cout << y << " root value for " << num << " is: ";
		double x = 1 / y;
		double r = pow(num, x);
		cout << r << endl;
		y++;
	} while (y != 11);

	return "********END OF THE CODE*******";
}

int main()
{

	int num, fact = 1;

	cout << "Enter a number you want the root value from 1-10: " << endl;
	cin >> num;

	while (cin.fail())
	{
		cout << "Invalid command enter the numbers again: " << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}


	cout << message(num) << endl;

	return 0;

}