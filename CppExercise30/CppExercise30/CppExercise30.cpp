#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int N;
	cout << "Enter please your number : ";
	cin >> N;
	while (N < 0) {
		cout << "Your number is negative, please enter a positive number : ";
		cin >> N;
	}
	return N;
}
int Factorial(int N) {
	int Product = 1, i = 1;
	if (N != 0) {
		while (i <= N) {
			Product *= i;
			i++;
		}
	}
	return Product;
}

int main() {
	cout << "the factorial of your number is : " << Factorial(ReadNumber());
	return 0;
}