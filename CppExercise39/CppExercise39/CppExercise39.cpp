#include <iostream>
using namespace std;

int main() {

	float TotalBill, CashPaid;

	cout << "Enter the total bill : ";
	cin >> TotalBill;

	cout << "Enter the cash paid : ";
	cin >> CashPaid;

	float Remainder = CashPaid - TotalBill;

	cout << "The remaider to be paid back is : " << Remainder;

	return 0;

}