#pragma once
#include <string>
using namespace std;


class Question {
private:
	string text;
	int points;
public:
	void setText(string input);
	string getText() const;
	void setPoints(int point);
	int getPoints() const;
	void display() const;
	Question();
	Question(string text);
};