#pragma once
#include <string>
#include <iostream>
#include "Question.h"

using namespace std;


class NAquestion : public Question {

	friend ostream& operator<<(ostream& osObject, const NAquestion& oQuestion);

private: 
	float correctAnswerMin;
	float correctAnswerMax;
	

public:
	void setCorrectAnswer(float min, float max);
	float getCorrectAnswerMin() const;
	float getCorrectAnswerMax() const;
	int isCorrect(float input) const;
	NAquestion();
	NAquestion(string question, float min, float max, int input);
	int operator+(const int& input); //maybe just a const int
};