#include "box.h"
#include "rectangle.h"
#include <iostream>

using namespace std;

Box::Box() {
	setDimension(0, 0, 0);
}

Box::Box(double length, double width, double heightSet) {
	setDimension(length, width, heightSet);
}

void Box::setDimension(double l, double w, double h) {
	height = h;
	Rectangle::setDimension(l, w);
}

double Box::getHeight() const {
	return height;
}

double Box::volume() {
	return getLength() * getWidth() * height;
}

void Box::print() {
	cout << "Volume of the box is: ";
	cout << volume() << endl;

	cout << "Area of the box is: ";
	cout << area() << endl;
}

double Box::area() {
	return 2 * (Rectangle::area()) +
		2 * (getLength() * height) + 
		2 * (getWidth() * height);
}

Box::~Box() {
	cout << "Memory cleared from Box object" << endl;
}
