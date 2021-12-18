// lab16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DynamicArray.h"
#include "CarType.h"
using namespace std;

int main()
{
	cout << "dynamic array of CarType objects\n";

	DynamicArray<CarType> cars(4);

	CarType focus("Ford", "Focus", 2018);
	cars.addElement(focus);

	CarType outback("Subaru", "outback", 2018);
	cars.addElement(outback);

	CarType tacoma("Toyota", "Tacoma", 2017);
	cars.addElement(tacoma);

	for (int i = 0; i < cars.getSize(); i++) {
		cout << "Make: " << cars.getElement(i).getManufacturer() << endl;
		cout << "Model: " << cars.getElement(i).getModel() << endl;
		cout << "Year: " << cars.getElement(i).getYear() << endl;
		cout << endl;

	}


}


