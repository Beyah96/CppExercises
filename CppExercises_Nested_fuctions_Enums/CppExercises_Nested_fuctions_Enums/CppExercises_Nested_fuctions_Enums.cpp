#include <iostream>
#include <string>

using namespace std;
void ShowMonthMenu() {
	cout << "**************************************************" << endl;
	cout << "		Year Month Menu			" << endl;
	cout << "**************************************************" << endl;
	cout << " (1) : January " << endl;
	cout << " (2) : February " << endl;
	cout << " (3) : March " << endl;
	cout << " (4) : April " << endl;
	cout << " (5) : May " << endl;
	cout << " (6) : June " << endl;
	cout << " (7) : July " << endl;
	cout << " (8) : August " << endl;
	cout << " (9) : September " << endl;
	cout << " (10) : October " << endl;
	cout << " (11) : November " << endl;
	cout << " (12) : December " << endl;
	cout << "**************************************************" << endl;
	cout << "Your choice ? : " ;
}
enum enMonths { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };
enMonths ReadMonth() {
	int M;
	cin >> M;
	return (enMonths)M;
}
string GetMonthName(enMonths Month) {
	switch (Month) {
	case enMonths::January:
		return "January";
		break;
	case enMonths::February:
		return "February";
		break;
	case enMonths::March:
		return "March";
		break;
	case enMonths::April:
		return "April";
		break;
	case enMonths::May:
		return "May";

	case enMonths::June:
		return "June";

	case enMonths::July:
		return "July";

	case enMonths::August:
		return "August";

	case enMonths::September:
		return "September";

	case enMonths::October:
		return "October";

	case enMonths::November:
		return "November";

	case enMonths::December:
		return "December";

	default:
		return "Wrong month";
	}
}

int main() {
	ShowMonthMenu();
	cout << "Your chosen month is : " << GetMonthName(ReadMonth()) << endl;
}