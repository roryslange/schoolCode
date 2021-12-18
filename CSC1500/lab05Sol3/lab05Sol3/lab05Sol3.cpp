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
	//int* solution = new int[sizeArr(input, base)];

	char solution[10];

	int temp;
	int counter = 0;

	while (input > 0) {
		temp = input % base;
		solution[counter] = temp;
		counter++;
		//solution++;
	}
	cout << solution;
	/*for (int i = 0; i < sizeArr(input, base); i++) {
		cout << *solution;
		solution--;
	}*/
}


int main() {
	cout << sizeArr(27, 3) << endl;
	decToBase(11, 2);
}



