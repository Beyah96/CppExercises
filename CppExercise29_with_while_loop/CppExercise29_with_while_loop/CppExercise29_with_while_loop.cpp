#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int N;
	cout << "Enter your number : ";
	cin >> N;
	return N;
}
int ReturnOddNumber(int N) {
	if (N % 2 == 0) {
		return N;
	}
	else {
		return 0;
	}
}
int SumNumbersBefore(int N) {
	int Sum = 0, i = 1;

	while (i <= N) {
		Sum += ReturnOddNumber(i);
		i++;
	}
	return Sum;

}
int main() {
	cout << "The sum of all numbers before your number with your number is : " << SumNumbersBefore(ReadNumber());
	return 0;
}