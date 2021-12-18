#include <iostream>
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Attendee.h"
#include "AttendeeList.h"
using namespace std;

void addAttendeeDialog(AttendeeList& aList)
{
	int people = 0;
	if (people < 5)
	{
		string fn;
		string ln;
		cout << "--- Add an attendee" << endl;
		cout << "Enter attendee's first name: ";
		cin >> fn;
		cout << "Enter attendee's last name: ";
		cin >> ln;
		aList.addAttendee(fn, ln);
		people++;
	}
	else
	{
		cout << "List is full. A new attendee cannot be added." << endl;
	}
}

int main()
{
	int choice;
	AttendeeList peopleList;
	peopleList.print();
	cout << "=== MENU ===" << endl;
	cout << "1. Add an attendee." << endl;
	cout << "2. Exit." << endl;
	cout << "Choose an option[1-2]: ";
	cin >> choice;
	while (choice != 2)
	{
		
		if (choice < 1 || choice > 2)
		{
			cout << "Invalid option. Try again." << endl;
			cout << "=== MENU ===" << endl;
			cout << "1. Add an attendee." << endl;
			cout << "2. Exit." << endl;
			cout << "Choose an option[1-2]: ";
			cin >> choice;
		}
		else if (choice == 1)
		{
			addAttendeeDialog(peopleList);
			peopleList.print();
			cout << "Choose an option[1-2]: ";
			cin >> choice;
			
		}
	}
}
