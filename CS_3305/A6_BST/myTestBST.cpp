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

binary_tree_node buildTree(item *words, int size);

int main(){
	int size = 0;
	string words[31] {"After", "Also", "any", "back", "because", "come", "day", "even", 
					  "first", "give", "how", "its", "look", "most", "new", "now", 
					  "only", "other", "our", "over", "than", "then", "these", "think", 
					  "two", "us", "use", "want", "way", "well", "work"};
							 
	size = (sizeof(words) / sizeof(words[0]));
	buildTree(words, size);
	
	return EXIT_SUCCESS;
}

template<class item> item buildTree(item *words, int size) {
	binary_search_tree<item> myBST;
	int mid = size / 2;
	
	item left[mid];
	item right[mid];
	
	if 
	
	item arrMid = words[mid];
	myBST.insert(arrMid);
	for (int i = 0; i < mid; i++){
		right[i] = words[i];
	}
	
	for (int j = (size + 1); j < size; j++) {
		left[j] = words[j];
	}
	
	buildTree(right, mid);
	buildTree(left, mid);
}