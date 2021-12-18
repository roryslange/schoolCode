// lab06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void loopSum(int input) {
    int counter = 0;
    int sum = 0;
    for (int i = 1; i <= input; i++) {
        counter++;
        sum += i;
    }
    cout << "sum of " << input << " using a for loop: " << sum << endl;
    cout << "operations used: " << counter << endl;
}

void equationSum(int input) {
    int sum = 0;
    int counter = 3;

    sum = ((input * (input + 1)) / 2);

    cout << "sum of " << input << " using an equation: " << sum << endl;
    cout << "operations used: " << counter << endl;
}

int main()
{
    
    cout << "Looping takes longer:" << endl;
    loopSum(123);
    equationSum(123);

    
    cout << "\nEquation takes longer: " << endl;
    loopSum(2);
    equationSum(2);

}

