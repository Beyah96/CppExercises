#include <iostream>
using namespace std;

void GetdateDetails(int NumberOfSecond) {
	int SecondPerMinute = 60, SecondPerHour = 60 * SecondPerMinute, SecondPerDay = 24 * SecondPerHour;

	int NumberOfDays = NumberOfSecond / SecondPerDay, Remainder = NumberOfSecond % SecondPerDay;

	int NumberOfHours = Remainder / SecondPerHour;
	Remainder = Remainder % SecondPerHour;

	int NumberOfMinutes = Remainder / SecondPerMinute;
	Remainder = Remainder % SecondPerMinute;

	cout << NumberOfDays << " : " << NumberOfHours << " : " << NumberOfMinutes << " : " << Remainder;

}
int main() {

	int NumberOfSecond;

	cout << "Enter the number of seconds : ";
	cin >> NumberOfSecond;
	GetdateDetails(NumberOfSecond);
return 0;
}