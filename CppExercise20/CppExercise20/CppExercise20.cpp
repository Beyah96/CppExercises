#include <iostream>
#include <cmath>

using namespace std;

float CalculateCircleArea( float side) {

	float const PI = 3.14;
	float area = (pow(side, 2) * PI) / 4;


	return area;
}

int main() {

	float side;

	cout << "Enter the square's side : ";
	cin >> side;

	cout << "Your circle's area is : " << ceil(CalculateCircleArea(side));

	return 0;
}