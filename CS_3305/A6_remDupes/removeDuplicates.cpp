// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 6

#include <cstdlib>
#include <iostream>
#include <string>
#include "bst.h"

using namespace std;

void printWord(string word);

int main() {
	binary_search_tree<string> dupes;
	binary_tree_node<string> *root;
	string input;
	string temp = "";
	
	while (input != "-1") {
		cout << "Please input something. Input -1 to end" << endl;
		getline(cin, input); 
		cout << endl;
		
		if (input == "-1") {
			break;
		}
		
		cout << "Original Text: \n" << input << endl;
		cout << endl;
		
		for (unsigned int i = 0; i < input.length(); i++) {
			if (input[i] != ' ') {
				temp = temp + input[i];
			}
			if (input[i] == ' ' || i == (input.length() - 1)) {
				dupes.insert(temp);
				temp = "";
			}
		}
		
		cout << "Processed Text: " << endl;
		inorder(printWord, dupes.get_root());
		input = "";
		root = dupes.get_root();
		tree_clear(root);
		cout << "\n\n\n" << endl;
	} 
	
	
	return EXIT_SUCCESS;
}

void printWord(string word) {
	cout << word << " ";
}