#include <iostream>
using namespace std;

int main() {
	int A, B;
	cout << "Please enter the first number : ";
	cin >> A;
	
	cout << "Please enter the secont number : ";
	cin >> B;

	cout << A << " + " << B << " = " << A + B << endl;
	cout << A << " - " << B << " = " << A - B << endl;
	cout << A << " * " << B << " = " << A * B << endl;
	cout << A << " / " << B << " = " << A / B << endl;
	cout << A << " % " << B << " = " << A % B << endl;
	
	return 0;
}