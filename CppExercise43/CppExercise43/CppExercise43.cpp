#include <iostream>
using namespace std;

int main() {

	int NumberOfSecond, SecondPerMinute = 60, SecondPerHour = 60 * SecondPerMinute, SecondPerDay = 24 * SecondPerHour;

	cout << "Enter the number of seconds : ";
	cin >> NumberOfSecond;

	int NumberOfDays = NumberOfSecond / SecondPerDay, Remainder = NumberOfSecond % SecondPerDay;
	
	int NumberOfHours = Remainder / SecondPerHour;
	Remainder = Remainder % SecondPerHour;
	
	int NumberOfMinutes = Remainder / SecondPerMinute;
	Remainder = Remainder % SecondPerMinute;

	cout << NumberOfDays << " : " << NumberOfHours << " : " << NumberOfMinutes << " : " << Remainder;
	return 0;
}