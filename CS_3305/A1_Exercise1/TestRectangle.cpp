// Name: Jonathan Tarrant
// Class: CS 3305/Section 03
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#include <iostream.h>
#include "Rectangle.h"

using namespace std;

class Rectangle {
  private:
	double width = 1;
	double height = 1;
  public:
	myRectangle(double width, double height) {
		double area = getArea(width, height);
		double perm = getPerimenter(width, height);
		cout.setf(ios::left);
		cout.precision(3);
		cout << "myRectangle";
		cout << "------------";
		cout << "Width: " << width;
		cout << "Height: " << height;
		cout << "Area: " << area;
		cout << "Perimeter: " << perm << endl;
	}
	
	getArea(double width, double height) {
		double area = width * height;
		return area;
	}
	
	getPerimenter(double width, double height) {
		double perimeter = (2 * width) + (2 * height);
		return perimeter;
	}
};

int main() {
	myRectangle(1,1);
}
