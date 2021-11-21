#include<iostream>
using namespace std;
int main()
{
	int x = 0; 
	while (x < 5)
	{
		x++;
		int y = 1;
		while (y <= x)
		{
			y++;
			cout << "*";
		}
		cout << endl;
	}
}
