#pragma once
#include <iostream>
//#include <iomanip>
using namespace std;

template <class elemType> class Quiz {
private:
	double score;
	elemType* questions[5]; //NAquestion type probably
public:
	double getScore() const {
		return score;
	}

	void setQuestion(int num, elemType* val) {
		questions[num] = val;
	}

	elemType* getQuestion(int num) const {
		return questions[num];
	}

	void resetQuestions() {
		for (int i = 0; i < 5; i++)
			questions[i] = nullptr;
	}

	void startAttempt() {
		float input;
		double totalPts = 0;
		for (int i = 0; i < 5; i++) {
			if (questions[i] != nullptr) {

				cout << *questions[i];
				totalPts += questions[i]->getPoints();
				cout << "\nEnter your answer: ";
				cin >> input;

				if (questions[i]->isCorrect(input)) {
					score += questions[i]->isCorrect(input);
					cout << "you are correct\n\n";
				}

				else
					cout << "you are incorrect\n\n";
			}

			
		}

		//cout << setprecision(5);
		cout << "your score is: " << (score / totalPts)*100 << endl;

	}

	Quiz() {
		score = 0;
		resetQuestions();
	}

};