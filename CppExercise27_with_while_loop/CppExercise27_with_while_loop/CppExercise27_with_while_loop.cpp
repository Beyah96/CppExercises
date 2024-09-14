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
	while (N >= 1) {
		cout << N << endl;
		N--;
	}
}
int main() {
	PrintNumbersBefore(ReadNumber());
	return 0;
}