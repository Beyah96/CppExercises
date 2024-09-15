#include <iostream>
#include <string>

using namespace std;



int main() {
	int Sum = 0;
	int Number;

	for (int i = 0; i <= 4; i++) {
		cout << "Enter a number : ";
		cin >> Number;

		if (Number > 50) {
			cout << "The number is greater than 50 and won't be summed to the others " << endl;
			continue;
		}
		Sum += Number;
	}
	cout << "The total sum is : " << Sum;

}