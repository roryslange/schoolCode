#include <iostream>
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Attendee.h"
using namespace std;

void Attendee::setFirstName(string fn)
{
	firstname = fn;
}

void Attendee::setLastName(string ln)
{
	lastname = ln;
}

string Attendee::getFirstName() const
{
	return firstname;
}

string Attendee::getLastName() const
{
	return lastname;
}

Attendee::Attendee(string fn, string ln)
{
	firstname = fn;
	lastname = ln;
}