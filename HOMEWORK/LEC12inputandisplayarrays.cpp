
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int courses[5];

    for (int i = 0; i < 5; i++) {
        cout << "Input the " << i + 1 << " number" << endl;
        cin >> courses[i];
        while (cin.fail()) {
            cout << "invalid command, enter the number again\n";
            cin.clear();
            cin.ignore();
            cin >> courses[i];
        }
    }
    cout << "the numbers are: \n";
    for (auto course : courses) {
        cout << course << endl;
    }


}