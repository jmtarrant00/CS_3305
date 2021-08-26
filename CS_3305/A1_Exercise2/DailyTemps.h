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
	DailyTemps();
	setTemp();
	Freezing();
	Warmest();
	printTemps();
private:
	int temps[7] = {0,0,0,0,0,0,0};
	string weekDays[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int freezing = 32;
	int freezingDays;
	int warmest;
	int warmTemp;
	string dayChange;
	int newTemp;

};

#endif // DAILYTEMPS_H
