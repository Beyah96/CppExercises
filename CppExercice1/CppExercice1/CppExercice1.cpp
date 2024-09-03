#include <iostream>
using namespace std;

struct stAddress
{
	string street;
	string ZipCode;

};

struct ContactInformation
{
	string Phone;
	string Email;
	stAddress address;
};

struct PersonInformations {
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	char Gender;
	bool isMarried;
	ContactInformation Contact;

};

int main() {
	PersonInformations Person;
	


	cout << "Please enter your Name: ";
	cin >> Person.Name;

	cout << "Please enter your Age: ";
	cin >> Person.Age;

	cout << "Please enter your City: ";
	cin >> Person.City;

	cout << "Please enter your Country: ";
	cin >> Person.Country;

	cout << "Please enter your Monthly Salary: ";
	cin >> Person.MonthlySalary;

	cout << "Please enter your Gender M/F: ";
	cin >> Person.Gender;

	cout << "Please enter if your are Married 1/0: ";
	cin >> Person.isMarried;

	cout << "Please enter your phone number: ";
	cin >> Person.Contact.Phone;

	cout << "Please enter your email: ";
	cin >> Person.Contact.Email;

	cout << "Please enter your address (street number): ";
	cin >> Person.Contact.address.street;

	cout << "Please enter your Zip Code address: ";
	cin >> Person.Contact.address.ZipCode;



	cout << "*************************************\n";
	cout << "Name: " << Person.Name << endl;
	cout << "Age: " << Person.Age << "Years" << endl;
	cout << "City: " << Person.City << endl;
	cout << "Country: " << Person.Country << endl;
	cout << "Monthly Salary: " << Person.MonthlySalary << endl;
	cout << "Yearly Salary: " << Person.MonthlySalary * 12 << endl;
	cout << "Gender: " << Person.Gender << endl;
	cout << "Married: " << Person.isMarried << endl;
	cout << "Phone: " << Person.Contact.Phone << endl;
	cout << "Email: " << Person.Contact.Email << endl;
	cout << "Street: " << Person.Contact.address.street << endl;
	cout << "Zip Code: " << Person.Contact.address.ZipCode << endl;
	cout << "*************************************";

	return 0;

}