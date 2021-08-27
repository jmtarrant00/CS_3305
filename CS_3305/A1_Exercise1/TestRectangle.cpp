// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

int main() {
	// declare width and height variables
	double width;
	double height;
	
	// Create first Rectangle class and print the stats
	Rectangle myRectangle;
	myRectangle.printRectangle("myRectangle:");
	
	// Take user input for the width and height
	cout << "What is the width of your Rectangle?" << endl;
	cin >> width;
	cout << "What is the height of your Rectangle?" << endl;
	cin >> height;
	
	// Create the second Rectangle class and print the stats
	Rectangle yourRectangle(width, height);
	yourRectangle.printRectangle("yourRectangle:");
}
