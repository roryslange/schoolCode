#pragma once
#include "NAQuestion.h"
using namespace std;

class Quiz {
private:
	double score = 0;
	NAQuestion* questions[4];

public:
	double getScore() const;
	void setQuestion(int input, NAQuestion* qInput); //parameter is question number
	NAQuestion* getQuestion(int input) const; //parameter is questoin number
	void resetQuestions();
	void startAttempt();
	Quiz();
};