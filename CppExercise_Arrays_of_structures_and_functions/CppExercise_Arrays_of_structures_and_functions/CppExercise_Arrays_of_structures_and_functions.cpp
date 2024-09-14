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

void ReadAllPersonsInfo(stPersonInfo Persons [100], int &NumberPersons) {
	cout << "Enter the number of people do you want to insert : ";
	cin >> NumberPersons;
	for (int i = 0; i <= NumberPersons - 1; i++){
		cout << "\n\n************* Read Person number " << i <<" info * ***************\n";
		ReadPersonInfo(Persons[i]);
	}
	
}

void PrintAllPersonsInfo(stPersonInfo Persons[100], int NumberPersons) {
	for (int i = 0; i <= NumberPersons - 1; i++) {
		cout << "\n\n************* Print Person number " << i << " info ****************\n";
		PrintPersonInfo(Persons[i]);
	}
	

}

int main() {
	int NumberPersons;
	
	stPersonInfo Persons[100];

	ReadAllPersonsInfo(Persons, NumberPersons);
	cout << "\n\n************* ********************* ****************\n";
	cout << "\n\n              Print the list of info Cards              \n";
	cout << "\n\n************* ********************* ****************\n";
	PrintAllPersonsInfo(Persons, NumberPersons);
	
	return 0;


}