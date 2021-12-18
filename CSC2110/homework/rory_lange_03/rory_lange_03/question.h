#pragma once
#include <string>
using namespace std;

class Question {
private:
	string text;

public:
	void setText(string input);
	string getText() const;
	void display() const;
	Question();
	Question(string input);


};