//==========================================================
//
// Title:      Part Pretenders
// Course:     CSC 1101
// Lab Number: 20-1
// Author:     rory lange
// Date:       4/15/21
// Description:
//   This C++ console application manages part names.  It 
// declares string array parts of size eight, and stores 
// eight parts in it.  It presents the following menu to the
// user:
//
//   Part Pretenders Menu
//   1 - List car parts
//   2 - Sort car parts
//   3 - Search car parts
//   9 – Exit 
//
//   Enter an option :
//
// It continues to read and process menu options until the 
// user enters the sentinel value of 9.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//==========================================================
// Globals
//==========================================================
const int ARRAY_SIZE = 10;


//==========================================================
// binarySearchParts
//==========================================================
int binarySearchParts(string parts[], int arraySize, string key)
{

  // Declare variables
  int min = 0;
  int index;
  int max = arraySize - 1;

  // Loop to find key
  while (min <= max)
  {

    // Get midpoint of array
    index = (min + max) / 2;

    // Test if key found
    if (parts[index] == key)  // Guess is right on
      return index;
    else if (parts[index] < key)  // Guess is too low
      min = index + 1;
    else
      max = index - 1;

  }

  // Return index
  return -1;

}

//==========================================================
// menuOption
//==========================================================
int menuOption()
{

  // Declare variables
  int option;

  // Show menu and get option
  cout << "\nPart Pretenders Menu" << endl;
  cout << "1 - List car parts" << endl;
  cout << "2 - Sort car parts" << endl;
  cout << "3 - Search car parts" << endl;
  cout << "4 - Add car parts" << endl;
  cout << "5 - Delete car parts" << endl;
  cout << "9 - Exit" << endl;
  cout << "\nEnter an option: ";
  cin >> option;
  return option;

}

//==========================================================
// listParts
//==========================================================
void listParts(string parts[], int arraySize)
{

  // Loop to list parts
  cout << endl << "Part List" << endl;
  for (int i = 0; i < arraySize; i++)
    cout << parts[i] << endl;
  cout << endl << "Part count: " << arraySize << endl;

}

//==========================================================
// searchParts
//==========================================================
void searchParts(string parts[], int arraySize)
{

  // Declare variables
  string key;
  int index;

  cout << "\nEnter a part to search for (no spaces): ";
  cin >> key;
  index = binarySearchParts(parts, arraySize, key);
  if (index != -1)
    cout << "'" << key << "' found at index "
    << index << "." << endl;
  else
    cout << "'" << key << "' NOT found." << endl;

}

//==========================================================
// sortParts
//==========================================================
void sortParts(string parts[], int arraySize)
{

  // Declare variables
  string value;
  int spot;

  // Loop to test each value
  for (int i = 1; i < arraySize; i++)
  {

    // Loop to find spot to place value
    value = parts[i];
    spot = i - 1;
    while (spot >= 0 && parts[spot] > value)
    {
      parts[spot + 1] = parts[spot];
      spot = spot - 1;
    }

    // Place value in spot
    parts[spot + 1] = value;

  }

  // Print sorted message
  cout << endl << "Parts sorted." << endl;

}

//==========================================================
// addPart
//==========================================================
void addPart(string parts[], int &partCount) {
	string part;
	if (partCount < ARRAY_SIZE) {
		cout << "Enter a part to add: ";
		cin >> part;
		parts[partCount] = part;
		partCount++;
		cout << "Don't forget to sort the list before searching." << endl; 
	}
	else	
		cout << "ERROR: too many parts in list." << endl;
}

//==========================================================
// deletePart
//==========================================================
void deletePart(string parts[], int &partCount) {
	if (partCount > 0) {
		cout << "part '" << parts[partCount-1] << "' removed" << endl;
		parts[partCount] = "";
		partCount--;
	}
	else
		cout << "ERROR: no parts to delete." << endl;
}

//==========================================================
// main
//==========================================================
int main()
{

  // Declare variables 
  // Put your own 8 car parts in for use to start
  string parts[ARRAY_SIZE] =
    {"wheels", "transmission", "dashboard", "mirrors", "airbags", "engine", "driveterrain", "windows"};
  int option;
  int count = 8;

  // Show application header
  cout << "Welcome to Part Pretenders" << endl;
  cout << "--------------------------" << endl;

  // Loop to process options
  option = menuOption();
  while (option != 9)
  {
    // Handle option
    switch (option) {

      // List parts
    case 1:
      listParts(parts, count);
      break;

      // Sort parts
    case 2:
      sortParts(parts, ARRAY_SIZE);
      break;

      // Search parts
    case 3:
      searchParts(parts, ARRAY_SIZE);
      break; 

      //add parts
    case 4:
      addPart(parts, count);
      break;

      //delete parts
    case 5:
      deletePart(parts, count);
      break;

      // Handle invalid option
    default:
      cout << endl << "Error: unknown option of '" << option
        << "'." << endl;

    }

    // Get next option
    option = menuOption();

  }

  // Show application close
  cout << "\nEnd of Part Pretenders" << endl;

}
