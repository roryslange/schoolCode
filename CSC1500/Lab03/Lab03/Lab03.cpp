// Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lab 03 created by Rory Lange on 9/15/21 for CSC 1500 Lab Section 004

#include <iostream>
using namespace std;

int main()
{
	bool A[] = { 0,0,0,0,1,1,1,1 };
	bool B[] = { 0,0,1,1,0,0,1,1 };
	bool C[] = { 0,1,0,1,0,1,0,1 };
	bool temp;
	bool temp1;

	cout << "\nQuestion 1:" << endl;
	for (int i = 0; i < 8; i++) {
		temp = !(A[i] || C[i]);
		cout << (temp && !B[i] || !temp && B[i]);
	}

	cout << "\n\nQuestion 2: " << endl;
	for (int i = 0; i < 8; i++) {
		temp = !(B[i] && !C[i]);
		cout << !(temp && !(A[i] || B[i]));
	}

	cout << "\n\nQuestion 3: " << endl;
	for (int i = 0; i < 8; i++) {
		temp = (A[i] && !B[i] || !A[i] && B[i]);
		temp1 = !(B[i] && !C[i] || !B[i] && C[i]);
		cout << !(temp && !temp1);
	}

	cout << "\n\nQuestion 4: " << endl;
	for (int i = 0; i < 8; i++) {
		temp = !(A[i] && !B[i]);
		cout << !(temp && C[i]);
	}
}


