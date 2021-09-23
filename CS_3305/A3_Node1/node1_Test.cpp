// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 3

#include <cstdlib>
#include <String>
#include <iostream>
#include <cassert> // Provides assert
#include "node1.h" 

using namespace std;
using namespace main_savitch_5;

void printMenu();

int main() {
	// declare variables
	int choice;
	
	do {
		printMenu();
		cin >> choice;
		switch(choice) {
			case 1:
				cout << "List Length" << endl;
				break;
			case 2: 
				cout << "Head Insert" << endl;
				break;
			case 3: 
				cout << "List Insert" << endl;
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			default:
				cout << choice << " is an invalid option. Please enter a valid option to continue" << endl;
		}
	} while (choice != 12);
}

void printMenu(){
	cout << "\n";
	cout << "------------- MAIN MENU ------------------" << endl;
	cout << "1: Test Function std::size_list_length" << endl;
	cout << "2: Test Function void list_head_insert" << endl;
	cout << "3: Test Function void list_insert" << endl;
	cout << "4: Test Function node *list_search" << endl;
	cout << "5: Test Fuction const node *list_search" << endl;
	cout << "6: Test Function node *list_locate" << endl;
	cout << "7: Test Function const node *list_locate" << endl;
	cout << "8: Test Function void list_head_remove" << endl;
	cout << "9: Test Function void list_remove" << endl;
	cout << "10: Test Function void list_clear" << endl;
	cout << "11: Test Function void list_copy" << endl;
	cout << "12: Display List" << endl;
	cout << "12: Exit Program" << endl;
	cout << '\n';
	cout << "Enter option number" << endl;
}

