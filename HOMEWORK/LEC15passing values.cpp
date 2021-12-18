#include<iostream>
using namespace std;

void myCalculation(int num)
{
	num += 2;
	num += 8;
	cout << num << endl;

}
int main()
{
	int userNum; //create integer variable
	cout << "enter a number :"; // ask user to enter a number
	cin >> userNum; //assign users input to our num variable
	myCalculation(userNum); //call the function and pass in num as parameter argument

	return 0 ;

}