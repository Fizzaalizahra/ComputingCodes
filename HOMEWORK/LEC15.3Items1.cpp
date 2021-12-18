#include <iostream>
using namespace std;

double sumItems(double item1, double item2) //define function
{
	double total = item1 + item2; //calculate cost of items
	return total; // return total cost back to main program 

}
int main()
{
	double myMoney = 40.00;
	double shoes = 25.99;
	double tshirt = .50;

	if (sumItems(shoes, tshirt) <= myMoney) 
	{ //determine whether you can afford items
		cout << "you can afford them" << endl;

	}
	else {
		cout << "keep saving up" << endl;
	}
}