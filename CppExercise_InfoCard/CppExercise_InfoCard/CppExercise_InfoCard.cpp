#include <iostream>
#include <string>

using namespace std;

struct stPerson {

	string Name;
	short Age;
	string City;
	string Country;
	int MounthlySalary;
	char Gender;
	bool isMarried;

};

void ReadPersonInfo(stPerson &Person) {

	cout << "Please enter your name : ";
	cin >> Person.Name;
	
	cout << "Please enter your age : ";
	cin >> Person.Age;
	
	cout << "Please enter your city : ";
	cin >> Person.City;
	
	cout << "Please enter your coutry : ";
	cin >> Person.Country;
	
	cout << "Please enter your monthly salary: ";
	cin >> Person.MounthlySalary;
	
	cout << "Please enter your gender M/F : ";
	cin >> Person.Gender;
	
	cout << "Please enter your marital status 0/1: ";
	cin >> Person.isMarried;

}
void PrintPersonInfo(stPerson Person) {

	cout << "***********************************************" << endl;
	cout << "Your name is : " << Person.Name << endl;

	cout << "Your age is : " << Person.Age << endl;

	cout << "Your city is : " << Person.City << endl;

	cout << "Your country is : " << Person.Country << endl;

	cout << "Your Mounthly salary is : " << Person.MounthlySalary << endl;

	cout << "Your Gender is : " << Person.Gender << endl;

	cout << "Your Marital status is : " << Person.isMarried << endl;
	
	cout << "***********************************************" << endl;
}

int main() {

	stPerson Person1, Person2, Person3;
	ReadPersonInfo(Person1);
	PrintPersonInfo(Person1);

	ReadPersonInfo(Person2);
	PrintPersonInfo(Person2);

	ReadPersonInfo(Person3);
	PrintPersonInfo(Person3);



	return 0;
}