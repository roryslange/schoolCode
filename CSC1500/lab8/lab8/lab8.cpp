// lab8.cpp : This file contains the 'main' function. Program execution begins and ends there.
// brute force code cracker created by rory lange on 10/22/21


#include <iostream>
#include <string>
using namespace std;

void decode(string cipher);


int main()
{

    //string str = "Whvwlqj wkh Vbvwhp"; // test phrase

    //cout << "Question 1:\n";
    //decode("Wkh qljkw lv orqj dqg zh doo suhwhqg wr vohhs");
    //cout << endl;

    //cout << "Question 2:\n";
    //decode("F xrfqq hnyd mfx gjjs inxhtajwji zsijw ymj gtbqnsl fqqjd");
    //cout << endl;

    //cout << "Question 3:\n";
    //decode("Yx Drebcnki dro vslbkbi gsvv lo exuxygklvo");
    //cout << endl;

    //cout << "Question 4:\n";
    //decode("Epht bsf opu bmmpxfe jo uif eph qbsl");
    //cout << endl;

    //cout << "Question 5:\n";
    //decode("Jrypbzr gb Avtug Inyr");
    //cout << endl;

    //cout << "Assignment: \n";
    //decode("LAOGU LAP BHQBB");
    //cout << endl;

    cout << "assignment 15:\n";
    decode("Lo cebo dy nbsxu iyeb Yfkvdsxo");
    cout << endl;
}


void decode(string cipher) {

    string output; //output of shift

    for (int i = 0; i <= 26; i++) {

        output = ""; //reset output string

        for (int a = 0; a < cipher.length(); a++) {

            if (isupper(cipher[a])) //if uppercase
                output += char(int(cipher[a] + i - 65) % 26 + 65);

            else if (islower(cipher[a])) //if lowercase
                output += char(int(cipher[a] + i - 97) % 26 + 97);

            else //if space
                output += cipher[a];
        }

        cout << output; //display end of calculations
        cout << endl; //next

    }

}





