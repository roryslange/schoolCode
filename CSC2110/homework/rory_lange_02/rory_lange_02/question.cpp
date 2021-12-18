#include "question.h"
#include <string>
#include <iostream>

using namespace std;

void Question::setText(string input) {  //set question text
	text = input;
}

string Question::getText() const {  //return question text
	return text;
}

void Question::display() const {  //display question text
	cout << text << endl << endl;
}

Question::Question() {  //default constructor maybe just set a default question to ask
	
}

Question::Question(string input) {  //parameter constructor, input is question text
	text = input;
}