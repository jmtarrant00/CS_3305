// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4

#include <cstdlib>
#include <iostream>
#include <cassert>
#include <stack>

using namespace std;

void printMenu();
void userInput();

int main() {
	int choice;
	
	do {
		printMenu();
		cout << "Please choose an option: ";
		cin >> choice;
		cout << endl;
		switch(choice) {
			case 1:
				cout << "Test topToBottom with int stack" << endl;
				break;
			case 2:
				cout << "Test bottomToTop with int stack" << endl;
				break;
			case 3:
				cout << "Test flipStack with str stack" << endl;
				break;
			case 4:
				cout << "test searchStack with str stack" << endl;
				break;
			case 5:
				cout << "Exiting Program... " << endl;
				break;
		}
	} while (choice != 5);
}

void printMenu() {
	cout << "\n";
	cout << "-----MAIN MENU-----" << endl;
	cout << "1: Test Function topToBottom with integer stack" << endl;
	cout << "2: Test Function bottomToTop with integer stack" << endl;
	cout << "3: Test Function flipStack with string stack" << endl;
	cout << "4: Test Function searchStack with string stack" << endl;
	cout << "5: Exit Program" << endl;
}