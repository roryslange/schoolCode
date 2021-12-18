#pragma once
#include <string>
#include "question.h"
using namespace std;

class MCquestion : public Question {
private:

	int correctAnswer;

public:

	string choices[4];

	void setCorrectAnswer(int input);
	int getCorrectAnswer() const;
	bool isCorrect(int input) const;
	void display() const;

	MCquestion();
	MCquestion(string input);

};