#pragma once
#include "NAQuestion.h"

class Quiz {
private:
	double score = 0;
	NAQuestion* questions[5];
	NAQuestion* largest(int lower, int upper);
public:
	double getScore() const;
	void setQuestion(int points, NAQuestion* question);
	NAQuestion* getQuestion(int num) const;
	void resetQuestions();
	void startAttempt();
	NAQuestion* largestQuestion();
	void sort();
	Quiz();



};