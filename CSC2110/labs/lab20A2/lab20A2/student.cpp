#include "student.h"

void Student::setFirstName(string f)
{
	first = f;
}

void Student::setLastName(string l)
{
	last = l;
}

string Student::getFirstName() const
{
	return first;
}

string Student::getLastName() const
{
	return last;
}

Student::Student()
{
	first = "";
	last = "";
}

Student::Student(string f, string l)
{
	first = f;
	last = l;
}
