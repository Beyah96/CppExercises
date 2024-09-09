#include <iostream>
#include <string>

using namespace std;

struct stPersonInfo {
	string FirstName;
	string LastName;
	short Age;
	string Phone;
};

void ReadPersonInfo(stPersonInfo &Person) {
	cout << "Please enter your first name : ";
	cin >> Person.FirstName;
	cout << "Please enter your last name : ";
	cin >> Person.LastName;
	cout << "Please enter your age : ";
	cin >> Person.Age;
	cout << "Please enter your phone number : ";
	cin >> Person.Phone;
}

void PrintPersonInfo(stPersonInfo Person) {
	cout << "Your first name is : " << Person.FirstName <<endl;
	cout << "Your last name is : " << Person.LastName << endl;
	cout << "Your age is : " << Person.Age << endl;
	cout << "Your phone number is : " << Person.Phone << endl;

}

void ReadAllPersonsInfo(stPersonInfo Persons [2]) {
	cout << "\n\n************* Read First Person info ****************\n";
	ReadPersonInfo(Persons[0]);
	cout << "\n\n************* Read Second Person info ****************\n";
	ReadPersonInfo(Persons[1]);
}

void PrintAllPersonsInfo(stPersonInfo Persons[2]) {
	cout << "\n\n************* Print First Person Info ****************\n";
	PrintPersonInfo(Persons[0]);
	cout << "\n\n************* Print Second Person Info ****************\n";
	PrintPersonInfo(Persons[1]);

}

int main() {

	stPersonInfo Person, Persons[2];

	ReadAllPersonsInfo(Persons);
	PrintAllPersonsInfo(Persons);
	
	return 0;


}