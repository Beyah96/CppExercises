#include <iostream>
#include <string>

using namespace std;

int main() {
	string Months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int Month;

	cout << "Enter your month number : ";
	cin >> Month;

	if (Month < 1 || Month > 12) {
		cout << "Wrong month";
	}
	else {
		cout << Months[Month - 1];
	}
	return 0;

}