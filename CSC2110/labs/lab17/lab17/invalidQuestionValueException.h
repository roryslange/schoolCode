#pragma once
#include <string>
using namespace std;

class InvalidQuestionValueException {
private:
	string message;
public:
	string what();
	InvalidQuestionValueException(string m = "ERROR: Invalid value. See class documentation.");
};