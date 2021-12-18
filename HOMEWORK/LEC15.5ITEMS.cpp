#include <iostream>
using namespace std;

double sumItems(double item1, double item2) //define function
{
	double total = item1 + item2; //calculate cost of items
	return total; //return total cost back to main program
}
int main()
{
	double myMoney = 48.00;
	double shoes;
	double tshirt;
	cout << "How much does the shoes cost? ";
	cin >> shoes;
	while (cin.fail() && shoes >= 0)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid Amount\nTry again: ";
		cin >> shoes;
	}

	cout << "How much does the tshirt cost? ";
	cin >> tshirt;
	while (cin.fail() && tshirt >= 0)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid Amount\nTry again: ";
		cin >> tshirt;
	}
	if (sumItems(shoes, tshirt) <= myMoney) //determine whether you can afford items
	{
		cout << "you can afford these items" << endl;
	}
	else
	{
		cout << "keep saving up" << endl;
	}
	return 0;