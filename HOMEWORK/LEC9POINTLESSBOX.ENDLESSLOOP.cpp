#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number either 1 or 2" << endl;
    string x;
    cin >> x;
    while (true)
    {
        if (x == "1")
        {
            cout << "you have entered the number 1" << endl;
            cout << "Enter a number either 1 or 2\n";
            cin >> x;
        }
        else if (x == "2")
        {
            cout << "you have entered the number 2\n";
            cout << "Enter a number either 1 or 2\n";
            cin >> x;
        }

        else
        {
            cout << "you did not enter the number 1 and 2\n";
            cout << "Enter a number either 1 or 2\n";
            cin >> x;
        }
        return 0;



    }


}