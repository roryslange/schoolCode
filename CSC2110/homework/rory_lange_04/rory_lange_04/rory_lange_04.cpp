// rory_lange_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Quiz.h"
#include "NAQuestion.h"
using namespace std;

int main()
{
	cout << "Assignment 4\n\n";
	Quiz<NAquestion> exam;
	NAquestion* qPtr;

	qPtr = new NAquestion("What years were US forces in Afghanistan? ", 2001, 2021, 2);
	exam.setQuestion(0, qPtr);

	/*qPtr = new NAquestion("What years was Donald Trump president? ", 2016, 2020, 7);
	exam.setQuestion(1, qPtr);*/

	qPtr = new NAquestion("when did the civil war take place? ", 1861, 1865, 5);
	exam.setQuestion(2, qPtr);

	qPtr = new NAquestion("What years was Barack Obama president? ", 2008, 2016, 8);
	exam.setQuestion(3, qPtr);

	qPtr = new NAquestion("how many representatives does a state typically have in the United States? ", 1, 53, 2);
	exam.setQuestion(4, qPtr);

	exam.startAttempt();



}


