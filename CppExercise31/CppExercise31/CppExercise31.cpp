#include <iostream>
using namespace std;

int main() {

	int Number;

	cout << "Enter a Number: ";
	cin >> Number;

	int a = Number * Number, b = a * Number, c = b * Number;

	cout << "Power of 2, 3 and 4 of your number are: \n" << a << endl << b << endl << c;

	return 0;
}