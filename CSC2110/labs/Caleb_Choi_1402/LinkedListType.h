#pragma once
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "Student.h"
#include "NodeType.h"
using namespace std;

class LinkedListType
{
private:
	int size;
	NodeType* last;
	NodeType* first;
public:

	bool isEmpty() const;
	int getSize() const;
	void display() const;
	void addLast(Student studentData);
	LinkedListType();
};