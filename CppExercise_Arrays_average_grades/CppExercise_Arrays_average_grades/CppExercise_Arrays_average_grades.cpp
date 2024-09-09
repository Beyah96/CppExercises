#include <iostream>
#include <string>

using namespace std;

int main() {

	float Grades[3];

	cout << "Pleas enter your first grade : ";
	cin >> Grades[0];

	cout << "Pleas enter your second grade : ";
	cin >> Grades[1];

	cout << "Pleas enter your third grade : ";
	cin >> Grades[2];

	cout << "********************************" << endl;

	float AverageGrades = (Grades[0] + Grades[1] + Grades[2]) / 3;

	cout << "The avarage of grades is : " << AverageGrades;

}