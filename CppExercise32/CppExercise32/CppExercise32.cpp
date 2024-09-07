#include <iostream>
#include <cmath>

using namespace std;

void GetYourNumberPowered(int Number, int M) {
	cout << "The result is  : " << round(pow(Number, M));
}

int main() {

	int Number, M;

	cout << "Enter your number : ";
	cin >> Number;

	cout << "Enter the power M : ";
	cin >> M;

	GetYourNumberPowered(Number, M);

	return 0;
	
}