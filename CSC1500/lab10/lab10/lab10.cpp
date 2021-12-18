// lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArray(const int input[]);
int secure(const int input[]); //return index of error returns -1 if no error
int* fix(const int input[], int index);
int toDecimal(const int input[]);
void printQuestion(const int input[], int problem);

int main()
{
	/*int test[] = { 1,0,1,1,0,0,1 };
	int* fixed;

	int index = secure(test);

	fixed = fix(test, index);

	printArray(test);
	cout << endl;
	printArray(fixed);*/


	////problem 1
	//int p1[] = { 1,1,0,1,0,1,0 };
	//printQuestion(p1, 1);

	////problem 2
	//int p2[] = { 0,0,1,0,1,1,1 };
	//printQuestion(p2, 2);

	////problem 3
	//int p3[] = { 1,0,1,0,1,0,1 };
	//printQuestion(p3, 3);

	////problem 4
	//int p4[] = { 1,0,0,1,0,0,1 };
	//printQuestion(p4, 4);

	////problem 5
	//int p5[] = { 0,1,1,0,0,1,1 };
	//printQuestion(p5, 5);


	cout << "assingment 15:\n";
	int a15[] = { 0,1,0,1,0,1,1 };
	printQuestion(a15, 15);
	

}


int secure(const int input[]) {
	int S1, S2, S4;

	//S1
	if (((input[0] + input[2] + input[4] + input[6]) % 2) == 1)
		S1 = 1;
	else
		S1 = 0;

	//S2
	if (((input[1] + input[2] + input[5] + input[6]) % 2) == 1)
		S2 = 1;
	else
		S2 = 0;
	
	//S4
	if (((input[3] + input[4] + input[5] + input[6]) % 2) == 1)
		S4 = 1;
	else
		S4 = 0;

	if (S1 == 1 || S2 == 1 || S4 == 1)
		return (S1 + (S2 * 2) + (S4 * 4) - 1);
	else
		return -1;

}


int* fix(const int input[], int index) {
	int* fixed = new int[7];

	for (int i = 0; i < 7; i++)
		fixed[i] = input[i];
	fixed[index] = (fixed[index] + 1) % 2;

	return fixed;

}


int toDecimal(const int input[])
{
	if (secure(input) != -1) {
		int* fixed = fix(input, secure(input));
		return (fixed[2] * 8) + (fixed[4] * 4) + (fixed[5] * 2) + (fixed[6] * 1);
	}
	else
		return (input[2] * 8) + (input[4] * 4) + (input[5] * 2) + (input[6] * 1);

}

void printQuestion(const int input[], int problem)
{
	cout << "Problem " << problem << ": \n";
	int* fixed;

	printArray(input);
	cout << endl;

	if (secure(input) != -1) {
		fixed = fix(input, secure(input));
		cout << "there is an error at index " << secure(input) << endl;
		cout << "fixed array: ";
		printArray(fixed);
		cout << "\n";
	}
	else
		cout << "there is no error in this code\n";

	cout << "this code in decimal: " << toDecimal(input) << endl << endl;

}


void printArray(const int input[]) {
	for (int i = 0; i < 7; i++) {
		cout << input[i] << " ";
	}
}

