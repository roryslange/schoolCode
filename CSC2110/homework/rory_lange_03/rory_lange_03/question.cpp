#include "question.h"
#include <iostream>
using namespace std;


void Question::setText(string input)
{
	text = input;
}

string Question::getText() const
{
	return text;
}

void Question::display() const
{
	cout << text << endl;
}

Question::Question()
{
	text = "";
}

Question::Question(string input)
{
	text = input;
}
