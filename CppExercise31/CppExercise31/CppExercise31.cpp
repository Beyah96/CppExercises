#include <iostream>
#include <cmath>

using namespace std;

void GetPowers1_2_3(int Number) {
	cout << "Power of 2, 3 and 4 of your number are: \n" << round(pow(Number, 2)) << endl << round(pow(Number, 3)) << endl << round(pow(Number, 4));

}

int main() {

	int Number;

	cout << "Enter a Number: ";
	cin >> Number;

	GetPowers1_2_3(Number);
	
	return 0;
}