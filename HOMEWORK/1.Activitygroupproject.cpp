#include<iostream>
#include<algorithm>
#include<array>
	using namespace std;
	int main()
	{
		array<int, 20> Marks;
		int sum = 0;
		for (int i = 0; i < 20; i++)
		{
			cout << "Enter the marks of student number " << i + 1 << ": ";
			cin >> Marks[i];
			while (cin.fail() || Marks[i] < 0 || Marks[i] >= 100)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid number, Try Again\nEnter the marks of student number " << i + 1 << " again: ";
				cin >> Marks[i];
			}
			sum = sum + Marks[i];
		}
		sort(Marks.begin(), Marks.end());
		double avg = sum / 20;
		cout << "The highest number is: " << Marks.at(19) << endl << endl;
		cout << "The lowest number is: " << Marks.at(0) << endl << endl;
		cout << "The average is: " << avg << endl << endl;
		cout << "Ascending order." << endl;
		for (int num : Marks)
		{
			cout << num << " ";
		}
		cout << "\nDescending order." << endl;
		reverse(Marks.begin(), Marks.end());
		for (int ma : Marks) {
			cout << ma << " ";
		}
		return 0;
	}
