#include "SAquestion.h"
#include "question.h"
#include <iostream>

using namespace std;


void SAquestion::setCorrectAnswer(string input) {  //set correct answer
	if (input.length() < 1)
		return;
	else
		correctAnswer = input;
}

string SAquestion::getCorrectAnswer() const {  //return correct answer
	return correctAnswer;
}

bool SAquestion::isCorrect(string input) const {  //check if answer is correct return bool value
	if (input == correctAnswer)
		return 1;
	else
		return 0;
}

SAquestion::SAquestion() {  //default constructor, maybe have default question

}

SAquestion::SAquestion(string question, string answer) { //parameter constructor unsure of what to put here
	setCorrectAnswer(answer);
	Question::setText(question);
}

