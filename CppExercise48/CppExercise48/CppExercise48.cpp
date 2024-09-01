#include <iostream>
using namespace std; 

int main() {

	int LoanAmount, NumberOfMonths;

	cout << "Please enter your Loan Amount : ";
	cin >> LoanAmount;

	cout << "Enter the number of months you need to settle the loan : ";
	cin >> NumberOfMonths;

	int MonthlyInstallmentLoan = LoanAmount / NumberOfMonths;

	cout << "Your monthly installment amount is : " << MonthlyInstallmentLoan;

	return 0;
}