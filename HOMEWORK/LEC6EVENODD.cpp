#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number to see whether its even or odd\n";
    int number;//initializing number with integer 
    cin >> number; //taking numnber from user 
    if (number % 2 == 0)
    {
        cout << "\nThe entered number is Even\n";
    }
    else if (number % 2 != 0)
    {
        cout << "The number entered is odd";
    }
    else
    {
        cout << "Incorrect";
    }
}
