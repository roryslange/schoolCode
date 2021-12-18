#include "quiz.h"
#include "NAQuestion.h"
#include <iostream>
using namespace std;

double Quiz::getScore() const
{
	return score;
}

void Quiz::setQuestion(int input, NAQuestion* qInput)
{
	if (input > 3 || input < 0) 
	{
		//do nothing
	}

	else if (questions[input] != nullptr) //delete current question and put a new one in its place
	{
		delete questions[input];
		questions[input] = qInput;
	}

	else
		questions[input] = qInput; //assign question normally
}

NAQuestion* Quiz::getQuestion(int input) const
{
	if (questions[input] == nullptr)
		return nullptr;

	else if (input > 3 || input < 0)
		return nullptr;

	else
		return questions[input];
}

void Quiz::resetQuestions()
{
	for (int i = 0; i < 4; i++) {

		if (questions[i] != nullptr) {

			delete questions[i]; //deletes dynamic variable that is being pointed to
			questions[i] = nullptr; //sets pointer to null

		}

	}
}

void Quiz::startAttempt()
{
	float answer; //answer input
	double numQ = 0; //counts number of questions in order to find score percentage

	for (int i = 0; i < 4; i++)
	{
		if (questions[i] == nullptr) {
			//dont display question if pointer == nullptr
		}

		else {
			numQ++;
			//cout << "question " << i+1 << endl;

			//display questions
			questions[i]->display();

			//get user input
			cout << "enter answer: ";
			cin >> answer;

			if (questions[i]->isCorrect(answer) == 1) {
				score++;
				cout << "your answer is correct.\n\n\n";

			}
			else
				cout << "your answer is not correct\n\n\n";
		}
	}
	cout << "your score: " << (score/numQ)*100 << endl;
	
}

Quiz::Quiz()
{
	for (int i = 0; i < 4; i++) {
		questions[i] = nullptr; //sets all questions in array to nullptr so they can be assigned later
	}
}
