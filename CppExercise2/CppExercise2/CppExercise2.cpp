#include <iostream>
using namespace std;

int SumThreeNumbers(int a, int b, int c) {

	return a + b + c;
}
int main() {
	int a, b, c;

	cout << "Please enter your first number: ";
	cin >> a;

	cout << "Please enter your Second number: ";
	cin >> b;

	cout << "Please enter your third number: ";
	cin >> c;

	cout << a << " +\n" << b << " +\n" << c << "\n-------------------------\n" << "Total = " << SumThreeNumbers(a, b, c);

	return 0;

}