#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float side, diagonal;

	cout << "Please enter the side of your rectangle : ";
	cin >> side; 

	cout << "Please enter the diagonal : ";
	cin >> diagonal;

	float area = side * sqrt(pow(diagonal, 2) - pow(side, 2));

	cout << "The area of your rectangle is : " << area;

	return 0;
}