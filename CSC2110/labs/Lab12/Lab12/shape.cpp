#include "shape.h"
#include <iostream>
#pragma once

using namespace std;

Shape::Shape(int inputX, int inputY)
{
	x = inputX;
	y = inputY;
}

void Shape::display()
{
	cout << "Coordinates: (" << x << ", " << y << ")\n";
	draw();
	cout << endl;
}
