#include <iostream>
using namespace std;

int main() {
	
	short Days, Hours, Minutes, Seconds;

	cout << "Enter the number of days : ";
	cin >> Days;

	cout << "Enter the number of hours : ";
	cin >> Hours;

	cout << "Enter the number of minutes : ";
	cin >> Minutes;

	cout << "Enter the number of seconds : ";
	cin >> Seconds;

	int NumberOfHours = Hours + 24 * Days, NumberOfMinutes = Minutes + 60 * NumberOfHours, NumberOfSeconds = Seconds + 60 * NumberOfMinutes;

	cout << "Total number of seconds : " << NumberOfSeconds << " Seconds";

	return 0;
}