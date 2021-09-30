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
template<class Item1> stack<Item1> clrStack(stack<Item1> clearStack);

template <class Item>
void topToBottom(stack<Item> prtStack);
void bottomToTop(stack<double> bttStack);
stack<string> flipStack(stack<string> fpStack);
bool searchStack(stack<int> srchStack, int target);

int main() {
	int choice;
	int num1;
	int target;
	double num2;
	string str1;
	bool srch;
	stack<int> intStack;
	stack<double> dblStack;
	stack<string> strStack;
	do {
		printMenu();
		cout << "Please choose an option: ";
		cin >> choice;
		cout << endl;
		switch(choice) {
			case 1:
				cout << "---------topToBottom---------" << endl;
				cout << "Please enter 5 integers" << endl;
				for (int i = 0; i < 5; i++) {
					cout << i + 1 << ": ";
					cin >> num1;
					intStack.push(num1);
				}
				cout << "Testing function topToBottom: " << endl;
				cout << "Stack content:   ";
				topToBottom(intStack);
				cout << "Function output: ";
				topToBottom(intStack);
				cout << endl;
				intStack = clrStack(intStack);
				break;
			case 2:
				cout << "---------bottomToTop---------" << endl;
				cout << "Please enter 5 non-integers" << endl;
				for (int i = 0; i < 5; i++) {
					cout << i + 1 << ": ";
					cin >> num2;
					dblStack.push(num2);
				}
				cout << "Testing function bottomToTop" << endl;
				cout << "Stack Content:   ";
				topToBottom(dblStack);
				cout << "Function Output: ";
				bottomToTop(dblStack);
				cout << endl;
				dblStack = clrStack(dblStack);
				break;
			case 3:
				cout << "----------flipStack----------" << endl;
				cout << "Test flipStack with str stack" << endl;
				cout << "Please enter 5 strings" << endl;
				for (int i = 0; i < 5; i++) {
					cout << i + 1 << ": ";
					cin >> str1;
					strStack.push(str1);
				}
				cout << "Testing Function flipStack" << endl;
				cout << "Stack Content:   ";
				topToBottom(strStack);
				cout << "Function Output: ";
				strStack = flipStack(strStack);
				topToBottom(strStack);
				break;
			case 4:
				cout << "---------searchStack---------" << endl;
				cout << "Test searchStack with int stack" << endl;
				cout << "Please enter 5 integers" << endl;
				for (int i = 0; i < 5; i++) {
					cout << i + 1 << ": ";
					cin >> num1;
					intStack.push(num1);
				}
				cout << "Please enter a value to searh for: ";
				cin >> target;
				cout << "\n" << "Testing Function searchStack" << endl;
				cout << "Stack Contents: ";
				topToBottom(intStack);
				cout << "Target value:   " << target << endl;
				srch = searchStack(intStack, target);
				if (srch == 1) {
					cout << "True" << endl;
				} else {
					cout << "False" << endl;
				}
				intStack = clrStack(intStack);
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

template<class Item1> stack<Item1> clrStack(stack<Item1> clearStack) {
	while(!clearStack.empty()) {
		clearStack.pop();
	}
	
	return clearStack;
}

template<class Item>
void topToBottom(stack<Item> prtStack) {
	stack<Item> store;
	Item temp;
	if (prtStack.empty() == true) {
		cout << "The stack is empty" << endl;
	} else {
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
}

void bottomToTop(stack<double> bttStack) {
	stack<double> store;
	double temp;
	while (!bttStack.empty()) {
		temp = bttStack.top();
		store.push(temp);
		bttStack.pop();
	}
	while(!store.empty()) {
		temp = store.top();
		cout << temp << " ";
		store.pop();
		bttStack.push(temp);
	}
}

stack<string> flipStack(stack<string> fpStack) {
	stack<string> store;
	string temp;
	while(!fpStack.empty()) {
		temp = fpStack.top();
		fpStack.pop();
		store.push(temp);
	}
	return store;
}

bool searchStack(stack<int> srchStack, int target) {
	stack<int> store;
	int temp;
	bool found;
	while (!srchStack.empty()) {
		temp = srchStack.top();
		srchStack.pop();
		if (temp == target) {
			found = true;
			break;
		}
		store.push(temp);
	}
	while(!store.empty()) {
		temp = store.top();
		store.pop();
		srchStack.push(temp);
	}
	return found;
}