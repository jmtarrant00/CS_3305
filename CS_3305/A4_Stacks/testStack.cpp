// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4

#include <cstdlib>   // std library
#include <iostream>  // Provides cout and cin
#include <cassert>   // Provides assert
#include <stack>     // Provides stack functions
#include <string>

using namespace std;

void printMenu();
void userInput();
void topToBottom(stack<int> stack);
void bottomToTop(const stack<double> stack);
void flipStack(const stack<string>& stack);
void searchStack(const stack<string>& stack, int target);

int main() {
	int choice;
	int num1;
	stack<int> intStack;
	do {
		printMenu();
		cout << "Please choose an option: ";
		cin >> choice;
		cout << endl;
		switch(choice) {
			case 1:
				cout << "Test topToBottom with int stack" << endl;
				cout << "Please enter 5 numbers" << endl;
				for (int i = 0; i < 5; i++) {
					cin >> num1;
					intStack.push(num1);
				}
				topToBottom(intStack);
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
	cout << "2: Test Function bottomToTop with double stack" << endl;
	cout << "3: Test Function flipStack with string stack" << endl;
	cout << "4: Test Function searchStack with string stack" << endl;
	cout << "5: Exit Program" << endl;
}

void userInput() {
	
}

void topToBottom(stack<int> stack) {
	for (int i = 0; i <= stack.size(); i++) {
		cout << stack.top() << " ";
	}
	cout << endl;
}

void bottomToTop(const stack<double> stack) {
	
}

void flipStack(stack<string>& stack, int target) {
	
}