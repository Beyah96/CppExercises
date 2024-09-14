#include <iostream>
#include <string>

using namespace std;

void PrintLetters(int FirstLetter) {
	int i = 0;
	while (i <= 25) {
		cout << "(" << i << ") : " << char(i + FirstLetter) << endl;
		i++;
	}
}

int main() {
	int FirstCapitalLetter = 65, FirstSmallLetter = 97;
	cout << "************ CAPITAL LETTERS * *************" << endl;
	PrintLetters(FirstCapitalLetter);
	cout << "\n************ SMALL LETTERS * *************" << endl;
	PrintLetters(FirstSmallLetter);

}