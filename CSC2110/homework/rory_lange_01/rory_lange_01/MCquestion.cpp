// rory_lange_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Assignment 1 for csc 2110 created by Rory Lange on 9/15/21

#include <iostream>
#include <iomanip>
#include <string>
#include "MCquestion.h"
using namespace std;

int main()
{
	//variables
	int input;		//user input
	string text = "In Pirates of the Caribbean, what was Captain Jack Sparrow's ship's name?";
	MCquestion question(text);	//initalize question object, set question text to str above
	

	//set answers
	question.choices[0] = "The Marauder";
	question.choices[1] = "The Black Pearl";  // <--  correct answer
	question.choices[2] = "The Black Python";
	question.choices[3] = "The Slytherin";

	question.setCorrectAnswer(2);		//set correct answer to index [1], 'The Black Pearl'

	cout << "Assignment 1" << endl;
	question.display();					//display question

	//obtain user input
	cout << "Enter your answer: ";
	cin >> input;

	//test whether answer is correct
	if (question.isCorrect(input) == 1) {
		cout << "You are correct!" << endl;
	}
	else {
		cout << "You are incorrect." << endl;
	}
}
