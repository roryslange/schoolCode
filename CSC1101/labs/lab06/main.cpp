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

int main()
{

  // Declare variables
	string item;
	char degree = 167;
	int room;
	int itemTemp;
	int tempDiff;
	const int tempIncrease = 2;
	const int width = 25;
	const int widthr = 20;

  // Show application header
  cout << "Item Room Temperature Calculator" << endl;
  cout << "--------------------------" << endl << endl;

  //collect data
  cout << setw(width) << left << "Name of item: ";
  cout << setw(widthr) << right;
  getline(cin, item);
  

  cout << setw(width) << left << "Room Temperature (C): ";
  cin >> setw(widthr) >> right >> room;
  

  cout << setw(width) << left << "Item Temperature (C): ";
  cin >> itemTemp;
  cout << endl;

  //do math
  if (itemTemp > room) {
	  tempDiff = itemTemp - room;
  }
  else {
	  tempDiff = room - itemTemp;
  }
  float time = (float) tempDiff / tempIncrease * 60;

  //report results
  cout << setw(width) << left << "Nam of Item: " 
	  << setw(widthr) << right << item << endl;
  cout << setw(width) << left << "Room Temperature: " 
	  << setw(widthr) << right << room << " " << left << degree << "C" << endl;
  cout << setw(width) << left << "Item Temperature: " 
	  << setw(widthr) << right << itemTemp << " " << left << degree << "C" << endl;
  cout << setw(width) << left << "Cooling/Warming time: "
	  << setw(widthr) << right << time << left << " Seconds" << endl;


  


  // Show application close
  cout << "\nEnd of my Application" << endl;

}
