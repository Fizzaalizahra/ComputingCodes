#include <iostream>
using namespace std;
int main()
{
	int x[5];
	cout << "enter five values" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> x[i];
	}
	for (auto b : x)
	{
		cout << b << endl;
	}
	return 0;
}

