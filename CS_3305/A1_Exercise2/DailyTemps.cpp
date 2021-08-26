// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1


// Libraries to include
#include <iostream>
#include <string>
#include <cstdlib>
#include "DailyTemps.h" // Header File for class

DailyTemps::DailyTemps() {
	// Constructor that takes user input for the temperature of each day
	for(int i = 0; (unsigned)i <= 6; i++) {
		cout << "What is the temperature of " << weekDays[i] << "?" << endl; // Take user input
		cin >> temps[i];                                                     // Enter the temp into the array
	}
}

DailyTemps::setTemp() {
	// Function to change the temp for a given Day
	cout << "Which day would you like to change?" << endl; // Ask the user what day they are changing
	cin >> dayChange;
	cout << "What is the new temp?" << endl;               // Get the new temp from the user
	cin >> newTemp;
	for (int i = 0; (unsigned)i <= 6; i++) {              // Loop through the weekDays array
		if (dayChange == weekDays[i]) {                     // Find the appropriate day to change
			temps[i] = newTemp;                             // Change the temp on that day
			break;
		}
	}
	cout << "The new temperature for " << dayChange << " is " << newTemp << "." << endl; // Output success
	return EXIT_SUCCESS;
}

DailyTemps::Freezing() {
	// This function finds how many days in the week are below freezing (32f)
	freezingDays = 0;
	for(int i = 1; (unsigned)i <= 6; i++){ // Loop through the temps array
		if (temps[i] < 32)                // If the temp at that index is less than or equal to 32, 
			freezingDays++;              // increment the counter for the number of freezing days
	}
	cout << "The number of freezing days this week is " << freezingDays << "." << endl; // Output the number of freezing days
	return EXIT_SUCCESS;
}

DailyTemps::Warmest(){
	warmest = 0;
	warmTemp = temps[0];
	for (int i = 1; (unsigned)i <= 6; i++) { // Loop through the temps array
		if (temps[i] > warmTemp) {         // Compare the temp of the current day to the previous warmest day
			warmTemp = temps[i];           // If the current temp is warmer than the previous warmest day, 
			warmest = i;                  // change the warmest temp to the current temp and set the warmest day to the correct index
		}
	}
	cout << "The warmest day this week is " << weekDays[warmest] << " with a temperature of " << warmTemp << "." << endl;  // print out the day with the warmest temp and what that temp is
	return EXIT_SUCCESS;
}

DailyTemps::printTemps() {
		
}

