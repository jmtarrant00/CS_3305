// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#include <iostream> // Provides input and output
#include <iomanip>  // Provides setw
#include "Rectangle.h" // Header file for class

using namespace std;

Rectangle::Rectangle() {
	// Constructor
	width = 1.00;
	height = 1.00;
	area = getArea(); 
	perimeter = getPerimeter();
}

Rectangle::Rectangle(double w, double h) {
	// Constructor with user defined dimensions
	width = w;
	height = h;
	area = getArea();
	perimeter = getPerimeter();
}

double Rectangle::getWidth() const{
	// Reads the width of the rectangle
	return width;
}

double Rectangle::getHeight() const{
	// Reads the height of the rectangle
	return height;
}

double Rectangle::getArea() {
	// Calculates the area of the rectangle
	return (width * height);
}

double Rectangle::getPerimeter() { 
	// Calculates the perimeter of the rectangle
	return (2 * (width + height)); 
}

void Rectangle::printRectangle(string obj) {
	// Prints the stats of the Rectangle
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cout << obj << '\n';
	cout << "------------" << '\n';
	cout << "Width:     " << width << '\n';
	cout << "Height:    " << height << '\n';
	cout << "Area:      " << area << '\n';
	cout << "Perimeter: " << setw(2) << perimeter << '\n';
	cout << '\n';
	cout << "Rectangle " << obj << " is " << width << " units wide and " << height << " units high. \n" << endl;
}

Rectangle::~Rectangle()
{
}