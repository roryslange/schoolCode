#pragma once
#include "rectangle.h"

class Box : public Rectangle {
private:
	double height;

public:

	Box(); //sets default values to 0
	Box(double length, double width, double height); //makes objects with custom values
	void setDimension(double l, double w, double h); //mutator for height and inherited length and width
	double volume(); //calculates volume
	void print(); //prints out area and volume
	double area(); //calculates area
	double getHeight() const; //accessor for private member 'height'
	~Box(); //destructor
};