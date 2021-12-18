#include "rectangle.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}

Rectangle::Rectangle(double lengthIn, double widthIn)
{
	length = lengthIn;
	width = widthIn;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setWidth(double input)
{
	width = input;
}

void Rectangle::setLength(double input)
{
	length = input;
}

double Rectangle::area()
{
	return length*width;
}

double Rectangle::perimeter()
{
	return (2*length) + (2*width);
}

void Rectangle::print()
{ //fix
	cout << "length of rectangle: " << length << endl;
	cout << "width of rectangle: " << width << endl;
}
