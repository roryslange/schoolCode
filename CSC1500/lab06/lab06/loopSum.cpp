#include "loopSum.h"
#include <iostream>

using namespace std;

int Sum::sumLoop(int input)
{
	int sum = 0;
	for (int i = 1; i <= input; i++) {
		counter++;
		sum += i;
	}
	return sum;
}

int Sum::equationSum(int input)
{
	counter += 3;
	return ((input * (input + 1)) / 2);
}

int Sum::getCounter() const
{
	return counter;
}

void Sum::setCounter(int input)
{
	counter = input;
}
