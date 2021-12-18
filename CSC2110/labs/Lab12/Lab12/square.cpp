#pragma once
#include <iostream>
#include "square.h"
using namespace std;

void Square::draw() {
	cout << " __" << endl;
	cout << "|__|" << endl;
	cout << "Color: " << color << endl;
}

void Square::move(int inputX, int inputY) {
	x = inputX;
	y = inputY;
}

void Square::setColor(string input)
{
	color = input;
}

string Square::getColor() const
{
	return color;
}

Square::Square(int inputX, int inputY)
{
	x = inputX;
	y = inputY;
}
