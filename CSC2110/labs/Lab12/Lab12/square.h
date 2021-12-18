#pragma once
#include "shape.h"
#include <string>

using namespace std;

class Square : public Shape {
private:
	string color;
public:
	void move(int inputX, int inputY);
	void draw();
	void setColor(string input);
	string getColor() const;
	Square(int inputX = 0, int inputY = 0);
};
