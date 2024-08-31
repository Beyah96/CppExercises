#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << "Please enter your first number: ";
	cin >> a;

	cout << "Please enter your Second number: ";
	cin >> b;

	cout << "Please enter your third number: ";
	cin >> c;

	int Total = a + b + c;

	cout << a << " +\n" << b << " +\n" << c << "\n-------------------------\n" << "Total = " << Total;

	return 0;

}