// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 7

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void printMenu();

int getInput();

int main() {
	int choice;
	int matrixSize = 0;
	int 
	
	do {
		printMenu();
		choice = getInput();
		cout << endl;
		switch(choice) {
			case 1:
				cout << "----- Enter Graph Data -----" << endl;
				cout << endl;
				cout << "Please enter the Matrix Size: ";
				do {
					cout << "Please enter the Matrix Size: ";
					matrixSize = getInput();
					if (matrixSize <= 0 || matrixSize > 5) {
						cout << "Please enter a matrix size between 0 and 5" << endl;
					}
				} while (matrixSize <= 0 || matrixSize > 5);
				cout << "Matrix Size: " << matrixSize << endl;
				break;
			case 2:
				cout << "----- Print Graph Outputs -----" << endl;
				break;
			case 3:
				cout << "Exiting Program... " << endl;
				break;
			default:
				cout << "Please enter a valid value (1-3)" << endl;
				break;
		}
	} while (choice != 3) ;
	return EXIT_SUCCESS;
}

void printMenu() {
	cout << "-----Main Menu-------" << endl;
	cout << "1 - Enter Graph Data" << endl;
	cout << "2 - Print Graph Outputs" << endl;
	cout << "3 - Exit Program" << endl;
	cout << endl;
	cout << "Please select an option: ";
}

int getInput() {
	string command = "";
	int number = 0;
	getline(cin, command); // Take the entire line as input
	for(size_t i = 0; i < command.length(); i++) {
		if(!isdigit(command[i])) { 
			// if there is a non-int in the input, return 0
			return number;
		}
	}
	number = stoi(command); // convert the number string to an int
	return number;
}