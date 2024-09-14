#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int Arr[100], int& Length) {
	Length = 0;
	int Number;
	cout << "Enter an integer number please : ";
	cin >> Number;
	
	while (Number != -99) {
		Arr[Length] = Number;
		cout << "Enter another integer number please : ";	
		cin >> Number;
		Length++;
	}
}
void PrintAllNumbers(int Arr[100], int Length) {
	for (int i = 0; i <= Length; i++) {
		cout << "Arr[" << i << "] = " << Arr[i] << endl;
	}
	cout << "Length : " << Length << endl;
}
int SumAllNumbers(int Arr[100], int Length) {
	int  i = 0, Sum = 0;
	while (i < Length) {
		Sum += Arr[i];
		i++;
	}
	return Sum;
}

int main() {
	int Length;
	int Arr[100];

	ReadNumbers(Arr, Length);
	PrintAllNumbers(Arr, Length);

	cout << "The sum of your numbers is : " << SumAllNumbers(Arr, Length);
}