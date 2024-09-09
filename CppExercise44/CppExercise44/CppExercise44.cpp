#include <iostream>
#include <string>

using namespace std;

int main() {

	int Day;
	cout << "Please enter your day number : ";
	cin >> Day;
	cout << "Its ";
	if (Day < 1 || Day > 7) {
		cout << "Wrong Day";
	}
	else if (Day == 1) {
		cout << "Sunday";
	}
	else if (Day == 2) {
		cout << "Monday";
	}
	else if (Day == 3) {
		cout << "Tuesday";
	}
	else if (Day == 4) {
		cout << "Wednesday";
	}
	else if (Day == 5) {
		cout << "Thursday";
	}
	else if (Day == 6) {
		cout << "Friday";
	}
	else {
		cout << "Saturday";
	}
	return 0;


}