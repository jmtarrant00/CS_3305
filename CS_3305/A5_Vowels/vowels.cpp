// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 5

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void printMenu();
int countVowels(string s);

int main() {
	string input;
	int choice;
	bool choicePass = false;
	do{
		do {
			printMenu();
			cin >> choice;
			if (choice == 1 || choice == 2 || choice == 3) {
				choicePass = true;
			} else {
				cout << "Please enter a valid option." << endl;
				cout << "\n";
			}
		} while (choicePass == false);
		switch(choice){
			case 1:
				cout << "---------- Read Input String ----------" << endl;
				getline(cin, input);
				cout << "Your String: " << input << endl;
				break;
			case 2: 
				cout << "Counting vowels... " << endl;
//				countVowels(input);
				break;
			case 3:
				cout << "Exiting Program... " << endl;
				break;
		}
	} while(choice != 3);
}

void printMenu() {
	cout << "-----MAIN MENU-----" << endl;
	cout << "1: Read Input String" << endl;
	cout << "2: Compute Number of Vowels" << endl;
	cout << "3: Exit Program" << endl;
	cout << "\n";
	cout << "Please enter an option: ";
}

int countVowels(string s) {
	
}