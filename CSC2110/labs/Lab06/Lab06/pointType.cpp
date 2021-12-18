#pragma once
#include "pointType.h"
#include <math.h>

using namespace std;

int PointType::getX() const {
	return x;
}  

int PointType::getY() const {
	return y;
}

void PointType::setX(int input) {
	x = input;
}

void PointType::setY(int input) {
	y = input;
} 

double PointType::distance(PointType p) {
	return sqrt(pow( (double) (getX() - p.getX()), 2)
		+ pow( (double) (getY() - p.getY()), 2)); //distance formula
}

PointType::PointType() {
	x = 0;
	y = 0;
}

PointType::PointType(int inputX, int inputY) {
	x = inputX;
	y = inputY;
}