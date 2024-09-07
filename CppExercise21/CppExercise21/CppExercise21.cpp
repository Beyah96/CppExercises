#include <iostream>
#include <cmath>

using namespace std;

float CalculateCircleAreaFromCircumference(float circumference) {

	const float PI = 3.14;

	float area = pow(circumference, 2) / (4 * PI);
	return area;

}

int main() {
	
	float circumference;

	cout << "Enter your circle's circumference : ";
	cin >> circumference;

	cout << "The area of your circle is : " << floor(CalculateCircleAreaFromCircumference(circumference));

	return 0;
}