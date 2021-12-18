// lab11Question1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "timer.h"
using namespace std;

Timer* randArray(int input);

int main()
{
	srand(time(nullptr)); //set seed of random number to time

	//create dynamic Timer object
	Timer* t;
	t = new Timer(20, 10);

	int random = (rand() % 9) + 1; //random number 0 < n < 10
	


	//print out timer
	cout << "Dyamically created object:\n";
	cout << "Hours: " << t->getHours() << endl;
	cout << "Minutes: " << t->getMinutes() << endl << endl;

	Timer* arr;

	cout << "Dynamic array of dynamically created objects:\n";
	arr = randArray(random);

}

Timer* randArray(int input)
{
	Timer* objArr = new Timer[input];

	for (int i = 0; i < input; i++) {
		objArr->setHours(10);
		objArr->setMinutes(20);

		cout << "Hours: " << objArr->getHours() << endl;
		cout << "Minutes: " << objArr->getMinutes() << endl;
	}
	return objArr;
}
