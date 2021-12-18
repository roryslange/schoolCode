// lab12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;


int main()
{
    srand(time(NULL));
    int card1 = rand() % 12;
    int card2 = rand() % 12;
    float odds = 1;
    int sum;
    int cards[] = { 1,2,3,4,5,6,7,8,9,10,10,10,10 };
    string names[] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };

    cout << "Blackjack Risk Calculator\n\n";
    cout << "Opening hand: ";
    cout << names[card1] << " " << names[card2] << endl;

    sum = cards[card1] + cards[card2];
    cout << sum << endl;

    if (sum <= 11) {
        cout << "you cannot bust on this hit\n";
        cout << "odds you dont bust on this hit: " << odds << endl;
    }
    else {
        int availableCards = 13;
        int val = 21 - sum;
        if (cards[card1] >= val)
            availableCards--;
        if (cards[card2] >= val)
            availableCards--;

        odds = ((float)val) / availableCards;

        if (odds >= .5)
            cout << "you are less likely to bust if you hit on this hand\n";
        else
            cout << "you are more likely to bust if you hit on this hand\n";

        cout << "odds you dont bust on this hit: " << odds << endl;

    }
}

