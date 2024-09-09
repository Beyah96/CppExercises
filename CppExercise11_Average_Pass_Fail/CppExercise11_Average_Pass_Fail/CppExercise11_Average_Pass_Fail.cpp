#include <iostream>
#include <string>

using namespace std;

void ReadMarks(float Marks[3]) {
	cout << "Please enter your first mark : ";
	cin >> Marks[0];

	cout << "Please enter your second mark : ";
	cin >> Marks[1];

	cout << "Please enter your third mark : ";
	cin >> Marks[2];

}
float CalculateAverage(float Marks[3]) {
	float Average = (Marks[0] + Marks[1] + Marks[2]) / 3;
	return Average;
}
void PrintDecision(float Marks[3]) {
	float Average = CalculateAverage(Marks);

	if (Average >= 50) {
		cout << "Pass";
	}
	else {
		cout << "Fail";
	}
}
int main() {
	float Marks[3];
	ReadMarks(Marks);
	PrintDecision(Marks);
	return 0;
}