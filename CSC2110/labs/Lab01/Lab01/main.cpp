//==========================================================
//
// Title:      lab 04
// Course:     CSC 2110
// Lab Number: 04
// Author:     rory lange
// Date:       1/28/21
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main() 
{
	//declare variables
	int input;
	string convertedInput;

	//get user input
	cout << "Enter an integer: ";
	cin >> input;
	cout << endl << endl;

	convertedInput = input;

	cout << "Output the individual digits of " << input << " as";
	for (int i = 0; i <= 3; i++)
		cout << " " << convertedInput[i] << " ";
	cout << endl;


}