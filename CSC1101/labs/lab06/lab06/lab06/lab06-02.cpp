//==========================================================
//
// Title:      Lab 06
// Course:     CSC 1101
// Lab Number: 06
// Author:     Rory Lange
// Date:       2/5/21
// Description:
//   Create an app that tells when an item reaches
// room temp.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main() {
	//declare variables
	const float conversion = 206264.8;
	const int w = 25;
	const int w1 = 20;

	string planet;
	float AU;
	float PSC;
	
	//header
	cout << "PLANET PALS DISTANCE CONVERSIONS" << endl;
	cout << "----------------------------------------" << endl << endl;

	//user input
	cout << setw(w) << left << "Enter planet to travel to: ";
	getline(cin, planet);

	cout << setw(w) << left << "Distance to planet (AU): ";
	cin >> AU;
	cout << endl;

	//math
	PSC = AU / conversion;
	
	//report results
	cout << fixed << setprecision(10);
	cout << setw(w) << left << "Planet: "
		<< right << setw(w1) << planet << endl;
	cout << setw(w) << left << "Distance to (AU): "
		<< right << setw(w1) << AU << endl;
	cout << setw(w) << left << "Distance to (Parsec): "
		<< right << setw(w1) << PSC << endl;

	//ending
	cout << "\nEnd of application.";



}