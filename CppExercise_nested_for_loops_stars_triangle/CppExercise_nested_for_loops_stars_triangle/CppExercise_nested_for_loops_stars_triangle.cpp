#include <iostream>
#include <string>

using namespace std;

int main() {

	for (int i = 0; i <= 9; i++) {
		for (int j = 1; j <= 10-i; j++) {
			cout << "*";
		}
		cout << "\n";
}
}