// rory_lange_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "NAQuestion.h"
#include "quiz.h"
using namespace std;

int main()
{
	Quiz q;

	NAQuestion* qPtr;

	qPtr = new NAQuestion("What years were US forces in Afghanistan? ", 2001, 2021, 2);
	q.setQuestion(0, qPtr);

	qPtr = new NAQuestion("What years was Donald Trump president? ", 2016, 2020, 4);
	q.setQuestion(1, qPtr);

	qPtr = new NAQuestion("when did the civil war take place? ", 1861, 1865, 3);
	q.setQuestion(2, qPtr);

	qPtr = new NAQuestion("What years was Barack Obama president? ", 2008, 2016, 1); 
	q.setQuestion(3, qPtr);

	qPtr = new NAQuestion("how many representatives does a state typically have in the United States? ", 1, 53, 5);
	q.setQuestion(4, qPtr);

	cout << "Assignment 6!\n\n";

	q.sort();

	q.startAttempt();


	cout << "\n\nQuestion with the largest amount of points: \n";
	cout << q.largestQuestion()->getText() << endl;
}



