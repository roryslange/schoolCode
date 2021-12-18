//==========================================================
//This is the header information
//
// Course:     CSC 1101
// Lab Number: 21
// Author:     rory lange
// Date:       4/13/21
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include<cmath> //For math equations
using namespace std; // So "std::cout" may be abbreviated to "cout"

struct Student {
	//member declarations here...
	string name;
	int id;
	double gpa;

	//default constructor
	
	Student() {
		name = "Rory";
		id = 679;
		gpa = 4.0;
	}

	//constructor with parameters here...
	
	Student(string name, int id, double gpa) {
		this->name = name;
		this->id = id;
		this->gpa = gpa;
	}

};

void printInfo(Student stu)
{
	//your code here
	cout << "Name: " << stu.name << endl;
	cout << "ID: " << stu.id << endl;
	cout << "GPA: " << stu.gpa << endl << endl;

}



int main()
{
	Student myStudent;
	string name;
	int id;
	double gpa;

	cout << "Welcome to structs and constructors...." << endl << endl;

	//get input from user
	cout << "Enter student name: ";
	cin >> name;

	cout << "Enter student ID: ";
	cin >> id;

	cout << "Enter student GPA: ";
	cin >> gpa;

	Student parameterStudent(name, id, gpa);

	//call printinfo
	printInfo(parameterStudent);
	printInfo(myStudent);
	



}