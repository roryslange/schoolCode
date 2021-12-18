#pragma once
#include <string>
#include "question.h"

using namespace std;

class SAquestion : public Question {
private:

	string correctAnswer;

public:

	void setCorrectAnswer(string input);
	string getCorrectAnswer() const;
	bool isCorrect(string input) const;

	SAquestion();
	SAquestion(string question, string answer);

};