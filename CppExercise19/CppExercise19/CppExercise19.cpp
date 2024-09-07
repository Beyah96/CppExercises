#include <iostream>
#include <cmath>

using namespace std;

float ClaculateCircleAreaFromDiameter(float diameter) {

	const float PI = 3.14;
	float area = (PI * pow(diameter, 2) )/ 4;

	return area;

}

int main() {

	float diameter;

	cout << "Enter the diameter of your circle : ";
	cin >> diameter;

	cout << "The area of your circle is : " << ceil(ClaculateCircleAreaFromDiameter(diameter));

	return 0;
}