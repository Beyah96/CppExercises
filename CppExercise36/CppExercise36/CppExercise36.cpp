#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float Number1, Number2;
	cout << "Enter your first number: ";
	cin >> Number1;
	cout << "Enter your second number: ";
	cin >> Number2;
	float result;
	
	char operationType;
	cout << "Enter your operation type: ";
	cin >> operationType;

	if (operationType == '+') {
		result = Number1 + Number2;
	}
	else if (operationType == '-') {
		result = Number1 - Number2;
	}

	else if (operationType == '*') {
		result = Number1 * Number2;
	}

	else {
		result = Number1 / Number2;
	}

	cout << "The result of your operation is : " << result;
	return 0;
}