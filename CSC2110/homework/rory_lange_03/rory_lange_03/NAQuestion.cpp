#include "NAQuestion.h"

void NAQuestion::setCorrectAnswer(float min, float max)
{
	correctAnswerMax = max;
	correctAnswerMin = min;
}

float NAQuestion::getCorrectAnswerMin() const
{
	return correctAnswerMax;
}

float NAQuestion::getCorrectAnswerMax() const
{
	return correctAnswerMin;
}

bool NAQuestion::isCorrect(float input) const
{
	if (input >= correctAnswerMin && input <= correctAnswerMax)
		return 1;
	else
		return 0;
}

NAQuestion::NAQuestion()
{
	setText("question");
	correctAnswerMax = 100;
	correctAnswerMin = 0;
}

NAQuestion::NAQuestion(string input, float min, float max)
{
	setText(input);
	correctAnswerMax = max;
	correctAnswerMin = min;
}
