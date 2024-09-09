#include <iostream>
#include <string>

using namespace std;


int main() {

	short Age;

	cout << "Please enter your age : ";
	cin >> Age;

	if (Age >= 18 && Age <= 45) {
		cout << "Valid Age!!";
	}
	else {
		cout << "Invalid Age!!";
	}
	return 0;
}