#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float radius;
	const float PI = 3.14;

	cout << "Please enter the radius of your circle : ";
	cin >> radius;

	float area = PI * pow(radius, 2);

	cout << "The area of your circle is : " << area;

	return 0;
}