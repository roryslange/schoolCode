#include "complex.h"
#include <iostream>
using namespace std;

Complex Complex::operator-(Complex const& obj)
{
	Complex output;

	output.real = real - obj.real;
	output.img = img - obj.img;

	return output;
}

Complex Complex::operator/(Complex const& obj)
{
	Complex output;
	if (obj.real == 0 && obj.img == 0)
		cout << "cannot do operation: dividing by 0\n";
	else {
		output.real = ((real * obj.real) + (img * obj.img)) / ((obj.real * obj.real) + (obj.img * obj.img));
		output.img = ((-1 * real * obj.img) + (img * obj.real)) / ((obj.real * obj.real) + (obj.img * obj.img));
	}

	return output;
}

Complex Complex::operator+(Complex const& obj)
{
	Complex output;

	output.real = real + obj.real;
	output.img = img + obj.img;

	return output;
}

void Complex::print() const
{
	cout << real << " + " << img << "i\n";
}

Complex::Complex(int real, int img)
{
	this->real = real;
	this->img = img;
}
