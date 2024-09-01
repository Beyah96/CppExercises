#include <iostream>
using namespace std;


int main() {

	int Number1, Number2;

	cout << "Enter the first number : ";
	cin >> Number1;

	cout << "Enter the second number : ";
	cin >> Number2;

	int temp = Number1;
	Number1 = Number2;
	Number2 = temp;

	cout << "The entred numbers in the order are : \n" << "* " << Number1 << "\n* " << Number2 << endl;
	cout << "After swap the order will be : \n" << "* " << Number1 << "\n* " << Number2;

	return 0;

}