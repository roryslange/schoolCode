#pragma once
#include <iostream>
#include "triangle.h"
using namespace std;

void Triangle::draw() {
	cout << " /| " << endl;
	cout << "/_| " << endl;
	cout << "Color: " << color << endl;
}

//void Triangle::move(int inputX, int inputY) {
//	x = inputX;
//	y = inputY;
//}

void Triangle::move(int inputX, int inputY)
{
	x = inputX;
	y = inputY;
}

void Triangle::setColor(string input)
{
	color = input;
}

string Triangle::getColor() const
{
	return color;
}

Triangle::Triangle(int inputX, int inputY)
{
	x = inputX;
	y = inputY;
}
