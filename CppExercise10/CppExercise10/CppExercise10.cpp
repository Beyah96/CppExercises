#include <iostream>
using namespace std;


int main() {

	int Number1, Number2, Number3;

	cout << "Enter the first number : ";
	cin >> Number1;

	cout << "Enter the second number : ";
	cin >> Number2;

	cout << "Enter the third number : ";
	cin >> Number3;

	int avg = (Number1 + Number2 + Number3) / 3;
	cout << "The average of entred numbers is : " << avg;

	return 0;

}