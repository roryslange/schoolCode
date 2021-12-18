// Lab02Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//created by Rory Lange on 9/9/21

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    char letters[1024];

    cout << "Enter a string: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        letters[i] = input[i];

        //-32 to turn from lower to upper
        if (letters[i] > 90)
            letters[i] -= 32;

        cout << letters[i];
    }

    cout << endl;
    

}

