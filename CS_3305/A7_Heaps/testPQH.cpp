// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 7

#include <cstdlib>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm> 
#include "PQ_Heap.h"

using namespace std;

priority_queue_heap<int> intHeap;
priority_queue_heap<string> stringHeap;
int type = 0;

// This function prints the menu
// Precondition: none
// Postcondition: Main Menu is printed
void printMenu();

//This function takes input from the user
// Precondition: none
// Postcondition: fuction returns the user input as an int
int getInput();

// This function gets an input string from the user
// Postcondition: returns the input message
string get_line(string message);

// This function enqueues an element into the queue
// It takes input from the user but stops and shows 
// a error message when the queue is full
void enqueueElement();

// This function removes the root of the queue
void dequeueElement();

// This function returns true if the queue is full
// and false if the queue isn't full
bool check_is_full();

// This function returns true if the queue is empty
// and returns false if there is anything in the queue
bool check_is_empty();

// This function returns the queue size
int get_queue_size();

// This function displays the first element in the queue
void display_front();

// Print the elements in the queue
void print_queue_elements();

// This function recycles the queue for next use
void recycle(); 

int main() {
	string queueType = "";
	string typeInt = "int";
	string typeString = "string";
	int choice;
	bool flag = false;
	do {
		printMenu();
		choice = getInput();
		if (flag == false && choice != 0) {
			cout << "Please select a heap type first (Option 0)" << endl;
			continue;
		}
		switch(choice){
			case 0:		
				recycle();	// incase the user hits zero again 
				// gets input on what queue type to use
				queueType = get_line("Enter Queue Type (int or string):");
				transform(queueType.begin(), queueType.end(), queueType.begin(), ::tolower);
				if (queueType.compare(typeString) == 0 || queueType.compare(typeInt) == 0){
					if (queueType.compare(typeString) == 0){
						type = 2;
					}
					else type = 1;
				}
				else {
					cout << "Please enter a valid type (int/string)" << endl;
					flag = false;
				}
				cout << endl;
				break;
			case 1:
				enqueueElement(); // enqueue
				cout << endl;
				break;
			case 2:
				dequeueElement(); // dequeue
				cout << endl;
				break;
			case 3:
				if (check_is_full()) {		// checks to see if queue is full
					cout << "The queue is full" << endl;
				}
				else {
					if (check_is_empty()) {	// checks to see if queue is empty
						cout << "The queue is empty" << endl;
					}
					else cout << "The queue is not full" << endl;
				}
				cout << endl;
				break;
			case 4:
				if (check_is_empty()) {
					cout << "The queue is empty" << endl;
				}
				else {
					if (check_is_full()) {
						cout << "The queue is full" << endl;
					}
					else cout << "The queue is not empty" << endl;
				}
				cout << endl;
				break;
			case 5:				// Case 5 get the current size of the queue
				cout << "Queue Size: " << get_queue_size() << endl;
				cout << endl;
				break;
			case 6:
				display_front();// Display the heap root
				cout << endl;
				break;
			case 7:				// Show the entire queue
				print_queue_elements();
				cout << endl;
				break;
		case 8:
			cout << "Exiting Program..." << endl;
			break;
		default:
			cout << "Please enter a valid choice (0-8)" << endl;
		}
	} while(choice !=8);
}

void printMenu() {
	cout << endl;
	cout << "-----MAIN MENU---------------------" << endl;
	cout << "0. Enter Queue Type (int or string)" << endl;
	cout << "1. Enqueue Element" << endl;
	cout << "2. Dequeue Element" << endl;
	cout << "3. Check is_Full" << endl;
	cout << "4. Check is_Empty" << endl;
	cout << "5. Print Queue Size" << endl;
	cout << "6. Display Front Element" << endl;
	cout << "7. Print Queue Elements" << endl;
	cout << "8. Exit Program" << endl;
	cout << endl;
	cout << "Enter Option number: ";
}

int getInput() {
	string command = "";
	int number = 9;
	getline(cin, command); // Take the entire line as input
	for(size_t i = 0; i < command.length(); i++) {
		if(!isdigit(command[i])) { 
			// if there is a non-int in the input, return 9
			return number;
		}
	}
	number = stoi(command); // convert the number string to an int
	return number;
}

// Get the message from the user
string get_line(string message)
{
    string line = "";
    cout << message << endl;
    getline(cin, line);
    return line;
}

// The Enqueue function
void enqueueElement(){
	string input = "";
	string element = "";
	string processed = "";
	cout << "Enter elements separated by comma or space:" << endl;
	getline(cin, input);
	istringstream ss(input); 			// Process the input into a stream
	while (getline(ss, element, ',')){	// Split the stream into small element after seeing a comma
		istringstream ss2(element);		// Remove space in the element
		while (ss2 >> processed){		// Split the word into the smaller word if there is a space
			if (type == 1){				// If type 1
				if(!intHeap.is_full()){ // Check for size max
					intHeap.enqueue(stoi(processed)); //Turn the letter into number and insert
				}
				else {
					cout << "The queue is full"<< endl;
					return;
				}
			}
			else{						// If case two
				if(!intHeap.is_full()){
					stringHeap.enqueue(processed); // Insert the processed element
				}
				else {
					cout << "The queue is full"<< endl;
					return;
				}
			}
		}
	}
	return;
}

// Calls for other functions in the PQ_Heap.h
// Check for types and current size before executing
void dequeueElement(){
	if (type == 1){
		if(!intHeap.is_empty()){
			cout << "Removed: " << intHeap.dequeue() << endl;
		}
		else {
			cout << "The queue is empty"<< endl;
		}
	}
	else {
		if(!stringHeap.is_empty()){
			cout << "Removed: " << stringHeap.dequeue() << endl;
		}
		else {
			cout << "The queue is empty"<< endl;
		}
	}
	return;
}
bool check_is_full(){
	if (type == 1){
		return intHeap.is_full();
	}
	return stringHeap.is_full();
}

bool check_is_empty(){
	if (type == 1){
		return intHeap.is_empty();
	}
	return stringHeap.is_empty();
}

void display_front(){
	if (type == 1){
		if(!intHeap.is_empty()){
			cout << "Front Element: " << intHeap.front() << endl;
		}
		else {
			cout << "The queue is empty"<< endl;
		}
	}
	else {
		if(!stringHeap.is_empty()){
			cout << "Front Element: " << stringHeap.front() << endl;
		}
			
		else {
			cout << "The queue is empty"<< endl;
		}
	}
	return;
}

int get_queue_size(){
	if (type == 1){
		return intHeap.size();
	}
	return stringHeap.size();
}

void print_queue_elements(){
	if (type == 1){
		intHeap.print_queue();
	}
	else stringHeap.print_queue();
	return;
}

void recycle(){
	if (type == 1){
		intHeap.recycle_queue();
	}
	if (type == 2){ 
		stringHeap.recycle_queue();
	}
	return;
}
