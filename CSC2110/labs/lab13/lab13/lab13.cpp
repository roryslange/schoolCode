// lab13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "box.h"
#include <iostream>
using namespace std;


int main()
{
	int box1L, box1W, box1H, box2L, box2W, box2H;

	cout << "Enter Length for box1: ";
	cin >> box1L;

	cout << "Enter Width for box1: ";
	cin >> box1W;

	cout << "Enter Height for box1: ";
	cin >> box1H;

	cout << "Enter Length for box2: ";
	cin >> box2L;

	cout << "Enter Width for box2: ";
	cin >> box2W;

	cout << "Enter Height for box2: ";
	cin >> box2H;
	cout << endl;

	Box box1(box1L, box1W, box1H);
	Box box2(box2L, box2W, box2H);

	cout << "volume of box1: ";
	cout << box1.Volume() << endl;
	cout << "SA of box1: ";
	cout << box1.area();
	cout << endl;
	box1.print();
	cout << endl << endl;

	cout << "volume of box2: ";
	cout << box2.Volume() << endl;
	cout << "SA of box2: ";
	cout << box2.area();
	cout << endl;
	box2.print();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
