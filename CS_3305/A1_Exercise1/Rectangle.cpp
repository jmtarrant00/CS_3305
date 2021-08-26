// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {
	width = 1.00;
	height = 1.00;
	area = getArea(width, height);
	perimeter = getPerimeter(width, height);
}

Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
	area = getArea(w, h);
	perimeter = getPerimeter(w, h);
}

Rectangle::getPerimeter(double width, double height) {
	return (2 * width) + (2 * height);
}

Rectangle::getArea(double width, double height) {
	return (width * height);
}

Rectangle::printRectangle(string obj) {
	cout.setf(ios::fixed, ios::floatfield);
	//cout.setf(ios::left, ios::adjustfield);
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