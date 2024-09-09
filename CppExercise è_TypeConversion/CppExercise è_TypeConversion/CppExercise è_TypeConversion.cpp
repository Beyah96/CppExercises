#include <iostream>
#include <string>

using namespace std;

int main() {

	string st1 = "43.22";
	
	double st1_double = stod(st1);
	cout << "st1 converted to double: " << st1_double << endl;

	float st1_float = stof(st1);
	cout << "st1 converted to flaot: " << st1_float << endl;

	int st1_int = stoi(st1);
	cout << "st1 converted to int: " << st1_int << endl;

	cout << "*****************************************" << endl << endl;
	int N1 = 20;
	string N1_string = to_string(N1);
	cout << "N1 converted to string: " << N1_string << endl;

	cout << "*****************************************" << endl << endl;
	double N2 = 33.5;
	string N2_string = to_string(N2);
	cout << "N2 converted to string: " << N2_string << endl;

	cout << "*****************************************" << endl << endl;
	float N3 = 55.23;
	
	string N3_string = to_string(N3);
	cout << "N3 converted to string: " << N3_string << endl;

	int N3_int_1 = int(N3);//explicite conversion
	cout << "N3 converted to int: " << N3_int_1 << endl;
	
	int N3_int_2 = (int) N3;// Casting
	cout << "N3 converted to int: " << N3_int_2 << endl;
	
	int N3_int_3 = N3; // implicite conversion
	cout << "N3 converted to int: " << N3_int_3 << endl;


	return 0;

}