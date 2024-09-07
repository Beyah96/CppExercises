#include <iostream>
#include <string>

using namespace std;

int globalVariable = 10;

int modifyGlobalVar() {
	::globalVariable*= 2 ;
	return ::globalVariable;
}

void localScoop() {
	int globalVar = 33;
	cout << "This is the local variable of localScoop function : " << globalVar << endl;
}

int main() {

	int localVar = 5;

	cout << "This is the global variable : " << ::globalVariable << endl;

	cout << "This is the local variable : " << localVar << endl;

	cout << "This is  the global variable doubled : " << modifyGlobalVar() << endl;

	localScoop();

	return 0;
}