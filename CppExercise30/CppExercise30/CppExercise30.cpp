#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int N;
	cout << "Enter please your number : ";
	cin >> N;
	return N;
}
int Factorial(int N) {
	int Product = 1;
	if (N != 0) {
		for (int i = 1; i <= N; i++) {
			Product *= i;
		}
	}
	return Product;
}

int main() {
	cout << "the factorial of your number is : " << Factorial(ReadNumber());
	return 0;
}