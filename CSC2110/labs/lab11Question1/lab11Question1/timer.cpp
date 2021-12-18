#include <iostream>
#include "timer.h"
using namespace std;

int Timer::getMinutes() const
{
	return minutes;
}

int Timer::getHours() const
{
	return hours;
}

void Timer::setMinutes(int input)
{
	minutes = input;
}

void Timer::setHours(int input)
{
	hours = input;
}

Timer::Timer()
{
	minutes = 0;
	hours = 0;
}

Timer::Timer(int minInput, int hrInput)
{
	minutes = minInput;
	hours = hrInput;
}
