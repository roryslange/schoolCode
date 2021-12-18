#include "NAQuestion.h"

void NAQuestion::setCorrectAnswer(float min, float max)
{
	if (min <= max) {
		correctAnswerMax = max;
		correctAnswerMin = min;
	}
}

float NAQuestion::getCorrectAnswerMin() const
{
	return correctAnswerMin;
}

float NAQuestion::getCorrectAnswerMax() const
{
	return correctAnswerMax;
}

int NAQuestion::isCorrect(float answer) const
{
	if (answer >= correctAnswerMin && answer <= correctAnswerMax)
		return Question::getPoints();
	else
		return 0;
}

NAQuestion::NAQuestion()
{
	this->setText("Question text");
	correctAnswerMax = 10;
	correctAnswerMin = 1;
	this->setPoints(1);
}

NAQuestion::NAQuestion(string text, float min, float max, int points)
{
	this->setText(text);
	this->setPoints(points);
	setCorrectAnswer(min, max);
}

bool NAQuestion::operator>=(const NAQuestion& q)
{
	if (this->getPoints() >= q.getPoints()) 
		return 1;
	else
		return 0;
}
