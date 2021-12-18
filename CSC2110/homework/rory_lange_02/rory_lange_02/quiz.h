#pragma once
#include "MCquestion.h"
#include "SAquestion.h"


class Quiz {
private:

	double score;

public:

	MCquestion question01;
	SAquestion question02;
	MCquestion question03;
	SAquestion question04;

	double getScore() const;
	void startAttempt();
	
	Quiz();
	
};