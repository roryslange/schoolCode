// Lab02.cpp : This file contains the 'main' function. Program execution begins and ends there.
// created by Rory Lange on 9/8/21
// resubmitted on 9/19/21 because i forgot to put the whole statement in parenthesis
// Lab 02 CSC 1500

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare arrays
	bool A[] = { 0,0,0,0,1,1,1,1 };
	bool B[] = { 0,0,1,1,0,0,1,1 };
	bool C[] = { 0,1,0,1,0,1,0,1 };

	const int w = 5;


	////for (int i = 0; i < 8; i++) {
	////	cout << A[i] << B[i] << C[i] << endl;
	////}

	////question 1
	//cout << "\n\nQuestion 1" << endl;
	//cout << setw(w) << left << "A" << setw(w) << left << "B" << setw(w) << left << "C"
	//	<< setw(w) << left << "(A && B) || (A && C)" << endl;
	//cout << "----------------------------------------------------------------------------"
	//	<< endl;

	//for (int i = 0; i < 8; i++) {
	//	cout << setw(w) << left << A[i] << setw(w) << left << B[i] << setw(w) << left << C[i]
	//		<< setw(w) << left << ((A[i] && B[i]) || (A[i] && C[i]));
	//	cout << endl;
	//}
	//


	////question 2
	//cout << "\n\nQuestion 2" << endl;
	//cout << setw(w) << left << "A" << setw(w) << left << "B" << setw(w) << left << "C"
	//	<< setw(w) << left << "(A && C) && (B && !C)" << endl;
	//cout << "----------------------------------------------------------------------------"
	//	<< endl;

	//for (int i = 0; i < 8; i++) {
	//	cout << setw(w) << left << A[i] << setw(w) << left << B[i] << setw(w) << left << C[i]
	//		<< setw(w) << left << ((A[i] && C[i]) && (B[i] && !C[i]));
	//	cout << endl;
	//}



	////question 3
	//cout << "\n\nQuestion 3" << endl;
	//cout << setw(w) << left << "A" << setw(w) << left << "B" << setw(w) << left << "C"
	//	<< setw(w) << left << "(A || B) && !(B || C)" << endl;
	//cout << "----------------------------------------------------------------------------"
	//	<< endl;

	//for (int i = 0; i < 8; i++) {
	//	cout << setw(w) << left << A[i] << setw(w) << left << B[i] << setw(w) << left << C[i]
	//		<< setw(w) << left << ((A[i] || B[i]) && !(B[i] || C[i]));
	//	cout << endl;
	//}



	////question 4
	//cout << "\n\nQuestion 4" << endl;
	//cout << setw(w) << left << "A" << setw(w) << left << "B" << setw(w) << left << "C"
	//	<< setw(w) << left << "(A || (B && C)) && (!A && !B)" << endl;
	//cout << "----------------------------------------------------------------------------"
	//	<< endl;

	//for (int i = 0; i < 8; i++) {
	//	cout << setw(w) << left << A[i] << setw(w) << left << B[i] << setw(w) << left << C[i]
	//		<< setw(w) << left << ((A[i] || (B[i] && C[i])) && (!A[i] && !B[i]));
	//	cout << endl;
	//}



	////question 5
	//cout << "\n\nQuestion 5" << endl;
	//cout << setw(w) << left << "A" << setw(w) << left << "B" << setw(w) << left << "C"
	//	<< setw(w) << left << "((B && C) || (C && A)) && (!(A || B) && C)" << endl;
	//cout << "----------------------------------------------------------------------------"
	//	<< endl;

	//for (int i = 0; i < 8; i++) {
	//	cout << setw(w) << left << A[i] << setw(w) << left << B[i] << setw(w) << left << C[i]
	//		<< setw(w) << left << (((B[i] && C[i]) || (C[i] && A[i])) && (!(A[i] || B[i]) && C[i]));
	//	cout << endl;
	//}

	
	cout << "Assignment 15:\n";
	cout << setw(w) << left << "A" << setw(w) << left << "B" << setw(w) << left << "C"
		<< setw(w) << left << "!(A XOR C) NAND (B OR A)" << endl;
	cout << "----------------------------------------------------------------------------"
		<< endl;
	for (int i = 0; i < 8; i++) {
	cout << setw(w) << left << A[i] << setw(w) << left << B[i] << setw(w) << left << C[i]
		<< setw(w) << left << !(!(A[i] ^ C[i]) && (B[i] || A[i]));
	cout << endl;
}

}


