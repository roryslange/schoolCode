// rory_lange_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Assignment 3 created by rory lange for csc2110 on 10/14/21

#include <iostream>
#include "quiz.h"
using namespace std;


int main()
{
	cout << "Assignment 3\n\n";

	Quiz quiz1;

	//questions
	NAQuestion* q1 = new NAQuestion("How many megabytes are in a gigabyte?", 999, 1024);
	NAQuestion* q2 = new NAQuestion("How many times had Rafael Nadal won the French Open by March 2020?", 11, 13);
	NAQuestion* q3 = new NAQuestion("In what year was the Corvette introduced?", 1952, 1954);

	//set questions
	quiz1.setQuestion(0, q1);
	quiz1.setQuestion(2, q2);
	quiz1.setQuestion(3, q3);

	//start quiz
	quiz1.startAttempt();

	////reset questions
	quiz1.resetQuestions();

}

