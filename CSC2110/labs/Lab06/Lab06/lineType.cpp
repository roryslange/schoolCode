#pragma once
#include "lineType.h"
#include "pointType.h"
#include <iostream>

using namespace std;

void LineType::print() {
	//print coordinates
	cout << "Coordinates of point 1: (" << p1.getX() << ", " << p1.getY() << ")\n";
	cout << "Coordinates of point 2: (" << p2.getX() << ", " << p2.getY() << ")\n";

	//print slope
	cout << "Slope of the line: " << slope() << endl;

	//print distance
	cout << "Distance between point 1 and point 2: " << p1.distance(p2) << endl;

	//print equations
	equation();
}

float LineType::slope() {
	if (p1.getX() == p2.getX())
		return 0;

	else
		return ((p2.getY() - p1.getY()) / (p2.getX() - p1.getX()));
}

void LineType::equation() {
	if (p1.getX() == p2.getX())
		cout << "x = " << p1.getX() << endl;

	else if (p1.getY() == p2.getY())
		cout << "y = " << p1.getY() << endl;

	else
		cout << "y = " << slope() << "x + " << (p1.getY() - (slope() * p1.getX())) << endl;
}

LineType::LineType() {
	p1.setX(0);
	p1.setY(0);
	p2.setX(0);
	p2.setY(0);
}

LineType::LineType(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) {
	p1.setX(x1);
	p1.setY(y1);
	p2.setX(x2);
	p2.setY(y2);
}