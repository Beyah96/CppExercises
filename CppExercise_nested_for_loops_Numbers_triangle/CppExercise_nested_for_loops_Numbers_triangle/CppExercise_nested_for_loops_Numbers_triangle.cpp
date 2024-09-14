#include <iostream>
#include <string>

using namespace std;

int main() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10-i+1; j++) {
			cout << j;
		}
		cout << "\n";
	}
	return 0;
}