#include <iostream>
using namespace std;

int main() {

	bool result;

	result = (12 >= 12);
	cout << "(12 >= 12) is " << result << endl;

	result = (12 > 7);
	cout << "(12 > 7) is " << result << endl;

	result = (8 > 6);
	cout << "(8 > 6) is " << result << endl;


	result = (8 == 8);
	cout << "(8 == 8) is " << result << endl;

	result = (12 <= 12);
	cout << "(12 <= 12) is " << result << endl;

	result = (7 == 5);
	cout << "(7 == 5) is " << result << endl;

	result = !(12 >= 12);
	cout << "!(12 >= 12) is " << result << endl;

	result = !(12 > 7);
	cout << "!(12 > 7) is " << result << endl;

	result = !(8 > 6);
	cout << "!(8 > 6) is " << result << endl;

	result = !(8 == 8);
	cout << "!(8 == 8) is " << result << endl;

	result = !(12 <= 12);
	cout << "!(12 <= 12) is " << result << endl;

	result = !(7 == 5);
	cout << "!(7 == 5) is " << result << endl;

	result = (1 && 1);
	cout << "(1 && 1) is " << result << endl;

	result = (true && 0);
	cout << "(true && 0) is " << result << endl;

	result = (0 || 1);
	cout << "(0 || 1) is " << result << endl;

	result = (0 || 0);
	cout << "(0 || 0) is " << result << endl;

	result = !0;
	cout << "!0 is " << result << endl;

	result = !(1 || 0);
	cout << "!(1 || 0) is " << result << endl;


	result = (7 == 7) && (7 > 5);
	cout << "(7 == 7) && (7 > 5) is " << result << endl;


	result = (7 == 7) && (7 < 5);
	cout << "(7 == 7) && (7 < 5) is " << result << endl;


	result = (7 == 7) || (7 > 5);
	cout << "(7 == 7) || (7 > 5) is " << result << endl;


	result = (7 == 7) || (7 < 5);
	cout << "(7 == 7) || (7 < 5) is " << result << endl;

	result = !(7 == 7) && (7 > 5);
	cout << "!(7 == 7) && (7 > 5) is " << result << endl;

	result = (7 == 7) && !(7 < 5);
	cout << "(7 == 7) && !(7 < 5) is " << result << endl;

	cout << "**********************************\n";

	result = ((5 > 6) && (7 == 7)) || (1 ||0);
	cout << "((5 > 6) && (7 == 7)) || (1 ||0) is " << result << endl;
	
	result = !((5 > 6) && (7 == 7)) || (1 ||0);
	cout << "!((5 > 6) && (7 == 7)) || (1 ||0) is " << result << endl;

	result = !((5 > 6) && (7 == 7)) || !(1 || 0);
	cout << "!((5 > 6) && (7 == 7)) || !(1 ||0) is " << result << endl;

	result = !((5 > 6) || (7 == 7)) && !(1 || 0);
	cout << "!((5 > 6) || (7 == 7)) && !(1 ||0) is " << result << endl;

	result = ((5 > 6) && (7 <= 8)) || ((8 > 1) && (4 <= 3)) && true;
	cout << "((5 > 6) && (7 <= 8)) || ((8 > 1) && (4 <= 3)) && true is " << result << endl;

	result = ((5 > 6) && !(7 <= 8)) && ((8 > 1) || (4 <= 3)) || true;
	cout << "((5 > 6) && !(7 <= 8)) && ((8 > 1) || (4 <= 3)) || true is " << result << endl;



	return 0;


}