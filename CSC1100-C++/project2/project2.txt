//==========================================================
//
// Title:      Part Pretenders, v2
// Course:     CSC 1100
// Project:    2
// Author:     Rory Lange
// Date:       4/27/21
// Description:
//   This C++ console application manages part names.  it 
//   reads parts from a .txt file and puts them in a list
//   the app then proceeds to do all the functions in the
//   menu.
//
//   Part Pretenders Menu
//   1 - List car parts
//   2 - Sort car parts
//   3 - Search car parts
//   4 - Add car part
//   5 - Delete car part
//   9 � Exit
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
const int ARRAY_SIZE = 100;
const string FileName = "CarParts.txt";
const int W = 15;
const int W1 = 20;

//function stubs
void sortParts(string parts[], int arraySize);

//==========================================================
// addPart
//==========================================================
void addPart(string parts[], int &partCount)
{

  // Declare variables
  string part;

  // Test whether room to add part
  if (partCount == ARRAY_SIZE)
    cout << "No room to add part at this time." << endl;
  else
  {

    // Prompt for and get part
    cout << "Enter the part to add: ";
    cin >> part;

    // Add part
    parts[partCount] = part;
    partCount = partCount + 1;
    cout << "Part '" << part << "' added to list." 
      << endl;

    sortParts(parts, ARRAY_SIZE); //sort after part is added

  }

}

//==========================================================
// binarySearchParts
//==========================================================
int binarySearchParts(
  string parts[], int arraySize, string key)
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
// deletePart
//==========================================================
void deletePart(string parts[], int &partCount)
{
  int index;
  string temp;

  cout << "Enter index of part to delete: ";
  cin >> index;

  // Test whether room to add part
  if (index < 0 || index >= partCount)
    cout << "Error: invalid index" << endl;
  else
  {
    // Delete part
    cout << "Part at index " << index << " removed." << endl;

    while (index < partCount) {
      temp = parts[index+1];
      parts[index] = temp;
      index++;
    }
    partCount = partCount - 1;

  }

}

//==========================================================
// listParts
//==========================================================
void listParts(string parts[], int arraySize)
{

  // Loop to list parts
  cout << endl << "Part List" << endl << endl;
  cout << left << setw(W) << "Index" << left << setw(W1) << "Part" << endl;
  for (int i = 0; i < arraySize; i++)
    cout << left << setw(W) << i << left << setw(W1) << parts[i] << endl;
  cout << endl << "Part count: " << arraySize << endl;

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
  cout << "2 - Search car parts" << endl;
  cout << "3 - Add car part" << endl;
  cout << "4 - Delete car part" << endl;
  cout << "9 - Exit" << endl;
  cout << "\nEnter an option: ";
  cin >> option;
  return option;

}

//==========================================================
// readParts
//==========================================================

int readParts(string parts[]) {
  ifstream inputFile;
  string part;
  int count = 0;

  inputFile.open(FileName); //open file

  if (!inputFile.is_open()) //check if its good
    return -1;

  else {
    cout << "reading lines from file '" << FileName << "'" << endl;

    while (inputFile.good()) { //add parts to file
      getline(inputFile, part);
      parts[count] = part;
      count++; //iterate count
    }

    cout << "read " << count << " parts from file '" << FileName << "'" << endl;

    inputFile.close(); //close file

    sortParts(parts, ARRAY_SIZE); //sort parts after reading from .txt
    return count;
  }
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

    if (value == ""); //if spot is empty then skip

    else { //spot isnt empty keep going
      spot = i - 1;
      while (spot >= 0 && parts[spot] > value)
      {
        parts[spot + 1] = parts[spot];
        spot = spot - 1;
      }

      // Place value in spot
      parts[spot + 1] = value;
    }
  }

  // Print sorted message
  cout << endl << "Parts sorted." << endl;

}

//==========================================================
// main
//==========================================================
int main()
{

  // Declare variables
  string parts[ARRAY_SIZE];
  int partCount = 0;
  int option;

  // Show application header
  cout << "Welcome to Part Pretenders" << endl;
  cout << "--------------------------" << endl;


  partCount = readParts(parts);

  if (partCount == -1)
    cout << "Error: could not open file." << endl;
  else {

    // Loop to process options
    option = menuOption();
    while (option != 9)
    {

      // Handle option
      switch (option)
      {

        // List parts
      case 1:
        listParts(parts, partCount);
        break;

        // Sort parts
      // case 2:
      //   sortParts(parts, partCount);
      //   break;

        // Search parts
      case 2:
        searchParts(parts, partCount);
        break;

        // Add part
      case 3:
        addPart(parts, partCount);
        break;

        // Delete part
      case 4:
        deletePart(parts, partCount);
        break;

        // Handle invalid option
      default:
        cout << endl << "Error: unknown option of '" << option
          << "'." << endl;

      }

      // Get next option
      option = menuOption();

    }
  }
  // Show application close
  cout << "\nEnd of Part Pretenders" << endl;
  
}
