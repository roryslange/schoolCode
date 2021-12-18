#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"



int linearSearchLast(string array[], int arraySize, string key)
{
    int index;
    for (int i = 0; i < arraySize; i++) {
	  if (array[i] == key)
		index = i;
    }
    return index;
}

void deleteArrayValue(float array[], int index, int count = 5)
{
    float temp;

    while (index < count) {
        temp = array[index+1];
        array[index] = temp;
        index++;
    }
}



int main() {
    float arr[5] = {0.1,0.2,0.3,0.4,0.5};

    deleteArrayValue(arr, 2);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}