#include<iostream>
using namespace std;
int main()
{
	float fahrenheit; //declaring F as float 
	cout << "Enter the temperature in fahrenheit: ";
	cin >> fahrenheit; // taking the temperature in Fahrenheit as input from the user
	cout << fahrenheit << " fahrenheit is " << (fahrenheit - 32) * 5 / 9 << " in Celsius." << endl; // Formula = (F-32)*5/9
	return 0;
}
