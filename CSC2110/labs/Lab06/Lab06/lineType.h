#pragma once
#include "pointType.h"
using namespace std;

class LineType {
private:

	PointType p1;
	PointType p2;

public:

	void print();
	float slope();
	void equation();

	LineType();
	LineType(int x1, int y1, int x2, int y2);

};
