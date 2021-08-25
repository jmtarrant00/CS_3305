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
	Rectangle();
	Rectangle(double width, double height);
	printRectangle(string objectName);
	~Rectangle();
private:
	getArea(double width, double height);
	getPerimeter(double width, double height);
// Member variables
	double width = 1.00;
	double height = 1.00;
	double area = 0;
	double perimeter = 0;
};

#endif // RECTANGLE_H
