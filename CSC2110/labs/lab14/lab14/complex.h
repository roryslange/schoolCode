#pragma once

using namespace std;


class Complex {
public:
	int real, img;

	Complex operator - (Complex const& obj);
	Complex operator / (Complex const& obj);
	Complex operator + (Complex const& obj);

	void print() const;

	Complex(int real = 0, int img = 0);
};