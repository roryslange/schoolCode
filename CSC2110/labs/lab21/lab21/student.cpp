#include "student.h"

void Student::setFirstName(string f)
{
	this->firstName = f;
}

void Student::setLastName(string l)
{
	this->lastName = l;
}

string Student::getFirstName() const
{
	return firstName;
}

string Student::getLastName() const
{
	return lastName;
}

Student::Student(string f, string l)
{
	this->firstName = f;
	this->lastName = l;
}

Student::Student()
{
	this->firstName = "";
	this->lastName = "";
}
