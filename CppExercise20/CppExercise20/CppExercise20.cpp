#include <iostream>
using namespace std;

int main() {

	float side;
	const float PI = 3.14;

	cout << "Enter the square's side : ";
	cin >> side;

	float area = (side * side * PI) / 4;

	cout << "Your circle's area is : " << area;

	return 0;
}