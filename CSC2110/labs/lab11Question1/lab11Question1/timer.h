#pragma once
using namespace std;

class Timer {
private:
	int minutes;
	int hours;

public:
	int getMinutes() const;
	int getHours() const;
	void setMinutes(int input);
	void setHours(int input);

	Timer();
	Timer(int minInput, int hrInput);
};
