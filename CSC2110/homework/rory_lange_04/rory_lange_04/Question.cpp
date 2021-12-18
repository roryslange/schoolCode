#include "Question.h"
#include <iostream>
using namespace std;

void Question::setText(string text)
{
	this->text = text;
}

string Question::getText() const
{
	return text;
}

void Question::setPoints(int points)
{
	this->points = points;
}

int Question::getPoints() const
{
	return points;
}

void Question::display() const
{
	cout << text << endl;
	cout << "Your answer: ";
}

Question::Question()
{
	text = "";
	points = 1;
}

Question::Question(string text)
{
	this->text = text;
	points = 1;
}

