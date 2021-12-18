#include "SAquestion.h"

void SAQuestion::setText(string text)
{
	this->text = text;
}

void SAQuestion::setCorrectAnswer(string correctAnswer)
{
	this->correctAnswer = correctAnswer;
}

void SAQuestion::setPoints(int points)
{
	this->points = points;
}

string SAQuestion::getText() const
{
	return text;
}

string SAQuestion::getCorrectAnswer() const
{
	return correctAnswer;
}

int SAQuestion::getPoints() const
{
	return points;
}

bool SAQuestion::isCorrect(string answer) const
{
	if (answer == correctAnswer)
		return 1;
	else
		return 0;
}

SAQuestion::SAQuestion(string text, string correctAnswer, int points)
{
	this->text = text;
	this->correctAnswer = correctAnswer;
	this->points = points;
}
