// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 7

#include <cstdlib>
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void printMenu();

int getInput();

int main() {
	int[][] Tables = new int[50][2];
	int choice = 0;
	
	do {
		printMenu();
		choice = getInput();
		switch (choice) {
			case 1:
				cout << "Choice: " << choice << endl;
				break;
			case 2:
				cout << "Choice: " << choice << endl;
				break;
			case 3:
				cout << "Choice: " << choice << endl;
				break;
			case 4:
				cout << "Choice: " << choice << endl;
				break;
			case 5:
				cout << "Exiting Program..." << endl;
				break;
			default:
				cout << "Please input a valid choice (1-5)" << endl;
				break;
		}
	} while (choice != 5);
}

void printMenu() {
	cout << endl;
	cout << "-----MAIN MENU---------------------------------" << endl;
	cout << "1: HF1 (Division Method with Linear Probing)" << endl;
	cout << "2: HF2 (Division Method with Quadratic Probing)" << endl;
	cout << "3: HF3 (Division Method with Double Hashing)" << endl;
	cout << "4: HF4 (Student Defined Function)" << endl;
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