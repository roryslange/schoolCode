// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//created by rory lange on 9/20/21 for CSC 1500
//

#include <iostream>
#include "box.h"
#include "rectangle.h"
using namespace std;

int main()
{
	Box box1(20, 30, 10);
	Box box2(14.5, 7.6, 4.5);

	box1.print();
	box2.print();

	cout << endl;
}

