#include <iostream>
#include <string>

using namespace std;

void myCard() {
	cout << "*****************************************\n";
	cout << "Name: Mohamed Said Beyah.\n" << "Age : 27 Years.\n" << "City : Paris.\n" << "Country : France.\n";
	cout << "*****************************************\n";

}

void mySquare() {

	cout << "********\n********\n********\n********\n";
}

void myPromess() {

	cout << "I Love Programming\n\nI promise to be the best developer ever!\n\nI know it will take some time to practice, but  I will acheive my goal.\n\nBest Regards\nMohamed Said";
}

void myDesignOfH() {
	cout << "*   *\n*   *\n*****\n*   *\n*   *";
}

int main() {

	cout << "My Card :\n\n";
	myCard();

	cout << " \n\nMy Square : \n\n";
	mySquare();
	cout << " \n\nMy Promess : \n\n";
	myPromess();
	cout << " \n\nMy Design for the letter \"H\" \n\n";
	myDesignOfH();


	return 0;
}