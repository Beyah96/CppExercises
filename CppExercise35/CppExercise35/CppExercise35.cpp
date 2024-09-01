#include <iostream>
using namespace std;

int main() {

	int Penny, Nickel, Dime, Quater, Dollar;

	cout << "Enter your Pennies : ";
	cin >> Penny;

	cout << "Enter your Nickels : ";
	cin >> Nickel;

	cout << "Enter your Dimes : ";
	cin >> Dime;

	cout << "Enter your Quaters : ";
	cin >> Quater;

	cout << "Enter your Dollars : ";
	cin >> Dollar;

	int MoneyInPenny = Penny + 5 * Nickel + 10* Dime + 25 * Quater + 100 * Dollar;
	float MoneyInDollar = MoneyInPenny / 100.f;

	cout << "Your money in pennies is : " << MoneyInPenny << " pennies\n" << "Your money in dollars is : " << MoneyInDollar << " Dollars";

	return 0;

}