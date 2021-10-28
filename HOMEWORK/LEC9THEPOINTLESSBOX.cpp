
#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	while (b != 1 && !cin.fail())

	{
		cout << "Enter the number : ";
		cin >> a;
		if (a == 1)
		{
			cout << "You have entered 1";
			b++;
		}
		else if (a == 2)
		{
			cout << "You have entered 2";
			b++;
			return 0;

		}

	}


}