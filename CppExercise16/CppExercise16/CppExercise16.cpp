#include <iostream>
#include <cmath>

using namespace std;

float CalculateArea( float side, float diagonal) {

	return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}
int main() {

	float side, diagonal;

	cout << "Please enter the side of your rectangle : ";
	cin >> side; 

	cout << "Please enter the diagonal : ";
	cin >> diagonal;


	cout << "The area of your rectangle is : " << CalculateArea(side, diagonal);

	return 0;
}