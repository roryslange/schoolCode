// lab20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<float>& list, int length);
int binarySearch(const vector<float> list, float searchItem);
void printArray(vector<float> list);

int main()
{
	float input = 0;
	vector<float> arr;

	while (input >= 0) {
		cout << "enter a number (negative to end): ";
		cin >> input;

		if (input >= 0)
			arr.push_back(input);
	}


	insertionSort(arr, arr.size());
	cout << "List of values: \n";
	printArray(arr);
	cout << endl;

	cout << "Search for value in the list: ";
	cin >> input;

	if (binarySearch(arr, input) == -1)
		cout << "element was not found in the arr\n";
	else
		cout << "element was found at index: " << binarySearch(arr, input);

}

void insertionSort(vector<float>& list, int length)
{
	int firstOutOfOrder;
	int location;
	float temp;

	for (firstOutOfOrder = 1; firstOutOfOrder < length; firstOutOfOrder++) {
		if (list[firstOutOfOrder] < list[firstOutOfOrder - 1]) {
			temp = list[firstOutOfOrder];
			location = firstOutOfOrder;

			do {
				list[location] = list[location - 1];
				location--;
			} while (location > 0 && list[location - 1] > temp);

			list[location] = temp;
		}
	}
}

void printArray(vector<float> list)
{
	for (int i = 0; i < list.size(); i++)
		cout << " " << list[i];
}

int binarySearch(const vector<float> list, float searchItem)
{
    int first = 0;
    int last = list.size() - 1;
    int mid;

    bool found = false;
    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if (list[mid] == searchItem)
            found = true;
        else if (list[mid] > searchItem)
            last = mid - 1;
        else
            first = mid + 1;
        
    }

	if (found) 
		return mid;
	
	else
		return -1;
}