// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 6

#include <cstdlib>
#include <cassert>
#include <string>
#include <iostream>
#include <array>
#include "bst.h"

using namespace std;

template<class item>
binary_tree_node<item> *buildTree(item *words, int low, int high);

int main(){
	int size = 0;
	binary_tree_node<string> *node;
	string words[31] {"After", "Also", "any", "back", "because", "come", "day", "even", 
					  "first", "give", "how", "its", "look", "most", "new", "now", 
					  "only", "other", "our", "over", "than", "then", "these", "think", 
					  "two", "us", "use", "want", "way", "well", "work"};
							 
	size = (sizeof(words) / sizeof(words[0]));
	node = buildTree(words, 0,  size);
	
	cout << "================= Build Tree =================" << endl;
	cout << endl << node << endl << endl;
	print(node, 0);
	cout << endl << "Balanced? " << check_balanced(node) << endl;
	
	cout << "================= Remove Root =================" << endl;
	string data = node -> data();
	cout << "Remove: " << words[size / 2] << endl;
	bst_remove(node, data);
	print(node, 0);	
	
	return EXIT_SUCCESS;
}

template<class item>
binary_tree_node<item> *buildTree(item *words, int low, int high) {
	if (low > high) {
		return NULL;
	}
	
	int mid = (low + high) / 2;
	
	binary_tree_node<item> *node = new binary_tree_node<item>(words[mid]);
	
	node -> set_left(buildTree(words, low, mid - 1));
	
	node -> set_right(buildTree(words, mid + 1, high));
	
	return node;
	
}