#include <iostream>
#include <string>

using namespace std;


void myProcedureSum() {
	float number1, number2;

	cout << "Please enter your first Number : ";
	cin >> number1;

	cout << "Please enter your second Number : ";
	cin >> number2;

	cout << "*********************************\n";
	cout << "The result is : " << number1 + number2;

	cout << endl << endl;
	

}

float myFunctionSum() {
	float number1, number2;

	cout << "Please enter your first Number : ";
	cin >> number1;

	cout << "Please enter your second Number : ";
	cin >> number2;

	cout << "*********************************\n";
	cout << "The result is : ";
	return number1 + number2;
	

}


 
int main() {

	myProcedureSum();

	float result = myFunctionSum();
	cout << result;
	return 0;
}