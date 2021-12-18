#pragma once
using namespace std;

class PointType {
private:

	int x;
	int y;

public:

	int getX() const;  //retrieve x
	int getY() const;  //retrieve y
	void setX(int x); //set x
	void setY(int y); //set y
	double distance(PointType p); //distance to another point
	
	PointType();
	PointType(int x, int y);

};