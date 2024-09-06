#include <iostream>
using namespace std;


void exchangeNumbers(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "After swap the order will be : \n" << "* " << num1 << "\n* " << num2;
}

int main() {

	int Number1, Number2;

	cout << "Enter the first number : ";
	cin >> Number1;

	cout << "Enter the second number : ";
	cin >> Number2;

	cout << "The entred numbers in the order are : \n" << "* " << Number1 << "\n* " << Number2 << endl;

	exchangeNumbers(Number1, Number2);

	

	return 0;

}