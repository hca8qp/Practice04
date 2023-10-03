#pragma once

#include <string>
using namespace std;

string type;

void printMenu() {

	cout << "Chocolate factory" << endl;
	cout << "F:  Fill Order" << endl;
	cout << "P:  Print Inventory" << endl;
	cout << "O:  Order Inventory" << endl;
	cout << "E:  Exit" << endl;

}


void orderInventory(int& L, int& M, int& S) {
	int initialLarge = 1500;
	int initialMedium = 1200;
	int initialSmall = 7000;

	int remLarge;
	int remMedium; 
	int remSmall; 


	if (L != 0) {
		type == "Large";
		remLarge = initialLarge + L; 
		remMedium = initialMedium + M;
		remSmall = initialSmall + S;

		cout << "An additional " << L << " bars ordered. New total of " << type << " bars = " << remLarge << endl;
	}

	if (M != 0) {
		type == "Medium";
		remLarge = initialLarge + L;
		remMedium = initialMedium + M;
		remSmall = initialSmall + S;

		cout << "An additional " << M << " bars ordered. New total of " << type << " bars = " << remMedium << endl;
	}

	if (S != 0) {
		type == "Small";
		remLarge = initialLarge + L;
		remMedium = initialMedium + M;
		remSmall = initialSmall + S;

		cout << "An additional " << S << " bars ordered. New total of " << type << " bars = " << remSmall << endl;
	}

	
}