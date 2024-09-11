#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please enter your chosen number : ";
	cin >> Number;
	return Number;
}

int ReadPower() {
	int Power;
	cout << "Please enter your chosen Power : ";
	cin >> Power;
	return Power;
}
int GetPower(int N, int P) {
	int Powered = 1;
	if (P != 0) {
		for (int i = 1; i <= P; i++) {
			Powered *= N;
		}
	}
	return Powered;
}

int main() {
	int Number, Power;
	Number = ReadNumber();
	Power = ReadPower();
	cout << "THe " << Number << "^" << Power << " = " << GetPower(Number, Power);

	return 0;
}