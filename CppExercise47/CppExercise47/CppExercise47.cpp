#include <iostream>
using namespace std;

int main() {

	int LoanAmount, MonthlyPayment;

	cout << "Enter your Loan Amount : ";
	cin >> LoanAmount;

	cout << "Enter your Monthly Payment : ";
	cin >> MonthlyPayment;

	int NumberOfMonths = LoanAmount / MonthlyPayment;

	cout << "You need " << NumberOfMonths << " months to sttle the loan";

	return 0;
}