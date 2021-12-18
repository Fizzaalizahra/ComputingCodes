#include<iostream>
using namespace std;

int  myCalculation(int num)
{
	num += 2;
	num += 8;
	return num;

}
int main()
{
	int userNum; //create integer variable
	cout << "enter a number :"; // ask user to enter a number
	cin >> userNum; //assign users input to our num variable
	userNum = myCalculation(userNum); // make usernum equal to value returned by function
	cout << userNum << endl; // output userNum
	return 0;

}
