#include "MCquestion.h"
#include "question.h"
#include <iostream>

using namespace std;



void MCquestion::setCorrectAnswer(int input) {  //set value for the correct answer
	correctAnswer = input;
}

int MCquestion::getCorrectAnswer() const {  //return correct answer
	return correctAnswer;
}

bool MCquestion::isCorrect(int input) const {  //check if input is equal to correct answer return 1 or 0
	if (input-1 == correctAnswer)
		return 1;
	else
		return 0;
}

void MCquestion::display() const {  //display mc question and possible answers
	Question::display();
	
	for (int i = 0; i < 4; i++)
		cout << i+1 << ") " << choices[i] << endl;
}

MCquestion::MCquestion() {  //default constructor maybe just have a base question, probably cant leave empty

}

MCquestion::MCquestion(string input) {  //constructor with parameter, input is the question
	Question::setText(input);
}


