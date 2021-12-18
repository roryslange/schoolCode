#pragma once
#include <iostream>
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std;

class Attendee
{
	private:
		string firstname;
		string lastname;
	public:
		void setFirstName(string fn);
		void setLastName(string ln);
		string getFirstName() const;
		string getLastName() const;
		Attendee(string fn, string ln);
};