// Lab06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "lineType.h"
#include "pointType.h"
using namespace std;

int main()
{
	int x1;
	int y1;
	int x2;
	int y2;

	cout << "enter an x value for the first point: ";
	cin >> x1;
	cout << "enter a y value for the first point: ";
	cin >> y1;
	cout << "enter an x value for the second point: ";
	cin >> x2;
	cout << "enter a y value for the second point: ";
	cin >> y2;

	LineType l(x1, y1, x2, y2);

	l.print();
}



