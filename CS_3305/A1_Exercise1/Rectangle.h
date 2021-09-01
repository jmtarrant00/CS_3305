// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>

using namespace std;

class Rectangle {
//member functions
public:
	Rectangle(); // Constructor
	Rectangle(double width, double height); // Constructor with user defined dimensions 
	void printRectangle(string objectName); // Prints the stats
	double getWidth() const;
	double getHeight() const;
	~Rectangle();
private:
	double getArea(); // Calculates the area of the rectangle
	double getPerimeter(); // Calculates the perimeter of the rectangle
// Member variables
	double width = 1.00;
	double height = 1.00;
	double area = 0;
	double perimeter = 0;
};

#endif // RECTANGLE_H
