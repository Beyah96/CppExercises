#include <iostream>
using namespace std;

int main() {

	float BillValue;

	cout << "Enter the bill value : ";
	cin >> BillValue;

	float ServicesFee = 1.1, SalesTaxes = 1.16, TotalBill = SalesTaxes * (BillValue * ServicesFee);

	cout << "The total bill is : " << TotalBill;
}