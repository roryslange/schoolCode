#include <iostream>
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "AttendeeList.h"
#include "Attendee.h"
using namespace std;

void AttendeeList::addAttendee(string fn, string ln)
{
	if (position < 5)
	{
		list[position] = new Attendee(fn, ln);
		position++;
	}
}

Attendee* AttendeeList::getAttendee(int i) const
{
	if (i > 5)
	{
		return list[i];
	}
	return nullptr;
}

int AttendeeList::getSize() const
{
	return (position + 1);
}

void AttendeeList::print() const
{
	cout << "=== ATTENDEE LIST ===" << endl;
	int i = 0;
	while (i < 5)
	{
		if (list[i] == nullptr)
		{
			cout << "[EMPTY]" << endl;
			i++;
		}
		else
		{
			cout << list[i]->getFirstName() + " " + list[i]->getLastName() << endl;
			i++;
		}
	}
}

AttendeeList::AttendeeList()
{
	position = 0;
	for (int j = 0; j <= 5; j++)
	{
		list[j] = nullptr;
	}
}