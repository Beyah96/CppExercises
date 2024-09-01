#include <iostream>
using namespace std;

int main() {

	float diameter;
	const float PI = 3.14;

	cout << "Enter the diameter of your circle : ";
	cin >> diameter;
	
	float area = (PI * diameter * diameter) / 4;

	cout << "The area of your circle is : " << area;
	
	return 0;
}