// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4

#include <cstdlib>
#include <iostream>
#include <cassert>
#include <queue>

using namespace std;

void printMenu();

int main() {
	int choice;
	
	do {
		printMenu();
		cout << "Please choose an option: ";
		cin >> choice;
		cout << endl;
		switch(choice) {
			case 1:
				cout << "Test char-by-char palindrome" << endl;
				break;
			case 2: 
				cout << "Test word-by-word palindrome" << endl;
				break;
			case 3:
				cout << "Exiting Program... " << endl;
				break;
		} 
	} while (choice != 3);
}

void printMenu() {
	cout << "\n";
	cout << "-----MAIN MENU-----" << endl;
	cout << "1: Test Function character-by-character palindrome" << endl;
	cout << "2: Test Function word-by-word palindrome" << endl;
	cout << "3: Exit Program" << endl;

}