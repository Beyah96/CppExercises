#include <iostream>
#include <cmath>

using namespace std;

float CalculateCircleArea(float side1, float side2, float side3) {

	const float PI = 3.14;

	int p = (side1 + side2 + side3) / 2;
	float area = PI * pow((side1 * side2 * side3) / (4 * sqrt(p * (p - side1) * (p - side2) * (p - side3))), 2);
	return area;
}
int main() {

	float side1, side2, side3;
	
	cout << "Enter the first side of your triangle : ";
	cin >> side1;

	cout << "Enter the second side of your triangle : ";
	cin >> side2;

	cout << "Enter the third side of your triangle : ";
	cin >> side3;

	cout << "The area of your cirle is : " << round(CalculateCircleArea(side1, side2, side3));
	return 0;
}