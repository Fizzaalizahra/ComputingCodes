#include<iostream>
#include<string>
using namespace std;
void TeaMenu();
void CoffeeMenu();
int main()
{
    int Choice, Money, OriginalMoney = 0;
    char Answer;
    string Sugar;
    cout << "Welcome" << endl;
    cout << "Hi, What drink do you prefer?\n1. Tea\n2. Coffee\n=> ";
    cin >> Choice;//putting the user's input in choices
    while (cin.fail() || (Choice != 1 && Choice != 2))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input.\nOnly 1 or 2: ";
        cin >> Choice;
    }
    if (Choice == 1)
    {
        TeaMenu();
    }
    else
    {
        CoffeeMenu();
    }
    cout << "Enter 'I' for Ice, 'M' for Milk, and 'B' for Black: ";
    cin >> Answer;
    while (cin.fail() || (Answer != 'I' && Answer != 'M' && Answer != 'B' && Answer != 'i' && Answer != 'm' && Answer != 'b'))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input.\nOnly I, M, or B: ";
        cin >> Answer;
    }
    cout << "Pay the money please: ";
    cin >> Money;
    while (cin.fail() || Money < 1)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input.\nTry again: ";
        cin >> Money;
    }
    OriginalMoney = Money;
    switch (Answer)
    {
    case 'i':
    case 'I':
    {
        Money -= 3;
        break;
    }
    case 'm':
    case 'M':
    {
        Money -= 2;
        break;
    }
    case 'b':
    case 'B':
    {
        Money -= 1;
        break;
    }
    default:
    {
        break;
    }
    }
    if (Money >= 0)
    {
        cout << "Do you want some sugar? (Y/N): ";
        cin >> Sugar;
        while (Sugar != "y" && Sugar != "Y" && Sugar != "n" && Sugar != "N")
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input.\nTry again (Y/N): ";
            cin >> Sugar;
        }
        if (Sugar == "y" || Sugar == "Y")
        {
            cout << "Your drink with sugar is ready" << endl;
        }
        else
        {
            cout << "Your drink without sugar is ready" << endl;
        }
        cout << "Do not forget your change!: " << Money << " aed" << endl;
    }
    else
    {
        cout << "Sorry,You don't have enough money\nPlease Have your money back: " << OriginalMoney << " aed" << endl;
    }
    return 0;
}
void TeaMenu()
{
    string Tea[6] = { "Ice Tea","3 aed","Milk Tea","2 aed","Black Tea","1 aed" };
    for (int i = 0; i < 6; i += 2)
    {
        cout << Tea[i] << "      " << Tea[i + 1] << endl;
    }
}
void CoffeeMenu()
{
    string Coffee[6] = { "Ice Coffee","3 aed","Milk Coffee","2 aed","Black Coffee","1 aed" };
    for (int i = 0; i < 6; i += 2)
    {
        cout << Coffee[i] << "\t" << Coffee[i + 1] << endl;
    }
}