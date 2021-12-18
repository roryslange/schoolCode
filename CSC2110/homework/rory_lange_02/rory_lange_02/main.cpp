// rory_lange_02.cpp : 
//created by Rory Lange on 9/28/21 for csc 2110
//Assingment 02: inheritance, polymorphism, and composition

#include <iostream>
#include "quiz.h"

using namespace std;


int main()
{
    cout << "Assignment 02" << endl;  //test to see if program compiles properly
    Quiz quiz;

    quiz.question01.setText("According to Forrest Gump, life was like...");
    quiz.question01.choices[0] = "A bag of lemons";
    quiz.question01.choices[1] = "A handful of roses";
    quiz.question01.choices[2] = "A lollipop";
    quiz.question01.choices[3] = "A box of chocolates"; //correct
    quiz.question01.setCorrectAnswer(3); //index of correct answer
    
    quiz.question02.setText("What year was the first iPhone released? ");
    quiz.question02.setCorrectAnswer("2007");

    quiz.question03.setText("which planet in our solar system is the largest?");
    quiz.question03.choices[0] = "jupiter"; //correct
    quiz.question03.choices[1] = "saturn";
    quiz.question03.choices[2] = "neptune";
    quiz.question03.choices[3] = "earth";
    quiz.question03.setCorrectAnswer(0);

    quiz.question04.setText("Is java a type of OS?");
    quiz.question04.setCorrectAnswer("no");

    quiz.startAttempt();

}


