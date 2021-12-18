#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle() {
	setDimension(0, 0);
}

Rectangle::Rectangle(double length, double width) {
	setDimension(length, width);
}

void Rectangle::setDimension(double l, double w) {
	length = l;
	width = w;
}

double Rectangle::area() const {
	return length * width;
}

double Rectangle::perimeter() const {
	return (2 * length) + (2 * width);
}

void Rectangle::print() const {
	cout << "Rectangle Area: " << area() << endl;
	cout << "Rectangle Perimeter: " << perimeter() << endl;
}

double Rectangle::getLength() const {
	return length;
}

double Rectangle::getWidth() const {
	return width;
}

Rectangle::~Rectangle() {
	cout << "Memory cleared from Rectangle object" << endl;
}
