#include<iostream>
using namespace std;
int main()
{
	int x[5], sum = 0;
	cout << "Enter the marks." << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> x[i];
	}
	for (int i = 0; i < 5; i++)
	{
		sum = sum+ x[i];
	}
	cout << "The average is : " << sum / 5 << endl;
	return 0;
}

