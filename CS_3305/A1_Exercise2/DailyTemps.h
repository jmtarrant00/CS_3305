// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#ifndef DAILYTEMPS_H
#define DAILYTEMPS_H
#include <string>

using namespace std;

class DailyTemps
{
public:
	DailyTemps(); // Constructor
	setTemp(); // Changes the temp of a user specified day
	Freezing(); // Finds the number of freezing days
	Warmest(); // Finds the warmest day
	void printTemps(); // Prints the table of temps
private:
	int temps[7] = {0,0,0,0,0,0,0}; // Initializes the array of temperatures
	string weekDays[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; // Provides week days to correspond with the temps array
	int freezingDays; // Stores the number of freezing days
	int warmest; // Stores the index of the warmest day
	int warmTemp; // Stores the temp of the warmest day
	string dayChange; // Stores the day to change the temp of
	int newTemp; // stores the new temp the user specifies

};

#endif // DAILYTEMPS_H
