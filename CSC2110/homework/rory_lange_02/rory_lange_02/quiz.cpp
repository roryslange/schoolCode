#include "quiz.h"
#include <iostream>

using namespace std;

double Quiz::getScore() const { //returns score
	return score;
}

void Quiz::startAttempt() { //begin qustions calls display members for sa and mc questions
	int answer;
	string shortAnswer;

	//question1
	question01.display();
	cout << "Enter answer: ";
	cin >> answer;
	if (question01.isCorrect(answer) == 1) {
		cout << "You are correct." << endl << endl;
		score += 1;
	}
	else
	{
		cout << "You are incorrect." << endl << endl;
	}

	//question2
	question02.display();
	cout << "Enter answer: ";
	cin >> shortAnswer;
	if (question02.isCorrect(shortAnswer) == 1) {
		cout << "You are correct." << endl << endl;
		score += 1;
	}
	else
	{
		cout << "You are incorrect." << endl << endl;
	}


	//question3
	question03.display();
	cout << "Enter answer: ";
	cin >> answer;
	if (question03.isCorrect(answer) == 1) {
		cout << "You are correct." << endl << endl;
		score += 1;
	}
	else
	{
		cout << "You are incorrect." << endl << endl;
	}

	//question4
	question04.display();
	cout << "Enter answer: ";
	cin >> shortAnswer;
	if (question04.isCorrect(shortAnswer) == 1) {
		cout << "You are correct." << endl << endl;
		score += 1;
	}
	else
	{
		cout << "You are incorrect." << endl << endl;
	}

	//return score
	cout << "Your final score: " << (getScore()/4)*100 << endl;
}

Quiz::Quiz() {  //default constructor
	score = 0;
	
}