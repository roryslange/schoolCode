#pragma once
#include <iostream>
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Attendee.h"
using namespace std;

class AttendeeList
{
	private:
		Attendee* list[5];
		int position;
	public:
		void addAttendee(string fn, string ln);
		Attendee* getAttendee(int i) const;
		int getSize() const;
		void print() const;
		AttendeeList();
};