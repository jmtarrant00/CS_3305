// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#include <iostream> // Provides for input and output
#include <cstdlib>  // Provides the standard Library
#include <string>   // Provides string
#include "DailyTemps.h" // Header file for class used

using namespace std;

int main() {
	string changeTemp = "no"; // Initializes the string used to determine if there's a temp that needs changing
	DailyTemps week1;   // Creates the first week object
	week1.printTemps(); // Prints the temps 
	week1.Freezing();   // Finds freezing days
	week1.Warmest();    // Finds the warmest day
	cout << "Do you need to change a temp? (yes\\no)" << endl; // Asks if there's a day that needs the temp changed
	cin >> changeTemp;  // Takes the input of the above question
	if (changeTemp == "yes") {
		week1.setTemp();  // Changes the temp of the specified day
	}
	
}