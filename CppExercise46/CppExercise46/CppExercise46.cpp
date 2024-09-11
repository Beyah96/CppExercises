#include <iostream>
#include <string>

using namespace std;

void PrintLetters(int FirstLetter) {
	
	for (int i = 0; i <= 25; i++) {
		cout << "(" << i << ") : " << char(i + FirstLetter) << endl;
	}
}

int main() {
	int FirstCapitalLetter = 65, FirstSmallLetter = 97;
	cout << "************ CAPITAL LETTERS * *************" << endl;
	PrintLetters(FirstCapitalLetter);
	cout << "\n************ SMALL LETTERS * *************" << endl;
	PrintLetters(FirstSmallLetter);

}