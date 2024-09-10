#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int N;
	cout << "Enter your number : ";
	cin >> N;
	return N;
}
void PrintNumbersBefore(int N) {
	for (int i = N; i >= 1; i--) {
		cout << i << endl;

	}
}
int main() {
	PrintNumbersBefore(ReadNumber());
	return 0;
}