#pragma once

class Rectangle {
private:

	double length;
	double width;

public:

	Rectangle();  //create rectangle object with default length and width set at 0
	Rectangle(double length, double width);  //create rectangle
	void setDimension(double l, double w);
	double area() const;  //calculate area
	double perimeter() const;  //caluclate perimeter
	void print() const;  //print values
	double getLength() const;  //length getter
	double getWidth() const; //width getter
	~Rectangle();

};
