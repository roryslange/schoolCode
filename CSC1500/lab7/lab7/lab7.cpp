// lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void bubbleSortNew(int arr[], int size);

int main()
{

	//variables
	int arr1[] = { 1,3,7,5,2,4,6,8,9,10 };
	int arr2[] = { 10,9,8,7,6,5,4,3,2,1 };
	int arr3[] = { 1,10,2,9,3,8,4,7,5,6 };

	cout << "Question 1:" << endl;
	bubbleSortNew(arr1, 9);
	cout << "Question 2:" << endl;
	bubbleSortNew(arr2, 9);
	cout << "Question 3:" << endl;
	bubbleSortNew(arr3, 9);


}


void bubbleSortNew(int arr[], int size) {
	int actions = 0;
	int temp;
	int a;

	cout << "Array before sorting: \n";
	for (int i = 0; i <= size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;


	for (int i = 0; i < size; i++) {

		if (arr[i] > arr[i + 1]) {
			a = i;
			while (arr[a] > arr[a + 1]) { //if out of order
				temp = arr[a];
				arr[a] = arr[a + 1];
				arr[a + 1] = temp;
				actions += 3;
				a--;
			}
		}
		else
			actions += 1; //in order

	}

	cout << "Array after sorting: \n";
	for (int i = 0; i <= size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Actions performed: " << actions << endl << endl;
}



