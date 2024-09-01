#include <iostream>
using namespace std;

int main() {

	float base, side;
	const float PI = 3.14;

	cout << "Please enter the side of your isocel triangle : ";
	cin >> side;

	cout << "Please enter the base of your isocel triangle : ";
	cin >> base;

	float area = (PI * base * base) / (4 * (2 * side - base) * (2 * side + base));

	cout << "Your circle's area is : " << area;

	return 0;

}