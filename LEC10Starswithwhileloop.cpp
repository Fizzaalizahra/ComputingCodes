#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x = 5;
	while (x > 0)
	{
		int y = x;
		x--;

		while (y > 0)
		{
			cout << "*";
			y--;
			
		}
		cout << endl;
	}
}

