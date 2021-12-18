#pragma once
using namespace std;


class Shape {

public:
	int x;
	int y;

	Shape(int inputX = 0, int inputY = 0);
	void display();
	virtual void move(int inputX, int inputY) = 0;
	virtual void draw() = 0;
};