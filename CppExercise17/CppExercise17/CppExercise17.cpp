#include <iostream>
using namespace std;

int main() {

	float base, height;

	cout << "Enter your triangle height : ";
	cin >> height;

	cout << "Enter your triangle base : ";
	cin >> base;

	int area = (height * base) / 2;
	cout << "Your triangle area is : " << area;
	
	return 0;
}