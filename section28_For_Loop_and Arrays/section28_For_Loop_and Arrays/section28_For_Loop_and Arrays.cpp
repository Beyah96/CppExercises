#include <iostream>
#include <string>
using namespace std;

void ReadArrayData(int Arr1[100], int& Length) {
	cout << "How much numbers you will enter : ";
	cin >> Length;
	for (int i = 1; i <= Length; i++) {
		cout << "Enter your number " << i << " : ";
		cin >> Arr1[i-1];
	}
}
void PrintArrayData(int Arr1[100], int Length) {
	cout << "*********   PRINT DATA    ***********" << endl;
	for (int i = 1; i <= Length; i++) {
		cout << "Your number [" << i << "] : " << Arr1[i - 1] << endl;
	}
}
int CalculateArraySum(int Arr1[100], int Length) {
	int Sum = 0;
	for (int i = 1; i <= Length; i++) {
		Sum += Arr1[i-1];
		//cout <<"sum: " << Sum << endl;
	}
	return Sum;
}
float CalculateArrayAveage(int Arr1[100], int Length) {
	float Average = (float)(CalculateArraySum(Arr1, Length) / Length);
	return Average;
}
int main() {

	int Arr1[100], Length = 0;
	ReadArrayData(Arr1, Length);
	PrintArrayData(Arr1, Length);

	cout << "*************************************" << endl;
	cout << "Sum = " << CalculateArraySum(Arr1, Length) << endl;
	cout << "Aveage = " << CalculateArrayAveage(Arr1, Length) << endl;

	return 0;

}