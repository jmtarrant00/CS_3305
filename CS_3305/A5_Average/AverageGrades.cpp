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
int getClassSize();
int* getGrades(classSize);
int findAverage(int*& grades[], int classSize); 

int main() {
	int choice = 0;
	int classSize;
	int* grades[];
	bool choicePass = false;
	do {
		do {
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
			case 1:
				classSize = getClassSize();
				break;
			case 2:
				
			case 3:
				
			case 4: 
				cout << "Exiting Program..." << endl;
				break;
		}
	} while (choice != 4);
}

void printMenu(){
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
	int classSize;
	cout << "Please enter the class size: ";
	do {
		cin >> classSize;
		if (classSize < 0) {
			cout << "Please enter a size greater than or equal to 0." << endl;
		}
	} while (classSize < 0);
	
	return classSize;
}

int* getGrades(classSize) {
	int* grades[] = new int[classSize];
	for (int i = 0; i < classSize; i++) {
		cout << "What is the grade? ";
		cin >> grades[i];
		
	}
	
}

int* findAverage(classSize) {
	
}