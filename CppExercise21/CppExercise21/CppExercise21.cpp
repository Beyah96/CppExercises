#include <iostream>
using namespace std;

int main() {
	
	float circumference;
	const float PI = 3.14;

	cout << "Enter your circle's circumference : ";
	cin >> circumference;

	float area = (circumference * circumference) / (4 * PI);

	cout << "The area of your circle is : " << area;

	return 0;
}