#include <iostream>
#include <cmath>

using namespace std;

float GetCircleArea(float base, float side) {

	const float PI = 3.14;

	float area = (PI * pow(base, 2)) / (4 * (2 * side - base) * (2 * side + base));
	return area;
}

int main() {

	float base, side;

	cout << "Please enter the side of your isocel triangle : ";
	cin >> side;

	cout << "Please enter the base of your isocel triangle : ";
	cin >> base;


	cout << "Your circle's area is : " << floor(GetCircleArea(base, side));

	return 0;

}