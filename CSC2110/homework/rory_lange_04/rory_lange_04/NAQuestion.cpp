

#include "NAQuestion.h"
#include <iostream>

void NAquestion::setCorrectAnswer(float min, float max)
{
	this->correctAnswerMax = max;
	this->correctAnswerMin = min;
}

float NAquestion::getCorrectAnswerMin() const
{
	return correctAnswerMin;
}

float NAquestion::getCorrectAnswerMax() const
{
	return correctAnswerMax;
}

int NAquestion::isCorrect(float input) const
{
	if (input >= correctAnswerMin && input <= correctAnswerMax)
		return Question::getPoints();
	else
		return 0;
}

NAquestion::NAquestion()
{

	Question::setText("");
	Question::setPoints(1);
	this->correctAnswerMax = 0;
	this->correctAnswerMin = 0;

}

NAquestion::NAquestion(string question, float min, float max, int points)
{
	Question::setText(question);
	Question::setPoints(points);
	this->correctAnswerMax = max;
	this->correctAnswerMin = min; 
}

int NAquestion::operator+(const int& input)
{
	return 0;
}

ostream& operator<<(ostream& osObject, const NAquestion& oQuestion)
{
	osObject << oQuestion.getText();
	return osObject;
}
