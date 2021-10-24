#include<iostream>
using namespace std;
int main()
{
	float celsius; // assigning celsius with float datatype
	cout << "Enter the temperature in celsius: ";
	cin >> celsius; // Taking celsius as input from the user
	cout << celsius << " celsius is " << (celsius * 1.8000) + 32 << " in Fahrenheit.\n"; // F = c*1.8000 + 32
	return 0;
}