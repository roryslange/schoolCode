#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student {
private:
	string first;
	string last;
public:
	void setFirstName(string f);
	void setLastName(string l);
	string getFirstName() const;
	string getLastName() const;
	Student();
	Student(string f, string l);

};