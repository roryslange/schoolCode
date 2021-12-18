#pragma once
#include <iostream>
using namespace std;

class MCquestion {
public:
	string choices[4];					//initalizes array that stores answers to question

	void setText(string input) {		//(mutator) sets question text
		text = input;
	}

	string getText() const {			//(accessor) returns question text
		return text;
	}

	void setCorrectAnswer(int answer) {	//sets correct answer (mutator)
		correctAnswer = answer;
	}

	int getCorrectAnswer() const {		//returns correct answer
		return correctAnswer;
	}

	bool isCorrect(int answer) const {	//is the answer correct?
		if (answer == correctAnswer)
			return 1;
		else
			return 0;
	}

	void display() const {				//displays question
		cout << getText() << endl << endl;
		for (int i = 0; i < 4; i++)
			cout << i+1 << ") " << choices[i] << endl;
		cout << endl;
	}

	MCquestion();						//do we even need this

	MCquestion(string input) {			//constructor with arguments, initalizes question text, thats all
		setText(input);
	}

private:

	string text;  //question text
	int correctAnswer; //index of the correct answer

};