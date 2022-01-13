#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	int Num, Fact = 1, a = 10;
	string Name;
	cout << " Please enter your name: " << endl;
	getline(cin, Name);
	cout << "Please enter a number: " << endl;
	cin >> Num;

	while (cin.fail())

	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "error " << endl;
		cin >> Num;
	}
	for (int x = Num; x > 0; x--)
	{
		Fact *= x;
	}
	cout << "Factorial is: " << Fact << endl;

	do
	{
		cout << Num << " x " << a << " = " << Num * a << endl;
		a--;//decreasing
	}

	while (a > 0);

	for (int x = 10; x > 4; x--)
	{
		cout << Num << " the exponent is " << x << " = " << pow(Num, x) << endl;
	}
	return 0;
}



