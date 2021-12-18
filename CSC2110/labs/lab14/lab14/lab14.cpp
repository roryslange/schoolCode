// lab14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex c1(6, 9);
    Complex c2(2, 3);

    cout << "complex number 1: ";
    c1.print();

    cout << "complex number 2: ";
    c2.print();

    Complex sol = c1 + c2;
    cout << "\nAfter addition operations\n";
    sol.print();
    
    Complex sol1 = c1 - c2;
    cout << "\nAfter subtraction operations\n";
    sol1.print();

    Complex sol2 = c1 / c2;
    cout << "\nAfter division operations\n";
    sol2.print();


}


