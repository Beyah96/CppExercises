#include <iostream>
#include <string>

using namespace std;

int ReadATMPIN(int	&ATMPIN, int &Tries) {
	cout << "Enter your ATM PIN : ";
	cin >> ATMPIN;
	Tries--;
	return ATMPIN;
}
bool isCorrectATMPIN(int ATMPIN) {
	if (ATMPIN == 1234) {
		cout << "Your balance is : 7500" << endl;
		return true;
	}
	else {
		cout << "wrong Attempt" << endl;
		return false;

	}
}
void TryATMPIN(int ATMPIN, int &Tries) {
	while (! isCorrectATMPIN(ATMPIN) && Tries != 0) {
		ATMPIN = ReadATMPIN(ATMPIN, Tries);
		if (Tries == 0 && !isCorrectATMPIN(ATMPIN) ){
			cout << "The card is blocked !";
		}
	}
}

int main() {
	int ATMPIN, Tries = 3;
	ReadATMPIN(ATMPIN, Tries);
	TryATMPIN(ATMPIN, Tries);
}