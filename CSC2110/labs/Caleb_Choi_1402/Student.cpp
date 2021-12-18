#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student()
{

}

Student::Student(string f, string l)
{
	firstname = f;
	lastname = l;
}

void Student::setFirstname(string f)
{
	firstname = f;
}

void Student::setLastname(string l)
{
	lastname = l;
}

string Student::getFirstname() const
{
	return firstname;
}

string Student::getLastname() const
{
	return lastname;
}