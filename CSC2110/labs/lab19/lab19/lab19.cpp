// lab19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<float> list, int length);
int seqSearch(vector<float> list, int listLength, int searchItem);


int main()
{
	vector<float> arr;

	float input;

	do
	{
		cout << "Enter a float (negative to end): ";
		cin >> input;
		if (input >= 0)
			arr.push_back(input);


	} while (input >= 0);

	cout << "List of values:\n";

	for (int i = 0; i < arr.size(); i++) {
		cout << " ";
		cout << arr[i];
	}

	bubbleSort(arr, arr.size());

	cout << "\n\nSorted list:\n";

	for (int i = 0; i < arr.size(); i++) {
		cout << " ";
		cout << arr[i];
	}

	cout << "\n\n";

	float search;
	int searchIndex;
	cout << "Enter a term to search: ";
	cin >> search;

	searchIndex = seqSearch(arr, arr.size(), search);

}

void bubbleSort(vector<float> list, int length) {
	float temp;

	for (int i = 1; i < length; i++) {

		for (int index = 0; index < length-i; index++) {

			if (list[index] > list[index + 1]) {

				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;

			}

		}

	}

}

int seqSearch(vector<float> list, int listLength, int searchItem)
{
	int loc;
	bool found = false;
	loc = 0;

	while (loc < listLength && !found)
	{
		if (list[loc] == searchItem)
			found = true;
		else
			loc++;
	}
	if (found)
	{
		cout << "The element was found in position " << loc << " using sequential search.";
		return loc;
	}
	else
		return -1;

}