#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{

	array<int, 5> numbers = { 33, 5, 7, 99, 83 };
	sort(numbers.begin(), numbers.end()); // + call to sort here
	for (int num : numbers) {
		cout << num << " "; //output should be 5, 7, 33, 83, 99
	}
	cout << endl;
	array<int, 5> numbers = { 33, 5, 7, 99, 83 };
	reverse(numbers.begin(), numbers.end()); // + call to reverse here
	for (int num : numbers) {
		cout << num << " "; //output should be 99, 83, 7 , 5 , 3
	}
	cout << endl;

}


