// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 5

#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

void printMenu();
int countVowels(string input, string vowels);

int main() {
	string input;
	string vowels = "aeiou";
	int choice;
	int numVowels = 0;
	bool choicePass = false;
	do{
		do {
			printMenu();
			cin >> choice;
			if (choice == 1 || choice == 2 || choice == 3) {
				choicePass = true;
				cout << endl;
			} else {
				cout << "Please enter a valid option." << endl;
				cout << "\n";
			}
		} while (choicePass == false);
		switch(choice){
			case 1:
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
				cin.clear();
				cout << "---------- Read Input String ----------" << endl;
				cout << "Please enter a string: " << endl;
				getline(cin, input);
				cout << "Your String: " << input << endl;
				break;
			case 2: 
				cout << "Counting vowels... " << endl;
				numVowels = countVowels(input, vowels);
				cout << "Number of Vowels: " << numVowels << endl;
				break;
			case 3:
				cout << "Exiting Program... " << endl;
				break;
		}
	} while(choice != 3);
}

void printMenu() {
	cout << endl;
	cout << "-----MAIN MENU-----" << endl;
	cout << "1: Read Input String" << endl;
	cout << "2: Compute Number of Vowels" << endl;
	cout << "3: Exit Program" << endl;
	cout << "\n";
	cout << "Please enter an option: ";
}

int countVowels(string input, string vowels) {
	int count = 0;
	if (vowels.length() == 0) {
		return count; 
	}
	for (size_t i = 0; i < input.length(); i++) {
		if (input.substr(i,1) == vowels.substr(0,1)) {
			count++;
		}
	}
	return count + countVowels(input, vowels.substr(1));
}