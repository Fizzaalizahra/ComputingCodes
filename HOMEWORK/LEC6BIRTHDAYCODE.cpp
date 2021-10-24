#include<iostream>
using namespace std;
int main()
{
	bool MyBirthday = true; // initializing a varible named Mybirthday with the data type as bool
	int age = 18; // initializing a varible named age with the data type as int

	if (MyBirthday == true) // if statement will be executed if the value of MyBirthday is true
	{
		age++; // age + 1
		cout << "It is my birthday. I am " << age << " years old";
	}
	else // else statement will be executed if the value of Birthday is false
	{
		cout << "It is not my birthday" << endl;
	}
	return 0;
}