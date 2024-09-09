#include <iostream>
#include <string>

using namespace std;

int main() {
	float Mark;

	cout << "Please enter your mark : ";
	cin >> Mark;

	if (Mark >= 50) {

		cout << "Pass" << endl;
	}
	else {
		cout << "Fail" << endl;
	}
	return 0;
}