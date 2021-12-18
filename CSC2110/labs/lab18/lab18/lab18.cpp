// lab18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(const int arr[], const int size);
int recursiveSum(const int arr[], const int size, const int pos);
int recursiveMax(const int arr[], const int size, const int pos);
int recursiveMin(const int arr[], const int size, const int pos);
void printArr(const int arr[], const int size);

int main()
{
    int arr[] = { 8,3,4,84,39,32,18,54,76,0,4 };
    cout << "Recursive Funcitons\n";
    cout << "-------------------------\n";
    printArr(arr, 11);
    cout << endl;
    cout << "Sum: " << sum(arr, 11) << endl;
    cout << "Recursive Sum: " << recursiveSum(arr, 11, 0) << endl;
    cout << "Recursive max: " << recursiveMax(arr, 11, 0) << endl;
    cout << "Recursive min: " << recursiveMin(arr, 11, 0) << endl;



}

int sum(const int arr[], const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int recursiveSum(const int arr[], const int size, const int pos) { 
    if (pos == size) //check when reached end of list
        return 0;
    return arr[pos] + recursiveSum(arr, size, pos + 1); //adds element in the array with the one after it then repeats
}

int recursiveMax(const int arr[], const int size, const int pos) {
    if (pos == size)
        return arr[0]; //return last element in arr

    return max(arr[pos], recursiveMax(arr, size, pos + 1)); //compares element and the one after until it reaches end

}

int recursiveMin(const int arr[], const int size, const int pos) {
    if (pos == size)
        return arr[0]; //return last element in arr

    return min(arr[pos], recursiveMin(arr, size, pos + 1)); //compares element and the one after until it reaches end

}

void printArr(const int arr[], const int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]";
}
