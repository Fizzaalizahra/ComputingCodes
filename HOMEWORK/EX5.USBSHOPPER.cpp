#include<iostream>
using namespace std;
int main()
{
	int TotalMoney = 50; // put total money
	int Price = 6; // put cost of a single USB
	cout << "She can buy " << TotalMoney / Price << " usb sticks" << endl; // 50 / 6 = 8
	cout << "She will have " << TotalMoney % Price << " fils left" << endl; // 50 % 6 = 2
	return 0;
}
