#include <iostream>
#include <cmath>

using namespace std;

float CalculeCircleArea( float radius) {
	const float PI = 3.14;
	return PI * pow(radius, 2);
}

int main() {

	float radius;
	

	cout << "Please enter the radius of your circle : ";
	cin >> radius;


	cout << "The area of your circle is : " << ceil(CalculeCircleArea(radius));

	return 0;
}