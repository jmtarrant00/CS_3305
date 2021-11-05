// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 6

#include <cstdlib>	// Provides the std lib
#include <iostream> // Provides cout and cin
#include <string>	// Provides the string type
#include "bst.h"	// inlcude the bst class and bintree class

using namespace std; // allows for all std lib items to be used

// This function is used to print out the words that are 
// passed to it by the inorder traversal function
void printWord(string word);

int main() {
	binary_search_tree<string> dupes;
	binary_tree_node<string> *root;
	string input;
	string temp = ""; // Stores all the chars until the next space
	
	while (input != "-1") {
		cout << "Please input something. Input -1 to end" << endl;
		getline(cin, input); // takes the entire line as input, allowing for spaces
		cout << endl;
		
		if (input == "-1") {
			break; // exit the loop if input is "-1"
		}
		
		cout << "Original Text: \n" << input << endl; // Prints the entered text
		cout << endl;
		
		for (unsigned int i = 0; i < input.length(); i++) { // iterates through the input 
			if (input[i] != ' ') { // skips over spaces so that "a" and "a " aren't considered different things
				temp = temp + input[i]; // add the character to the temp string
			}
			if (input[i] == ' ' || i == (input.length() - 1)) { // puts temp in the BST when you reach a space or the end of the input
				dupes.insert(temp);
				temp = ""; // clears temp
			}
		}
		
		cout << "Processed Text: " << endl;
		inorder(printWord, dupes.get_root()); // traverses the BST and prints out the 
		input = ""; // clears the input
		root = dupes.get_root(); // gets the root node of the tree
		tree_clear(root); // clears the tree
		cout << "\n\n\n" << endl;
	} 
	
	
	return EXIT_SUCCESS;
}

void printWord(string word) {
	cout << word << " ";
}