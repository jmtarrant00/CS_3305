// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 6

#include <cstdlib>	// provides the std lib
#include <string>	// provides the string type
#include <iostream> // Provides cout
#include "bst.h"	// includes bst and bintree header files

using namespace std; // allows for all std lib items to be used

// This function takes an array of words, the lowest index and the highest index
// and recursively creates a binary search tree from the array. 
// It splits the array into two parts and those two parts make up 
// the left and right child of the BST
// It returns a pointer to the root node of thee
template<class item>
binary_tree_node<item> *buildTree(item *words, int low, int high);

int main(){
	int size = 0;
	binary_tree_node<string> *node;
	string words[31] {"After", "Also", "any", "back", "because", "come", "day", "even", 
					  "first", "give", "how", "its", "look", "most", "new", "now", 
					  "only", "other", "our", "over", "than", "then", "these", "think", 
					  "two", "us", "use", "want", "way", "well", "work"};
							 
	size = (sizeof(words) / sizeof(words[0])); // calculates the size of the array
	node = buildTree(words, 0,  size); // starts build tree function 
	
	cout << "================= Build Tree =================" << endl;
	cout << endl << node << endl << endl;
	print(node, 0); // prints out the BST in tree form
	cout << endl << "Balanced? " << check_balanced(node) << endl; // Checks for tree balance and outputs the depth of the tree if balanced
	
	cout << "================= Remove Root =================" << endl;
	string data = node -> data(); // Gets the word of the root node
	cout << "Remove: " << data << endl; // prints out the word to be removed
	bst_remove(node, data); // calls the remove function, which then reorganizes the tree
	print(node, 0);	// prints out the new tree
	
	return EXIT_SUCCESS;
}

template<class item>
binary_tree_node<item> *buildTree(item *words, int low, int high) {
	/** BASE CASE */
	if (low > high) { // checks to see if the upper bound is smaller than the lower bound
		return NULL;
	}
	
	int mid = (low + high) / 2; // finds the index of the middle of the array
	binary_tree_node<item> *node = new binary_tree_node<item>(words[mid]); // creates a new node from the word in the middle of the array
	
	node -> set_left(buildTree(words, low, mid - 1)); // recursive call for the left child of the node
	node -> set_right(buildTree(words, mid + 1, high)); // recursive call for the right child of the node
	
	return node; // returns the root node of the subtree
	
}