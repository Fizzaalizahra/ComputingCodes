#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b;//initializing variable a and b with interger
	cout << "Enter two numbers to calculate" << endl;
	cout << "Enter number 1";
	cin >> a;//taking a as input
	cout << "Enter number 2";
	cin >> b;//taking b as input 
	cout << "Pick a calculation" << endl;
	cout << "1: Addition\n2 : Subtraction\n3: Multiplication\n4: Division" <<
		endl;
	int input//initializing input with integer
	cin >> input;
	switch (input) {
	case 1:
		cout << (a + b) << endl;//addition of variables a and b 
		break;
	case 2:
		cout << (a - b) << endl;//subtraction of variables a and b
		break;
	case 3:
		cout << (a * b) << endl;//multiplication of variables a and b
		break;
	case 4:
		cout << (a / b) << endl;//division of variable a and b 
		break;
	default:
		cout << "Invalid Input" << endl;//wrong statement
	}


}
