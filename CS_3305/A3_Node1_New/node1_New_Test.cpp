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

// functions to be used in the execution of main
void printMenu();
int getIndex();
void display(node* grade_ptr); 

int main() {
	// declare variables
	node *gradesList;			// create the grades list for the program
	gradesList = NULL;			// set the list to empty
	double grade;				// This is where I store the user input for the value they enter
	double location;			// This is where I store the user input for the location they wish to operate on
	node *copy = NULL;			// the copy list is used when copying the list or a node
	node *copyTail = NULL;		// Used in case 11
	const node *temp = NULL;	// this list is used when grade_ptr is required
	int choice;
	
	cout << "The list with grades is intitally empty. Please choose one of the options below..." << endl;
	do {
		printMenu();
		cin >> choice;
		switch(choice) {
			case 1:
				// display the length of the list 
				cout << "List Length: " << list_length(gradesList) << endl;
				break;
				
			case 2: 
				// insert a node at the head of the list, overwriting the previous head
				cout << "Head Insert" << endl;
				cout << "What value would you like to insert?" << endl;
				cin >> grade;
				list_head_insert(gradesList, grade);
				cout << "Inserted " << grade << " at the head of the list" << endl;
				display(gradesList);
				break;
				
			case 3: 
				// insert a node anywhere in the list 
				cout << "List Insert" << endl;
				cout << "What value would you like to insert? ";
				cin >> grade;
				// In case the user chooses this option for head insert
				if (location == 1 || list_length(gradesList) == 0){
					list_head_insert(gradesList, grade);
				}
				
				// Normal operation for the list insert function
				location = getIndex();
                if(list_locate(gradesList, location) != NULL){
                    list_insert(list_locate(gradesList, location), grade);
                } else if(location > list_length(gradesList)){
                    list_insert(list_locate(gradesList, list_length(gradesList)), grade);
                }
				cout << "Inserted " << grade << " index " << location << endl;
				display(gradesList);
				break;
				
			case 4:
				// search for a number within the list
				cout << "Enter a grade to search for: ";
				cin >> grade;
				copy = list_search(gradesList, grade);
				if (copy != NULL) {
					cout << "The grade is in the list" << endl;
				} else {
					cout << "That grade isn't in the list, sorry. Please choose option 3 to add it to the list" << endl;
				}
				break;
				
			case 5:
				// This is the same as case 4, but using the const version of the search
				cout << "Enter a grade to search for: ";
				cin >> grade;
				temp = gradesList;
				if (list_search(temp, grade) != NULL) {
					cout << "The grade is in the list" << endl;
				} else {
					cout << "The grade isn't in the list. Please choose option 3 to add it to the list" << endl;
				}
				break;
				
			case 6:
				// Locate the number at a given index
				location = getIndex();
				if (location > list_length(gradesList)) {
					cout << "There is no node at that index";
					cout << "The last node in the list is at index " << list_length(gradesList) << ", the value of that node is: " << list_locate(gradesList, list_length(gradesList))->data() << endl;
				} else if (list_locate(gradesList, location) != NULL) {
					cout << "Index " << location << " has the value of: " << list_locate(gradesList, location) -> data() << endl;

				}
				break;
				
			case 7:
				// Same as case 6, but with the const version of the locate
				temp = gradesList;
				location = getIndex();
				if (location > list_length(gradesList)) {
					cout << "There is no node at that index";
					cout << "The last node in the list is at index " << list_length(gradesList) << ", the value of that node is: " << list_locate(gradesList, list_length(gradesList))->data() << endl;
				} else if (list_locate(temp, location) != NULL) {
					cout << "Index " << location << " has the value of: " << list_locate(temp, location) -> data() << endl;
				} 
				break;
			case 8:
				//Remove the first value of the list
				if (list_length(gradesList) == 0) { 
					// if the user chooses this at the beginning
					cout << "The list is currently empty, please add items to the list" << endl;
				} else {
					list_head_remove(gradesList);
				}
				display(gradesList);
				break;
			case 9:
				// remove any node from the list, location is given by the user
				if (list_length(gradesList) == 0) {
					// If the user chooses this option at the beginning
					cout << "the list is empty, please add items to the list" << endl;
				} else if (list_length(gradesList) == 1) {
					// if the list only has one item
					list_head_remove(gradesList);
				}
				location = getIndex();
				if (location == 1){
					list_head_remove(gradesList);
				} else if (location > list_length(gradesList)) {
					cout << "There is no node at that index. Please enter a valid index under " << list_length(gradesList) << "." << endl;
				} else if (location <= list_length(gradesList)) {
					list_remove(list_locate(gradesList, location - 1));
				}
				display(gradesList);
				break;
			case 10:
				// This function clears the list
				list_clear(gradesList);
			case 11:
				// This copies the list to a new list
				temp = gradesList;
				if (list_length(gradesList) == 0) {
					// in case this is chosen at the beginning of runtime
					cout << "There is nothing in the list to copy, please add items to the list" << endl;
					break;
				}
				list_copy(temp, copy, copyTail);
				cout << "The copy list: ";
				display(copy);
				list_clear(copy);
				break;
			case 12:
				// this option displays the list 
				display(gradesList);
			case 13:
				cout << "Exiting Program..." << endl;
				break;
			default:
				cout << choice << " is an invalid option. Please enter a valid option to continue" << endl;
		}
	} while (choice != 13);
	return EXIT_SUCCESS;
}

void printMenu(){
	// this function is called whenever the menu needs to be printed
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
	cout << "13: Exit Program" << endl;
	cout << '\n';
	cout << "Enter option number" << endl;
}

int getIndex(){ 
	// this function takes the input for the index and ensures that it's a valid index location
	int index;
	cout << "Enter index number: ";
	cin >> index;
	while (cin.fail() || index <= 0){
		cin.clear();
		cin.ignore();
		cout << "Please enter an index greater than 0: ";
		cin >> index;
	}
	return index;
}

void display(node* grade_ptr) {
	// this function displays the list, or tells the users that the list is empty
	node *cursor;
	if (list_length(grade_ptr) == 0) {
		cout << "The list is empty" << endl;
		return;
	}
	cout << "Grades List: ";
	for (cursor = grade_ptr; cursor != NULL; cursor = cursor -> link()) {
		cout << "[" << cursor -> data() << "] ";
	}
	cout << endl;
	list_clear(cursor);
}
