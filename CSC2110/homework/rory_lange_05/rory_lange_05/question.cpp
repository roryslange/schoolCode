#include "question.h"
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
	if (points < 1)
		this->points = 1;
	else
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
	this->text = "question text";
	points = 1;
}

Question::Question(string text)
{
	points = 1;
	this->text = text;
}
