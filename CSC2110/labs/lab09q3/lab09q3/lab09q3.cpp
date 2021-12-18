// lab09q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{


    //int numList[6] = { 25,37,62,78,92,13 };
    //int* listPrt = numList;
    //int* temp = listPrt + 2;
    //int num;

    //*listPrt = *(listPrt + 1) - *listPrt;
    //listPrt++;
    //num = *temp;
    //temp++;
    //listPrt++;
    //*listPrt = *temp;
    //*temp = num;
    //listPrt = listPrt + 2;
    //*listPrt = *(listPrt - 1);

    //for (int i = 0; i < 6; i++)
    //    cout << numList[i] << " ";

    

    //int* intArrayPtr;
    //int* temp;
    //intArrayPtr = new int[5];
    //*intArrayPtr = 7;
    //temp = intArrayPtr;

    //for (int i = 1; i < 5; i++) {
    //    intArrayPtr++;
    //    *intArrayPtr = *(intArrayPtr - 1) + 2 * i;
    //}
    //intArrayPtr = temp;

    //for (int i = 0; i < 5; i++) {
    //    cout << *intArrayPtr << " ";
    //    intArrayPtr++;
    //}
    //cout << endl;




    int* intList;
    intList = new int[5];
    for (int i = 0; i < 5; i++)
        cin >> intList[i];

    for (int i = 4; i > 0; i--)
        intList[i] = intList[i] + intList[i - 1];

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << intList[i] << " ";
        sum = sum + intList[i];
    }

    cout << endl << "Sum = " << sum << endl;


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
