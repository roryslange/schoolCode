// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //bool arrays
    bool rocket[16] = { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1 };
    bool astronaut[16] = { 0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1 };
    bool trained[16] = { 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1 };
    bool educated[16] = { 0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1 };


    //placeholder values
    bool prop1;
    bool prop2;
    bool prop3;
    bool conclusion;


    for (int i = 0; i < 16; i++) {

        //create placeholder variables
        prop1 = (!(rocket[i] && (!astronaut[i])));
        prop2 = (!(astronaut[i] && (!trained[i])));
        prop3 = (!(trained[i] && (!educated[i])));
        conclusion = (!(educated[i] && (!rocket[i])));

        if (prop1 == 1 && prop2 == 1 && prop3 == 1 && conclusion == 0) {  //test for invalid condition

            cout << rocket[i] << astronaut[i] << trained[i] << educated[i];
            cout << "\tInvalid";

            cout << endl;
        }

    }

}



