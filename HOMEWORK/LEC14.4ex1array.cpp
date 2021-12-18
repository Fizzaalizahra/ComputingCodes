#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int randomArry[10];
	for (int i = 0; i < 10; i++)
	{
		//rand is use to generate a random variable
		//using %50 to make sure number aren't too big
		randomArry[i] = rand() % 50;
		cout << randomArry[i] << endl;
	}
	int n[1000];
	int counter = 0;
	srand(50);
	for (int i = 0; i < 1000; i++)
	{
		n[i] = rand() % 100;
		cout << n[i] << endl;
		if (n[i] == 6)
		{
			counter++;
		}
	}

	cout << "The number 6 appeared " << counter << " times." << endl;
	return 0;
}


