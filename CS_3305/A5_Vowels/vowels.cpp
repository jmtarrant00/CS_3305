// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 5

#include <cstdlib>	// provides the std lib
#include <iostream> // Provides cout and cin
#include <string>	// Provides string class
#include <limits>	// Provides numeric_limits

using namespace std; // allows all std lib items to be used

//This function prints the menu that is used throughout the program
// it also prompts the user to enter an option
void printMenu();

// This function checks the input for a number, and if it finds 
// a number in the input, it converts it from a string to an int
// then returns the int for the choice
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

// This function recursively counts the vowels in the input string
// it takes the string as input, as well as a predefined string of 
// the vowels. This predefined string is used to check for vowels in
// the user defined string. It goes through the string once for each 
// vowel, and adds the counts of those vowels together for the total
// number of vowels in the string
int countVowels(string input, string vowels);

int main() {
	string input;			 // user defined string to test
	string vowels = "aeiou"; // string of all vowels 
	int choice;				 // stores the choice of the user
	int numVowels = 0;		 // stores the number of vowels 
	do{
		printMenu();
		choice = getInput();
		switch(choice){
			// This switch statement allows the user to interact with the program 
			case 1: 
				// reads user string
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // these two lines clear the current cin buffer so that
				cin.clear();										 // a new input can be taken
				cout << "---------- Read Input String ----------" << endl;
				cout << "Please enter a string: " << endl;
				getline(cin, input); // this allows the user to input spaces into their string
				cout << "Your String: " << input << endl;
				break;
			case 2: 
				// counts the number of vowels
				cout << "Counting vowels... " << endl;
				numVowels = countVowels(input, vowels);
				cout << "Number of Vowels: " << numVowels << endl;
				break;
			case 3: 
				// exits the program
				cout << "Exiting Program... " << endl;
				break;
		}
	} while(choice != 3);
}

void printMenu() {
	// Precondition: None
	// Postcondition: The menu is printed and the user is prompted for input
	cout << endl;
	cout << "-----MAIN MENU-----" << endl;
	cout << "1: Read Input String" << endl;
	cout << "2: Compute Number of Vowels" << endl;
	cout << "3: Exit Program" << endl;
	cout << "\n";
	cout << "Please enter an option: ";
}

int countVowels(string input, string vowels) {
	// Precondition: The user has input a valid string
	// Postcondition: The code prints out the corrent number of vowels 
	// in the given string
	int count = 0;
	
	// BASE CASE:
		// once the length of the vowels string is 0, the function returns the count
	if (vowels.length() == 0) {
		return count; 
	}
	
	// This loops through the string and compares each character to the current vowel
	for (size_t i = 0; i < input.length(); i++) {
		if (input.substr(i,1) == vowels.substr(0,1)) {
			count++;
		}
	}
	
	// RECURSIVE CALL
		// During each recursion, the function is passed a substring of the vowels string
		// that only contains the remaining vowels to be checked
	return count + countVowels(input, vowels.substr(1));
}