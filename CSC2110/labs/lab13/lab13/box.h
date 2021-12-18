#pragma once
#include "rectangle.h"

class Box : public Rectangle {
private:
	double height;
public:
	Box();
	Box(double lengthIn, double widthIn, double heightIn);
	double Volume();	
	void print();
	double area();
};