#include <iostream>
using namespace std;
int main()
{

	int x, f = 1;
	cout << "enter the number: ";
	cin >> x;
	for (int i= x; i >= 1; i--)
	{
		f = f * i;
	}
	cout << "\nFactorial = " << f << endl;
	return 0;
}






