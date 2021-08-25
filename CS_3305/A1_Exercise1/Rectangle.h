// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	Rectangle();
	Rectangle(double width, double height);
	getArea();
	getPerimeter();
	printRectangle(String objectName);
	~Rectangle();
private: 
	double width = 1.00;
	double height = 1.00;
	double area = 0;
	double perm = 0;
};

#endif // RECTANGLE_H
