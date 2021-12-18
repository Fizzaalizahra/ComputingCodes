#include<iostream>
 void hello();
void goodbye();
using namespace std;
int main()
{
	 hello();
	goodbye();
	return 0;
}
void hello()
{
	cout << "Hello" << endl;
}
void goodbye()
{
	cout << "GoodBye" << endl;
}
