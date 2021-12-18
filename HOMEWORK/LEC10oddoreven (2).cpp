#include<iostream>
#include<string>
using namespace std;
int main()
{
	for (int x = 20; x <= 24; x++)
	{
		if (x % 2 == 0)
		{
			cout << x << " even" << endl;
		}
		else if (x % 2 == 1)
		{
			cout << x << " odd" << endl;
		}
		else
		{
			cout << "Invalid" << endl;
		}
	}
	return 0;
}
