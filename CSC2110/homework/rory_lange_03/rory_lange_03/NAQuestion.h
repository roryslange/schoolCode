#pragma once
#include <string>
#include "question.h"
using namespace std;



class NAQuestion : public Question {
private:
	float correctAnswerMin;
	float correctAnswerMax;

public:
	void setCorrectAnswer(float min, float max);
	float getCorrectAnswerMin() const;
	float getCorrectAnswerMax() const;
	bool isCorrect(float input) const;
	NAQuestion();
	NAQuestion(string input, float min, float max);

};