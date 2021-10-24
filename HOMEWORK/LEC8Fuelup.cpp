#include <iostream>
using namespace std;
int main()
{
    cout << "Kindly enter how many litres you want to fill up your car\n";
    int lit;//initlializing litres with integer
    cin >> lit;//taking litres as input from user
    if (lit != 0)
    {
        cout << "You have selected " << lit << " litres\n";
        cout << "Kindly select the fuel type you want for your car\n";
        cout << "Enter 'p' for Petrol\n 'd' for Diesel\n";
        char fuel;//initializing fuel with character
        cin >> fuel;//taking fuel as input from user
        switch (fuel)
        {
        case 'P':
        case 'p':
        {

            cout << "You have selected Petrol for filling up your car\n ";
            int c;
            c = lit * 0.8;
            cout << "\nThe price per litres is 0.8 now the total is " << c;
            break;
        }
        case 'd':
        case 'D':
        {
            cout << "You have selected Diesel for filling up your car ";
            int c;
            c = lit * 0.5;
            cout << "\nThe price per litres is 0.5 now the total is " << c;
            break;

            break;
        }

        default:
        {
            cout << "Incorrect command"; break;
        }
        }
    }
    else
    {
        cout << "Incorrect command\n ";
    }


}