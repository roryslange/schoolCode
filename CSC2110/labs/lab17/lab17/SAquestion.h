#pragma once
#include <string>
using namespace std;

class SAQuestion {
private:
	string text;
	string correctAnswer;
	int points;
	
public:
	void setText(string text);
	void setCorrectAnswer(string correctAnswer);
	void setPoints(int points);
	string getText() const;
	string getCorrectAnswer() const;
	int getPoints() const;	
	bool isCorrect(string answer) const;
	SAQuestion(string text, string correctAnswer, int points);
};
