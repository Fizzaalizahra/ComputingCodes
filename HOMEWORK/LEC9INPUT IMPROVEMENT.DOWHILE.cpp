#include <iostream>
using namespace std;
int main() {

	char input;
	do
	{
		cout << "Would you like to Quit (Y/N)?" << endl;
			cin >> input;
	} 
	while ((input != 'Y') && (input != 'y'));

	return 0;
}