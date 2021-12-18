// lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sizeArr(int input, int base) {
	int counter = 0;

	while (input > 0) {
		input = input / base;
		counter++;
	}

	return counter;
}

void decToBase(int input, int base) {
	int size = sizeArr(input, base);
	int* solution = new int[size];
	int* start = solution;

	while (input > 0) {
		*solution = (input % base);
		input = input / base;
		//cout << *solution;
		solution++;
	}
	
	solution--;
	for (int i = 0; i < size; i++) {
		cout << *solution;
		solution--;
	}
}


int main() {
	
	

	/*cout << "A: ";
	decToBase(15, 2);
	cout << endl;

	cout << "B: ";
	decToBase(38, 16);
	cout << endl;

	cout << "C: ";
	decToBase(54, 6);
	cout << endl;

	cout << "D: ";
	decToBase(19, 8);
	cout << endl;

	cout << "E: ";
	decToBase(27, 3);
	cout << endl;*/

	cout << "Assignment 15:\n";
	decToBase(871, 7);

}



