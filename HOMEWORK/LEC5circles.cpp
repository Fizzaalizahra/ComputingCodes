#include <iostream>
#include <string>
using namespace std;

int main()
{
    double r, a, c;//initializing radius,area and circumference with double
    cout << "Enter the radius to calculate the area and circumference of the circle \n";
    cin >> r;//Putting user's input as radius
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    cout << "The area of the circle is: \n " << a << endl;
    cout << "The circumference  of the circle is: \n " << c << endl;
    retun 0;

}
