
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int randomArry[10];
	for (int i = 0; i < 10; i++)
	{
		//rand is use to generate a random variable 
		//using %50 to make sure number arent too big
		randomArry[i] = rand() % 50;
		cout << randomArry[i] << endl;
	}
}
