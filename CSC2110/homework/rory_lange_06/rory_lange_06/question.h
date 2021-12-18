#pragma once
#include <string>

using namespace std;

class Question {
private:
	int points;
	string text;

public:
	void setText(string text);
	string getText() const;
	void setPoints(int points);
	int getPoints() const;
	void display() const;
	Question();
	Question(string text);
};