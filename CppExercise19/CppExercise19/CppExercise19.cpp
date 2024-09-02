#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float diameter;
	const float PI = 3.14;

	cout << "Enter the diameter of your circle : ";
	cin >> diameter;
	
	float area = (PI * pow(diameter, 2) / 4;

	cout << "The area of your circle is : " << ceil(area);
	
	return 0;
}