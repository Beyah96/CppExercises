#include <iostream>
#include <string>

using namespace std;

int main() {

	string FullName, FirstNumber, SecondNumber;

	cout << "Please enter your fullName : ";
	getline(cin, FullName);


	cout << "Please enter your first string number : ";
	cin >> FirstNumber;

	cout << "Please enter your second string number : ";
	cin >> SecondNumber;

	cout << "*******************************************\n";

	cout << "The length of your Name is : " << FullName.length() << " characters" << endl;
	cout << "Characters at 0,2,4,7 are : " << FullName[0] << " " << FullName[2] << " " << FullName[4] << " " << FullName[7] << endl;

	cout << "Concatenating your first and second string's Numbers : " << FirstNumber + SecondNumber << endl;
	cout << "The integer product of your numbers in string is : " << FirstNumber << "*" << SecondNumber << " = " << stoi(FirstNumber) * stoi(SecondNumber) << endl;



	return 0;
}