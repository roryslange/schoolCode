// Lab09Question1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double* max(double* x, double* y) {
    if (*x > *y)
        return x;
    else
        return y;
}

int main()
{
    double* x = new double;
    double* y = new double;

    //get user input
    cout << "x: ";
    cin >> *x;

    cout << "y: ";
    cin >> *y;

    cout << "max value: " << max(*x, *y);




    delete x;
    delete y;
    x = nullptr;
    y = nullptr;

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
