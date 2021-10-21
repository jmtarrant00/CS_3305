// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 5

#include <cstdlib>  // provides EXIT_SUCCESS and std library
#include <iostream> // provides cout and cin

using namespace std; // allows all std lib items to be used

//This function prints the menu that is used throughout the program
// it also prompts the user to enter an option
void printMenu();

// This function gets the class size from the user
// It also checks to see if the class size is negative
// but it allows the user to enter 0 as a size
int getClassSize();

// This function gets the grade of the class from the user
// It stores the grades in a dynamic array, and returns a pointer 
// to the main function 
int* getGrades(int classSize);

// This function recursively calculates the average grade of the class
// The first parameter is the grades array. The second parameter is a counter
// and the third parameter is the size of the class
int findAverage(int grades[], int i, int classSize); 

int main() {
	int choice = 0; 		 // initializes choice to 0
	int classSize; 			 // stores the size of the class for both the get grades and average function
	int *grades; 			 // pointer to store the grades to pass to the average function
	bool choicePass = false; // used to exit the do while that checks the menu input
	do {
		do { 
			// This do while loop checks the value input for the menu options. It won't move on until choicePass is true
			// which only happens when the user enters a valid option
			printMenu();
			cin >> choice;
			if (choice >= 1 && choice <= 4) {
				choicePass = true;
				cout << endl;
			} else {
				cout << "Please enter a valid option." << endl;
				cout << "\n";
			}
		} while (choicePass == false);
		switch(choice) {
			// This switch statement is what determines what is executed depending on what the user entered
			case 1:
				classSize = getClassSize(); // sets class size 
				break;
			case 2: {
				grades = getGrades(classSize); // sets the grades
				break;
			}
			case 3:
				cout << "Finding the Average... " << endl;
				cout << "The average grade is: " << findAverage(grades, 0, classSize) << endl; // computes and outputs the average grade
				break;
			case 4: 
				cout << "Exiting Program..." << endl;
				break;
		}
	} while (choice != 4);
	return EXIT_SUCCESS;
}

void printMenu(){
	// Precondition: none
	// Postcondition: prints the main menu for the user
	cout << endl;
	cout << "-----MAIN MENU-----" << endl;
	cout << "1: Read Class Size" << endl;
	cout << "2: Read Class Grades" << endl;
	cout << "3: Computer Class Average" << endl;
	cout << "4: Exit Program" << endl;
	cout << endl;
	cout << "Please enter an option: ";
}

int getClassSize(){
	// Precondition: None
	// Postcondition: takes input for the number of students in the class
	// and checks to make sure the class size is >= 0
	int classSize;
	cout << "Please enter the class size: ";
	do {
		// Takes input for size and checks if it's >= 0
		cin >> classSize;
		if (classSize < 0) {
			cout << "Please enter a size greater than or equal to 0." << endl;
		}
	} while (classSize < 0);
	
	return classSize;
}

int* getGrades(int classSize) {
	// Precondition: classSize is non-negative
	// Postcondition: returns pointer to an array that contains 
	// the grades for the class
	int* gradesInput = new int[classSize];
	for (int i = 0; i < classSize; i++) {
		switch(i + 1){
			// switches the output based on the index of the grade being entered
			case 1:
				cout << "What is the 1st grade? ";
				cin >> gradesInput[i];
				break;
			case 2:
				cout << "What is the 2nd grade? ";
				cin >> gradesInput[i];
				break;
			case 3: 
				cout << "What is the 3rd grade? ";
				cin >> gradesInput[i];
				break;
			default:
				cout << "What is the " << i + 1 << "th grade? ";
				cin >> gradesInput[i];
				break;
		}
	}
	return gradesInput;
	
}

int findAverage(int grades[], int i, int classSize) {
	// Precondition: grades[] has elements, i and classSize are non-negative
	// Postcondition: returns the average grade of the class
	
	int sum;
	// Base Case
	// When i is one less than class size, the function will
	// only return the grade at that index
	if (i == classSize - 1) {
		return grades[i];
	}
	 
	// this if starts off the recursion and it ensures that the program only divides once
	if (i == 0) {
		return ((grades[i] + findAverage(grades, i + 1, classSize)) / classSize);
	}
	
	// recusive call. It doesn't divide, because that would mess up the calculations to have the function 
	// divide every single time 
	return (grades[i] + findAverage(grades, i + 1, classSize));
}