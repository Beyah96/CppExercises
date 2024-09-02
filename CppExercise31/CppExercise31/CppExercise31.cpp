#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int Number;

	cout << "Enter a Number: ";
	cin >> Number;


	cout << "Power of 2, 3 and 4 of your number are: \n" << pow(Number , 2) << endl << pow(Number, 3) << endl << pow(Number, 4);

	return 0;
}