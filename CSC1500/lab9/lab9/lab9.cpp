// lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//int* tempArray(int arr[]);
int* Union(int A[], int B[], int size);
int* Intersect(int A[], int B[], int size);
int* Inverse(int A[], int size);
int* Subtract(int A[], int B[], int size); //maybe fix
int Magnitude(int A[], int size);
void printArray(int A[], int size);


int main()
{

	int* temp;


	//zeroes are just blank vales
	//int A[] = { 1,2,3,4,5,6,7,8,9,10 }; //universal
	//int B[] = { 0,2,0,4,0,6,0,8,0,10 }; //2,4,6,8,10
	//int C[] = { 1,0,3,0,5,0,7,0,9,0 }; //1,3,5,7,9
	//int D[] = { 1,2,3,0,5,0,7,0,0,0 }; //1,2,3,5,7
	//


	////problem 1
	//cout << "Problem 1: \n";
	//temp = Intersect(A, D, 10);
	//printArray(temp, 10);
	//cout << endl;

	////problem 2
	//cout << "Problem 2: \n";
	//temp = Intersect(Union(B, C, 10), A, 10);
	//printArray(temp, 10);
	//cout << endl;

	////problem 3
	//cout << "Problem 3: \n";
	//temp = Intersect(Union(Inverse(C, 10), C, 10), A, 10);
	//printArray(temp, 10);
	//cout << endl;

	////problem 4
	//cout << "Problem 4: \n";
	//temp = Subtract(A, D, 10);
	//printArray(temp, 10);
	//cout << endl;


	//int* temp1;
	////problem 5
	//cout << "Problem 5: \n";
	//temp1 = Union(C, D, 10);
	//temp = Union(Inverse(A, 10), temp1, 10);
	////printArray(temp);
	//cout << "Magnitude: " << Magnitude(temp, 10) << endl << endl;

	//
	////problem 6
	//cout << "Problem 6: \n";
	//temp = Intersect(D, C, 10);
	//printArray(temp, 10);
	//cout << endl;

	////problem 7
	//cout << "Problem 7: \n";
	//temp = Intersect(B, C, 10);
	//cout << "Magnitude: " << Magnitude(temp, 10) << endl << endl;

	////problem 8
	//cout << "Problem 8: \n";
	//temp = Union(Union(A, B, 10), Union(C, D, 10), 10);
	//printArray(temp, 10);
	//cout << endl;

	int u[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int a[20] = { 1,2,3,0,5,0,0,8,0,0,0,0,13,0,0,0,0,0,0,0 };
	int b[20] = { 1,0,3,0,5,0,7,0,9,0,11,0,13,0,15,0,17,0,19,0 };
	int c[20] = { 1,2,3,0,5,0,7,0,0,0,11,0,13,0,0,0,17,0,19,0 };

	cout << "Assignment 15:\n";
	temp = Intersect(Union(a, b, 20), c, 20);
	printArray(temp, 20);


}






int* Union(int A[], int B[], int size) {
	
	//int* tempA = tempArray(A);
	//int* tempB = tempArray(B); // make both arr same size
	int* newArr = new int[size];

	for (int i = 0; i < size; i++) {
		newArr[i] = 0;
		if (A[i] != 0) {
			newArr[A[i] - 1] = A[i];
		}
		if (B[i] != 0)
			newArr[B[i] - 1] = B[i];
	}
	
	return newArr;
}



//int* tempArray(int arr[]) {
//	int* ptr = new int[10];
//
//	for (int i = 0; i < 10; i++)
//		ptr[i] = 0;
//
//	for (int i = 0; i <= sizeof(arr); i++) {
//		ptr[arr[i] - 1] = arr[i];
//	}
//	return ptr;
//}

int* Intersect(int A[], int B[], int size) {
	int* newArr = new int[size];

	for (int i = 0; i < size; i++) {
		newArr[i] = 0;
		if (A[i] == B[i])
			newArr[i] = A[i];
	}

	return newArr;
}

int* Inverse(int A[], int size) {
	int* newArr = new int[size];

	for (int i = 0; i < size; i++) {
		if (A[i] == i+1)
			newArr[i] = 0;
		else
			newArr[i] = i + 1;
	}
	return newArr;
}

int* Subtract(int A[], int B[], int size)
{
	int* newArr = new int[size];
	for (int i = 0; i < size; i++) {

		if (A[i] == B[i])
			newArr[i] = 0;
		else
			newArr[i] = i + 1;

	}

	return newArr;
}

int Magnitude(int A[], int size)
{
	int counter = 0;
	
	for (int i = 0; i < size; i++) {
		if (A[i] != 0)
			counter++;
	}
	return counter;
}

void printArray(int A[], int size) {
	int counter = 0;

	cout << "{ ";
	for (int i = 0; i < size; i++) {
		if (A[i] != 0) {
			counter++;
			cout << A[i] << " ";
		}
	}

	if (counter == 0)
		cout << "EMPTY ";

	cout << "}" << endl;
}


