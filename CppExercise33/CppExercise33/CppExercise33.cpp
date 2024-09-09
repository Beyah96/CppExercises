#include <iostream>
#include <string>

using namespace std;

int main() {

	int Grade;
	cout << "Enter your grade please : ";
	cin >> Grade;

	if (Grade > 90) {
		cout << "A";
	}
	else if (Grade > 80) {
		cout << "B";
	}
	else if (Grade > 70) {
		cout << "C";
	}
	else if (Grade > 60) {
		cout << "D";
	}else if (Grade > 50){
		cout << "E";
	}
	else {
		cout << "F";
	}
	return 0;
}