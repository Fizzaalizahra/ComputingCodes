#include<iostream>
#include <string>
using namespace std;
int main()
{
	string snacks[5][5] = {
		{"_","_","_","_","_"}, 
	{"_", "O", "_", "O", "_"}, 
	{"_", "@", "@", "@", "_"}, 
	{"_", "^", "^", "^", "_"}, 
	{"_", "V", "V", "V","_" } 
	};

	for (int x = 0; x < 5; x++)
	{
		cout << endl;
		for (int y = 0; y < 5; y++)
			cout << snacks[x][y];
	}
	cout << endl;
}