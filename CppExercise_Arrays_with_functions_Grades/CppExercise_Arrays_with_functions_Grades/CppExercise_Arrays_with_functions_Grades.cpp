#include <iostream>
#include <string>

using namespace std;

void ReadGrades(float Grades[3]) {

	cout << "Please enter your first Grade: ";
	cin >> Grades[0];
	cout << "Please enter your second Grade: ";
	cin >> Grades[1];
	cout << "Please enter your third Grade: ";
	cin >> Grades[2];
}

float CalculateGradesAverage(float Grades[3]) {

	return (Grades[0] + Grades[1] + Grades[2])/3;
}

void PrintGradesAverage(float Grades[3]) {
	
	float Average = CalculateGradesAverage(Grades);
	cout << "***********************************" << endl;
	cout << "The average of grades is : " << Average;

}

int main() {


	float Grades[3];

	ReadGrades(Grades);
	CalculateGradesAverage(Grades);
	PrintGradesAverage(Grades);

	return 0;
}