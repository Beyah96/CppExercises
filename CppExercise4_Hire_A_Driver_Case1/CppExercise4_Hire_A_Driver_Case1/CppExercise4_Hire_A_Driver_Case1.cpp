#include <iostream>
#include <string>

using namespace std;

int main() {

	short Age;
	bool HasDriverLicense;

	cout << "Please enter your age : ";
	cin >> Age;

	cout << "Please enter if your have a driver license or not (1/0) :";
	cin >> HasDriverLicense;

	if (Age >= 18 && HasDriverLicense) {
		cout << "Congrates, your are Hired !" << endl;
	}
	else {
		cout << "You are rejected ! " << endl;
	}
	return 0;
}