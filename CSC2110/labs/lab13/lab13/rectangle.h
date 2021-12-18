#pragma once

class Rectangle {
private:
	double length;
	double width;
public:
	Rectangle();
	Rectangle(double lengthIn, double widthIn);
	double getLength() const;
	double getWidth() const;
	void setWidth(double input);
	void setLength(double input);
	double area();
	double perimeter();
	void print();
	virtual double Volume() = 0;
};