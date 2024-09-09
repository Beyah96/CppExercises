#include <iostream>
#include <string>

using namespace std;

float CalculateCommision(float Percent, int TotalSalesAmount) {
	return Percent * TotalSalesAmount;
}

int main() {
	int TotalSalesAmount;
	float Percent;

	cout << "Enter your total sales amount : ";
	cin >> TotalSalesAmount;

	if (TotalSalesAmount > 1e6) {
		Percent = 0.01;
	}
	else if (TotalSalesAmount > 5e5) {
		Percent = 0.02;
	}
	else if (TotalSalesAmount > 1e5) {
		Percent = 0.03;
	}
	else if (TotalSalesAmount > 5e4) {
		Percent = 0.05;
	}
	else {
		Percent = 0.00;
	}

	cout << "Your commision is : " << CalculateCommision(Percent, TotalSalesAmount);
	return 0;
}