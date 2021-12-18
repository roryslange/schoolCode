#pragma once

using namespace std;

class Sum {
private:
	int counter;

public:
	int sumLoop(int input);
	int equationSum(int input);
	int getCounter() const;
	void setCounter(int input);
};