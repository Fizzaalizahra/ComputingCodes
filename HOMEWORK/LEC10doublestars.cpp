#include<iostream>
using namespace std;
int main()
{

		int m = 5;
		while (m > 0)
		{
			int n = m;
			while (n > 0)
			{
				cout << "*";
				n--;
			}
			m--;
			cout << endl;
		}
		int x = 0;
		while (x <= 5)
		{
			int y = 1;
			x++;
			while (y < x)
			{
				cout << "*";
				y++;
			}

			cout << endl;
		}
		return 0;
	}
