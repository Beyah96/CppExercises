#include <iostream>
#include <string>

using namespace std;

int main() {
	for (int i = 1; i <=6 ; i++) {
		for (int j = 1; j <= i; j++) {
			cout << char(j+64);
		}
		cout << "\n";
	}
	return 0;
}