#include <iostream>
using namespace std;
int main()
{
    cout << "What is the capital of France?\n";
    string capital;//initializing capital with string 
    cin >> capital;//taking capital as input from user

    if (capital == "Paris" || capital == "paris" || capital == "PARIS")
    {
        cout << "You enter the correct answer";
    }
    else
    {
        cout << "Sorry wrong answer";
    }

    return 0;
}
