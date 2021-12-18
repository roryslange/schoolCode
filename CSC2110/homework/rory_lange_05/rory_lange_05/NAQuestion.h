#pragma once
#include <string>
#include "question.h"

using namespace std;

class NAQuestion : public Question {
private:
	float correctAnswerMin = 0;
	float correctAnswerMax = 0;

public:
	void setCorrectAnswer(float min, float max);
	float getCorrectAnswerMin() const;
	float getCorrectAnswerMax() const;
	int isCorrect(float answer) const;
	NAQuestion();
	NAQuestion(string text, float min, float max, int points);
	bool operator>=(const NAQuestion& q);

};