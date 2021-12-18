// lab10Question2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
    //create pionter variables
    int* x;
    int* y;

    int xVal, yVal;

    xVal = 1;
    yVal = 1738;

    x = &xVal;
    y = &yVal;
    
    cout << "before operation\n";
    cout << "x = " << *x << endl;
    cout << "y = " << *y << endl;


    swap(x, y);

    cout << "after operation\n";
    cout << "x = " << *x << endl;
    cout << "y = " << *y << endl;


}

void swap(int* &xPtr, int &yPtr) {
    xPtr = &yPtr;
}


