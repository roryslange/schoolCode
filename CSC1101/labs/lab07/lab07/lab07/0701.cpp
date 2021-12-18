
//==========================================================//
// Title:      advising check in
// Course:     CSC 1101
// Lab Number: 07
// Author:     rory lange
// Date:       2/9/21
// Description:
//
//   <brief description of application including its inputs
// processing, and outputs>
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main(){  
	// Declare variables  
	const int w = 20;
	const int w1 = 15;
	const int graduate = 120;

	int credits;
	double degree;
	string firstName;
	string lastName;
	string fullName;

	

	// Show application header
	cout << "ADVISING CHECK IN" << endl;  
	cout << "--------------------------" << endl << endl;  

	//get user input
	cout << "Enter the user's first name: ";
	cin >> firstName;
	cout << endl;

	cout << "Enter the user's last name: ";
	cin >> lastName;
	cout << endl;

	cout << "Enter the number of credit hours the user has completed: ";
	cin >> credits;
	cout << endl << endl;

	//make full name
	fullName = firstName + " " + lastName;

	cout << "Full Name: " << fullName << endl;
	cout << "----------------------------------------------------" << endl << endl;

	//calculate degree %
	//degree = (double) (1 - ((graduate - credits) / graduate)) * 100;
	degree = (double)(credits / graduate) * 100;

	//set precision
	cout << fixed << setprecision(2);

	cout << setw(w) << left << "First Name" << setw(w1) << left << "Last Name" << setw(w1) << right << "Degree Completed" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << setw(w) << left << firstName << setw(w1) << left << lastName << setw(w1) << right << degree;


	// Show application close  
	cout << "\nEnd of my Application" << endl;
}
