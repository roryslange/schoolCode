#include "quiz.h"
#include <iostream>
using namespace std;

double Quiz::getScore() const
{
	return score;
}

void Quiz::setQuestion(int num, NAQuestion* question)
{
	if (num <= 4 || num >= 0) {
		this->questions[num] = question;
	}
}

NAQuestion* Quiz::getQuestion(int num) const
{
	if (num > 4 || num < 0)
		return nullptr;
	else
		return questions[num];
}

void Quiz::resetQuestions()
{
	for (int i = 0; i < 5; i++)
		questions[i] = nullptr;
}

void Quiz::startAttempt()
{
	float input;
	double totalPts = 0;

	for (int i = 0; i < 5; i++) {

		if (questions[i] != nullptr) {

			questions[i]->display();
			totalPts += questions[i]->getPoints();
			cin >> input;

			if (questions[i]->isCorrect(input)) {
				score += questions[i]->isCorrect(input);
				cout << "you are correct!\n\n";
			}

			else
				cout << "you are incorrect\n\n";

		}

	}

	cout << "your score: " << (score / totalPts) * 100;
}

NAQuestion* Quiz::largestQuestion()
{
	return largest(0, 4);
}

void Quiz::sort()
{ 
	
	int j;

	for (int i = 1; i < 5; i++) {

		j = i - 1;

		while (j >= 0 && *questions[j] > *questions[j+1]) {
			swap(questions[j], questions[j + 1]);
			j--;
		}

	}	


	//testing to see when it works delete before turning in
	
	//for (int i = 0; i < 5; i++)
	//	cout << questions[i]->getPoints() << " ";
	//cout << endl;
}

NAQuestion* Quiz::largest(int lower, int upper)
{
	if (questions[lower] == nullptr)
		return nullptr;

	if (lower == upper)
		return questions[lower];

	NAQuestion* max = largest(lower + 1, upper);

	if (max == nullptr)
		return questions[lower];

	if (*(questions[lower]) >= (*max))
		return questions[lower];

	return max;
}

Quiz::Quiz()
{
	score = 0;
	resetQuestions();
}
