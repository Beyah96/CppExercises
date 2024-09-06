#include <iostream>
using namespace std;


enum enGender { Male, Female };
enum enMaritalStatus { Maried, Single };
enum enColor { Red, Green, Yellow, Blue};

struct stAddress
{
	string street;
	string ZipCode;
	string BuildingNo;
	string POBOX;

};

struct stContact
{
	string Phone;
	string Email;
	stAddress address;
};

struct stPerson {
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	enGender MyGender;
	enMaritalStatus AmIMarried;
	stContact Contact;
	enColor Color;

};

int main() {
	stPerson Person;
	Person.Name = "Mohamed";
	Person.Age = 27;
	Person.City = "Paris";
	Person.Country = "France";
	Person.MonthlySalary = 6000;
	Person.MyGender = enGender::Male;
	Person.AmIMarried = enMaritalStatus::Maried;
	Person.Color = enColor::Blue;
	Person.Contact.Phone = "066543528";
	Person.Contact.Email = "bahsaid96@gmail.com";
	Person.Contact.address.street = "15 avenu pauliani";
	Person.Contact.address.ZipCode = "06000";

	cout << "*************************************\n";
	cout << "Name: " << Person.Name << endl;
	cout << "Age: " << Person.Age << "Years" << endl;
	cout << "City: " << Person.City << endl;
	cout << "Country: " << Person.Country << endl;
	cout << "Monthly Salary: " << Person.MonthlySalary << endl;
	cout << "Yearly Salary: " << Person.MonthlySalary * 12 << endl;
	cout << "Gender: " << Person.MyGender << endl;
	cout << "Married: " << Person.AmIMarried << endl;
	cout << "Phone: " << Person.Contact.Phone << endl;
	cout << "Email: " << Person.Contact.Email << endl;
	cout << "Street" << Person.Contact.address.street << endl;
	cout << "Zip Code" << Person.Contact.address.ZipCode << endl;
	cout << "*************************************";

	return 0;

}