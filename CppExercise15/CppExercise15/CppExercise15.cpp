#include <iostream>
using namespace std;

float CalculateArea(int length, int width) {


	return length * width;
}

int main() {

	int length, width;

	cout << "Enter the length of the rectangle : ";
	cin >> length;

	cout << "Enter the width : ";
	cin >> width;

	cout << "The area of your rectangle is : " << CalculateArea(length, width);

	return 0;
}