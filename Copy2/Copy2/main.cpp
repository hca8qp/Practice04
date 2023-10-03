
#include <iostream>
#include "functions.h"
	using namespace std;

	int main() {

		bool quit = false;
		char choice;

		printMenu();
		cout << "Enter your choice: ";
		cin >> choice;
		choice = toupper(choice);
		cout << endl;

		int numBars;
		int large;
		int medium;
		int small;
		char size;

		while (!quit) {

			if (choice == 'E') {
				cout << "Thank you for using my program!";
				quit = true;
			}

			if (choice == 'F') {
				//update later
			}

			if (choice == 'P') {
				//update later
			}

			if (choice == 'O') {
				cout << "Enter the number of bars needed: ";
				cin >> numBars;

				cout << "Enter the type (L, M, S)";
				cin >> size;
				size = toupper(size);


				if (size == 'L') {
					large = numBars;
					medium = 0;
					small = 0;
				}

				if (size == 'M') {
					large = 0;
					medium = numBars;
					small = 0;
				}
				if (size == 'S') {
					large = 0;
					medium = 0;
					small = numBars;
				}

				if ((size != 'L') && (size != 'M') && (size != 'S')) {
						cout << "WARNING: " << size << " is an invalid type. Command ignored. " << endl;
						cout << "Enter the type (L, M, S) : ";
						cin >> size;
						size = toupper(size);
				}
				orderInventory(large, medium, small);

				}
			if ((choice != 'O') && (choice != 'P') && (choice != 'E') && (choice != 'F')) {
				cout << "WARNING: " << choice << " is an invalid choice. Please try again." << endl;
				cout << "Enter your choice: ";
				cin >> choice;
				choice = toupper(choice);
				cout << endl;
				}
				}
			}
		
