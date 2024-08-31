#include <iostream>
using namespace std;

int main() {

	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	char Gender;
	bool isMarried;


	cout << "Please enter your Name: ";
	cin >> Name;

	cout << "Please enter your Age: ";
	cin >> Age;

	cout << "Please enter your City: ";
	cin >> City;

	cout << "Please enter your Country: ";
	cin >> Country;

	cout << "Please enter your Monthly Salary: ";
	cin >> MonthlySalary;

	cout << "Please enter your Gender M/F: ";
	cin >> Gender;

	cout << "Please enter if your are Married 1/0: ";
	cin >> isMarried;

	cout << "*************************************\n";
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << "Years" << endl;
	cout << "City: " << City << endl;
	cout << "Country: " << Country << endl;
	cout << "Monthly Salary: " << MonthlySalary << endl;
	cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
	cout << "Gender: " << Gender << endl;
	cout << "Married: " << isMarried << endl;
	cout << "*************************************";

	return 0;

}