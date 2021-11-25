/*#include<iostream>
using namespace std;
int main()
{
	string snacks[3][4] = {
		{"galaxy silk", "mars bar", "snickers", "bounty"},
	{"flavoured youghurt", "oman chips", "oreo", "lays"},
		{"apple", "banana", "orange " ,"pear"}
	};
	cout << snacks[1][2] << endl;
}
*/
#include<iostream>
using namespace std;
int main()
{
	string snacks[3][4] = {
		{"galaxy silk", "mars bar", "snickers", "bounty"},
	{"flavoured youghurt", "oman chips", "oreo", "lays"},
		{"apple", "banana", "orange " ,"pear"}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << snacks[i][j] << "*";
		}
		cout << endl;
	}
	return 0;
}




