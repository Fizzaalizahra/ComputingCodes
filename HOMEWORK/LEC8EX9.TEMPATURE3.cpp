#include <iostream>
#include <string>
using namespace std;

int main()
{
    double x, y;
    cout << "Enter the temperature in celcius to be converted into Fahrenheit \n";//declare temp in F by converting from C
    cin >> x;
    y = (x * 1.8) + 32;
    cout << "The temperature in Fahrenheit is: " << y << endl;
}
