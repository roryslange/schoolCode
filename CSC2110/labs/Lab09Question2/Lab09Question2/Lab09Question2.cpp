// Lab09Question2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
    int length;
    int* arr;
    int* start;
    int counter = 0;
    int temp;
    int sum = 0;

    cout << "Enter a length of the dynamic array: ";
    cin >> length; //get length from user

    arr = new int[length]; //create dynamic arr
    start = arr; //set start equal to address of first item

    while (counter < length) {
        cout << "Enter a value for index " << counter << ": ";
        cin >> temp; //get item

        *arr = temp; //put in array
        arr++; //next item
        counter++;
    }

    while (start != arr) { //iterate through array and add items
        sum += *start; //add together
        start++;
        //cout << sum << endl;
    }

    cout << "Sum of array: " << sum << endl;


}


