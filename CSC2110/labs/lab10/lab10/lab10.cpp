// lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void fillUp(int data[], int size);
void showArray(int values[], int size);



int main()
{
    int size = 0;

    //declare a pointer to a dynamic array
    int* p;

    cout << "how many values: ";
    cin >> size;

    //create the dynamic array
    p = new int[size];

   

    //call fillup() function with the dynamic array
    fillUp(p, size);

    cout << "you entered " << size << " numbers: \n";

    //call showArray() function with the dynamic array
    showArray(p, size);

    // delete the dynamic array
    delete p;

}

void fillUp(int data[], int length) {
    cout << "Enter " << length << " numbers:\n";
    for (int i = 0; i < length; i++) {
        cin >> data[i];
    }
}

void showArray(int values[], int size) {
    for (int i = 0; i < size; i++) {
        cout << values[i] << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
