// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4

#include <cstdlib>   // std library
#include <iostream>  // Provides cout and cin
#include <cassert>   // Provides assert
#include <stack>     // Provides stack functions
#include <string>    // Provides string type

using namespace std;


void printMenu();
void userInput();
template <class Item>
void topToBottom(stack<Item> prtStack);
void bottomToTop(const stack<double> bttStack);
stack<string> flipStack(stack<string>& fpStack);
bool searchStack(stack<int>& srchStack, int target);

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
				cout << "Testing function topToBottom: " << endl;
				cout << "Stack content:   ";
				topToBottom(intStack);
				cout << "Function output: ";
				topToBottom(intStack);
				cout << endl;
				break;
			case 2:
				cout << "Test bottomToTop with int stack" << endl;
				break;
			case 3:
				cout << "Test flipStack with str stack" << endl;
				break;
			case 4:
				cout << "Test searchStack with int stack" << endl;
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
	cout << "4: Test Function searchStack with integer stack" << endl;
	cout << "5: Exit Program" << endl;
}

void userInput() {
	
}
template<class Item>
void topToBottom(stack<Item> prtStack) {
	stack<Item> store;
	Item temp;
	while (!prtStack.empty()) {
		temp = prtStack.top();
		cout << temp << " ";
		prtStack.pop();
		store.push(temp);
	}
	while (!store.empty()) {
		temp = store.top();
		store.pop();
		prtStack.push(temp);
	}
	cout << endl;
}

void bottomToTop(const stack<double> bttStack) {
	
}

stack<string> flipStack(stack<string>& fpStack) {
	stack<string> store;
	string temp;
	for (size_t i = 0; i < fpStack.size(); i++) {
		temp = fpStack.top();
		fpStack.pop();
		store.push(temp);
	}
	return fpStack;
}

bool searchStack(stack<int> &srchStack, int target) {
	stack<int> store;
	int temp;
	bool found;
	for (size_t i = 0; i < srchStack.size(); i++) {
		temp = srchStack.top();
		srchStack.pop();
		if (temp == target) {
			found = true;
			break;
		}
		store.push(temp);
	}
	for (size_t i = 0; i < store.size(); i++) {
		temp = store.top();
		store.pop();
		srchStack.push(temp);
	}
	return found;
}