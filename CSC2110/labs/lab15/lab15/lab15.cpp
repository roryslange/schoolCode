// lab15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <class T>
	T sumOfSequence(T sum, T x, int n);

int main()
{
	cout << "Sample output: " << sumOfSequence(0, 2, 2) << endl;


}

template<class T>
T sumOfSequence(T sum, T x, int n)
{
	sum += 1;

	for (int i = 1; i <= n; i++) {
		sum += i * x;
	}

	return sum;
}
