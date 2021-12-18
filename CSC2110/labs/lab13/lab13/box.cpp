#include "box.h"
#include <iostream>
using namespace std;


Box::Box()
{
	height = 0;
	Rectangle::setWidth(0);
	Rectangle::setLength(0);
}

Box::Box(double lengthIn, double widthIn, double heightIn)
{
	height = heightIn;
	Rectangle::setLength(lengthIn);
	Rectangle::setWidth(widthIn);
}

double Box::Volume() {
	return Rectangle::area() * height;
}

void Box::print()
{ //fix
	cout << "height of Box: " << height << endl;
	Rectangle::print();
}

double Box::area()
{
	return (Rectangle::area()*2) + ((Rectangle::getLength()*height)*2) + ((Rectangle::getWidth()*height)*2);
}
