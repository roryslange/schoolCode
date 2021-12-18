//==========================================================
//
// Title:      lab0802
// Course:     CSC 1101
// Lab Number: 08
// Author:     rory lange
// Date:       2/11/21
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
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
	//header
	cout << "SATIN STYLERS PAINT COST CALCULATOR" << endl;
	cout << "---------------------------------------" << endl << endl;

	//declare variables
	int painters;
	int width;
	int height;

	int area;
	double cost;
	double time;
	const int wallRate = 1.75;
	const int w = 30;
	const int w1 = 15;
	const int paintRate = 20;



	// get user input
	cout << "How many painters (1-4): ";
	cin >> painters;
	cout << endl;

	cout << "Width of wall in feet (10 - 40): ";
	cin >> width;
	cout << endl;

	cout << "Height of wall in feet (7-11): ";
	cin >> height;
	cout << endl;

	//check if any variables are bad

	if (painters < 1 || painters > 4)
		cout << "Invalid number of painters (" << painters << ")." << endl;
	else if (width > 40 || width < 10)
		cout << "Invalid width (" << width << ")." << endl;
	else if (height > 11 || height < 7)
		cout << "Invalid height (" << height << ")." << endl;
	else {
		cout << endl;
		cout << fixed << setprecision(2);

		//do some math
		area = width * height * 4;
		cost = (double)area * wallRate;
		time = (double)area / paintRate / painters;

		cout << setw(w) << left << "Painters: " << setw(w1) << right << painters << endl;
		cout << setw(w) << left << "Wall width (ft): " << setw(w1) << right << width << endl;
		cout << setw(w) << left << "Wall height (ft): " << setw(w1) << right << height << endl;
		cout << setw(w) << left << "Four-wall area (square feet): " << setw(w1) << right << area << endl;
		cout << setw(w) << left << "Cost estimate ($): " << setw(w1) << right << cost << endl;
		cout << setw(w) << left << "Time estimate (hours): " << setw(w1) << right << time << endl;



	
	}



	//footer
	cout << "END OF PAINT CALCULATOR CALCULATIONS..." << endl;
}