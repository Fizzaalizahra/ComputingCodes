#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string name; 
	int age = 19;
	string hometown; 
	cout << "Enter your full name: ";
	getline(cin, name); 
	cout << endl << "Enter your hometown: ";
	cin >> hometown;
	cout << endl << "Name: " << name << endl << "Age:  " << age << endl << "Hometown: " << hometown << endl;
	return 0;
}
