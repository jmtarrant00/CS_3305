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
	Rectangle myRectangle;
	Rectangle yourRectangle(3,4);
	myRectangle.printRectangle("myRectangle:");
	yourRectangle.printRectangle("yourRectangle:");
}
