// lab13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void heapify(int arr[], int n);
void heap(int arr[], int size, int i);


int main()
{
    int array[7];

    for (int i = 0; i < 5; i++) {
        cout << "Enter array:" << endl;
        for (int i = 0; i < 7; i++) {
            cin >> array[i];
        }

        heapify(array, 7);

        cout << "Array after the Heap Sort: " << endl;
        for (int i = 0; i < 7; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

void heap(int arr[], int size, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < size && arr[l] > arr[largest]) {
        largest = l;
    }

    if (r < size && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heap(arr, size, largest);
    }
}

void heapify(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) {
        heap(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);

        heap(arr, i, 0);
    }

}
