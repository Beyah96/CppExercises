#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float circumference;
	const float PI = 3.14;

	cout << "Enter your circle's circumference : ";
	cin >> circumference;

	float area = pow(circumference, 2) / (4 * PI);

	cout << "The area of your circle is : " << floor(area);

	return 0;
}