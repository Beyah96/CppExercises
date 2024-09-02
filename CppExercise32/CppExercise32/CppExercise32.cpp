#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int Number, M;

	cout << "Enter your number : ";
	cin >> Number;

	cout << "Enter the power M : ";
	cin >> M;

	cout << "The result is  : " << round(pow(Number, M));
}