//project 2 created by rory lange on 4/20/21
//for the class csc1100


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
    cout << index << endl;
    // Test if key found
    if (parts[index] == key)  // Guess is right on
      return index;
    else if (parts[index] < key || parts[index] != "")  // Guess is too low
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
  cout << endl << "Part List" << endl << endl;
  cout << left << setw(W) << "Index" << right << setw(W1) << "Part" << endl;
  for (int i = 0; i < arraySize; i++)
    cout << left << setw(W) << i << right << setw(W1) << parts[i] << endl;
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
  cin.ignore(120, '\n');
  getline(cin, key);
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
		sortParts(parts, ARRAY_SIZE);   //sort parts after adding new part
	}
	else	
		cout << "ERROR: too many parts in list." << endl;
}

//==========================================================
// deletePart
//==========================================================
void deletePart(string parts[], int &partCount) {
  int index;
	if (partCount > 0) {
    cout << "Enter index of part to delete: ";
    cin >> index;
		cout << "part '" << parts[index] << "' removed" << endl;
		parts[index] = "";
		partCount--;
	}
	else
		cout << "ERROR: no parts to delete." << endl;
}

//==========================================================
// readParts
//==========================================================

int readParts(string parts[]) {
  ifstream inputFile;
  int count = 0;
  string part;

  inputFile.open(FileName);

  //read lines from input file and add them to list
  if (!inputFile.is_open()) {
    //cout << "Error reading from file." << endl;
    return -1;
  }
  else {
    cout << "Reading lines from file '" << FileName << "'" << endl;
    while(inputFile.good()) {
      getline(inputFile, part);
      parts[count] = part;
      count++;
    }
    cout << "Read " << count << " lines from file '" << FileName << "'" << endl;
    inputFile.close();

    sortParts(parts, count); //sort parts before menu
    return count;
  }
}

//==========================================================
// main
//==========================================================
int main()
{

  // Declare variables 
  string parts[ARRAY_SIZE];
  int option;
  int count;
  string part;
  int partCount = 0;

  // Show application header
  cout << "Welcome to Part Pretenders" << endl;
  cout << "--------------------------" << endl;

  //add parts from carparts.txt


  count = readParts(parts); //read parts from CarParts.txt

  if (count == -1) {
    cout << "Error reading from file." << endl;
  }
  else {
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
}