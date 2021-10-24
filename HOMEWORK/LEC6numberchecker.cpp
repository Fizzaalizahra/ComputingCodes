#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number to see whether its positive, negative or zero\n";
    double number;// initializing number with double
    cin >> number;//taking number as input
    if (number == 0)
    {
        cout << "The number you entered is zero";
    }

    else  if (number > 0)
    {
        cout << "The number you entered is positive";//positive answer stated
    }
    else  if (number < 0)
    {
        cout << "The number you entered is negative";//negative answer stated
    }
    else
    {
        cout << "Incorrect input";//incorrect statement
    }
}