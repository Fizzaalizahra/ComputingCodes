#include<iostream>
using namespace std;
int main()
{
	int t, m;//initializing t,m with integer 
	cout << "Til what time your friend will come? (Enter the time in minutes)\n";
	cin >> t;//taking t as input from user 
	if (t >= 15)
	{
		cout << "Your friend will take more or equal to 15 minutes to come,\n enter the money amount to see if you can drink something";
		cin >> m;//taking m as input from user
		if (m > 5)
		{
			cout << "You have more than 5 AED, now you will buy a drink and wait for him" << endl;
		}
		else
		{
			cout << "You don't have enough money,\n Let's just walk around";
		}
	}
	else
	{
		cout << "Your friend will be here within 15 minutes, \n so you're just going to wait for him." << endl;
	}
	return 0;
}