#include <iostream>
#include <array>
using namespace std;
int main() {
	array<string, 4> arr = { "mars bar" , "snickers" , "bounty", "wispa" };
	cout << arr.at(1) << endl;
	cout << arr[1] << endl;
	cout << arr.front() << endl;
	cout << arr.back() << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr.at(i) << ",";
	}
	cout << endl;
	return 0; 
}
