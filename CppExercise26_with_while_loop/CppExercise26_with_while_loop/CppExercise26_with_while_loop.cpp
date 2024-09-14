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
	int i = 1;
	while (i<=N) {
		cout << i << endl;
		i++;

	}
}
int main() {
	PrintNumbersBefore(ReadNumber());
	return 0;
}