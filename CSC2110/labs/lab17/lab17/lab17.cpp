// lab17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "invalidQuestionValueException.h"
#include "SAquestion.h"
using namespace std;



int main()
{
	try {
		SAQuestion q1("what number am i thinking of?", "4", 3);
		if (q1.getText() == "" || q1.getCorrectAnswer() == "" || q1.getPoints() > 10 || q1.getPoints() < 1)
			throw InvalidQuestionValueException();

		cout << q1.getText() << endl;


		SAQuestion q2("where is cairo?", "a", 3);
		if (q2.getText() == "" || q2.getCorrectAnswer() == "" || q2.getPoints() > 10 || q2.getPoints() < 1)
			throw InvalidQuestionValueException();

		cout << q2.getText() << endl;


		SAQuestion q3("what color am i thinking of?", "orange", -2);
		if (q3.getText() == "" || q3.getCorrectAnswer() == "" || q3.getPoints() > 10 || q3.getPoints() < 1)
			throw InvalidQuestionValueException();

		cout << q3.getText() << endl;
	}

	catch (InvalidQuestionValueException text) {
		cout << text.what();
	}
	
	//catch (InvalidQuestionValueException answer) {
	//	cout << answer.what();
	//}

	//catch (InvalidQuestionValueException points) {
	//	cout << points.what();
	//}

	



}

