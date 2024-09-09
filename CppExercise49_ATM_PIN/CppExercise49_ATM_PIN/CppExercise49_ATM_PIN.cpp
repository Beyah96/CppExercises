#include <iostream>
#include <string>

using namespace std;

int main() {

	short ATM_PIN;

	cout << "Please enter your PIN : ";
	cin >> ATM_PIN;

	if (ATM_PIN == 1234) {
		cout << "Your balance is : " << 7500;
	}
	else {
		cout << "Wrong PIN";
	}
	return 0;
}