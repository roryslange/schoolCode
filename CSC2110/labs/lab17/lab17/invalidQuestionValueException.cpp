#include "invalidQuestionValueException.h"

string InvalidQuestionValueException::what()
{
	return message;
}

InvalidQuestionValueException::InvalidQuestionValueException(string m)
{
	this->message = m;
}
