#include <iostream>
using namespace std;
void heapify(int heap[], int p, int m)
{
	int large = m;
	int left = 2 * m + 1;
	int right = 2 * m + 2;
	// checking left child > root
	if (left < p && heap[left] > heap[large])
		large = left;
	// checking right child > largest
	if (right < p && heap[right] > heap[large])
		large = right;
	// checking largest is not root
	if (large != m) {
		swap(heap[m], heap[large]); //swap
		heapify(heap, p, large);
	}
}
void heap_Sort(int heap[], int p)
{
	for (int i = p / 2 - 1; i >= 0; i--)
		heapify(heap, p, i);
	for (int i = p - 1; i >= 0; i--)
	{
		swap(heap[0], heap[i]); // Move current root to end
		heapify(heap, i, 0); // function call
	}
}


int main()
{
	int heap[7];
	cout << "Enter array elements :\n";
	for (int i = 0; i < 7; ++i)
		cin >> heap[i]; //read input from user
	for (int i = 0; i < 7; ++i) //Print array after sorting
		cout << heap[i] << " ";
	return 0;
}