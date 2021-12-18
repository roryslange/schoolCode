#pragma once
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string firstname;
	string lastname;
public:
	void setFirstname(string f);
	void setLastname(string l);
	string getFirstname() const;
	string getLastname() const;
	Student(string f, string l);
	Student();
};