#include<iostream>
#include<array>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int number;
	cout << "enter a number" << endl;
	cin >> number;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "invalid" << endl;
		cin >> number;
	}
	cout << " square root " << sqrt(number) << " cube root " << cbrt(number) << endl;

}
