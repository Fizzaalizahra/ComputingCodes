#include<iostream>
using namespace std;
int main()
{
	float triangle, square, rectangle, l, w;//initiliazing shapes with float
	cout << "Enter the lenght: ";
	cin >> l;
	cout << "Enter the width: ";
	cin >> w;//taking width from user.
	triangle = l * w * 0.5;
	rectangle = l * w;
	square = l * l;
	cout << "The area of the rectangle is : " << rectangle << endl;
	cout << "The area of the triangle is : " << triangle << endl;
	cout << "The area of the square is : " << square << endl;
	return 0;
}
