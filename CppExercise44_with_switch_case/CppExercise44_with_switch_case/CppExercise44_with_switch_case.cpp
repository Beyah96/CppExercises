#include <iostream>
#include <string>

using namespace std;

int main() {

	int Day;
	
	cout << "Enter the number of your prefered day please : ";
	cin >> Day;

	switch (Day) {
	case 1:
		cout << "Its Sunday";
		break;

	case 2:
		cout << "Its Monday";
		break;

	case 3:
		cout << "Its Tuesday";
		break;

	case 4:
		cout << "Its Wednesday";
		break;

	case 5:
		cout << "Its Thursday";
		break;

	case 6:
		cout << "Its Friday";
		break;

	case 7:
		cout << "Its Saturday";
		break;
	default:
		cout << "Wrong day's number";
	}
	return 0;

}