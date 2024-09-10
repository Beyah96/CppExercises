#include <iostream>
#include <string>

using namespace std;


int main() {
	float Number1, Number2;
	char operationType;

	cout << "Please enter your first number : ";
	cin >> Number1;
	
	cout << "Please enter your second number : ";
	cin >> Number2;

	cout << "Please enter your operation type : ";
	cin >> operationType;


	switch (operationType) {
	case '+':
		cout << "The result of your operation is : " << Number1 + Number2;
		break;
	case '-':
		cout << "The result of your operation is : " << Number1 - Number2;
		break;
	case '*':
		cout << "The result of your operation is : " << Number1 * Number2;
		break;
	case '/':
		cout << "The result of your operation is : " << Number1 / Number2;
		break;
	default :
		cout << "Invalid operation !!";
	}
	return 0;
	

}