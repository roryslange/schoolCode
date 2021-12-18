#pragma once
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;


class NodeType
{
public:
	Student data;
	NodeType* next;
	NodeType();
};