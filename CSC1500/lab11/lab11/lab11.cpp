// lab11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int* decToBin(int num); //put num in spots in a size 7 array
int* createSecurity(int num[]); //rearrange and security bits
void printArray(const int input[]); //print
void problem(int num); //do all the functions for each problem


int main()
{

	////problem 1
	//cout << "problem 1: \n";
	//cout << "decimal: " << 15 << endl;
	//cout << "Hamming code: ";
	//problem(15);
	//cout << endl << endl;


	////problem 2
	//cout << "problem 2: \n";
	//cout << "decimal: " << 7 << endl;
	//cout << "Hamming code: ";
	//problem(7);
	//cout << endl << endl;

	////problem 3
	//cout << "problem 3: \n";
	//cout << "decimal: " << 12 << endl;
	//cout << "Hamming code: ";
	//problem(12);
	//cout << endl << endl;

	////problem 4
	//cout << "problem 4: \n";
	//cout << "decimal: " << 2 << endl;
	//cout << "Hamming code: ";
	//problem(2);
	//cout << endl << endl;

	////problem 5
	//cout << "problem 5: \n";
	//cout << "decimal: " << 6 << endl;
	//cout << "Hamming code: ";
	//problem(6);
	//cout << endl << endl;


	cout << "assignment 15: \n";
	cout << "decimal " << 12 << endl;
	cout << "Hamming code: ";
	problem(2);
	cout << endl;
}


int* decToBin(int num) {
	int* ptr = new int[7];
	int temp;
	int counter = 3;

	while (counter >= 0) { //store 4 bits in reverse order
		temp = num % 2;
		num = num / 2;
		ptr[counter] = 0;
		ptr[counter] = temp;
		counter--;
	}

	return ptr;

}



int* createSecurity(int num[]) {
	int s1, s2, s4;
	s1 = (num[0] + num[1] + num[3]) % 2;
	s2 = (num[0] + num[2] + num[3]) % 2;
	s4 = (num[1] + num[2] + num[3]) % 2;

	//move security bits in
	num[6] = num[3];
	num[5] = num[2];
	num[4] = num[1];
	num[2] = num[0];
	num[3] = s4;
	num[1] = s2;
	num[0] = s1;

	return num;
}

void problem(int num) {
	int* probPtr = decToBin(num); //create array
	probPtr = createSecurity(probPtr); //rearrange and create security bits
	printArray(probPtr); //print
	delete probPtr; //free memory
}

void printArray(const int input[]) {
	for (int i = 0; i < sizeof(input) - 1; i++) {
		cout << input[i] << " ";
	}
}