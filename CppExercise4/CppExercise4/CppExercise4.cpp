#include <iostream>
using namespace std;

int main() {

	int A, B;

	cout << "Enter your first number A : ";
	cin >> A;

	cout << "Enter your first number B : ";
	cin >> B;

	cout << A << " = " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << " is " << (A <= B) << endl;

	return 0;

}