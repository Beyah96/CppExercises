#include <iostream>
#include <string>

using namespace std;

int main() {
	int Arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
	for (int i = 0; i <= 9; i++) {
		cout << "We are in iteration " << i + 1 << endl;
		if (Arr[i] == 20) {
			cout << "found at position : " << i+1;
			break;
			
		}
	}
}