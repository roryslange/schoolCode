#pragma once

using namespace std;

template <class t> class DynamicArray {
private:
	t* elements;
	int maximumSize;
	int position;
public:
	void addElement(t e) {
		if (position < maximumSize)
			elements[position++] = e;
	}


	t getElement(int p) const {
		return elements[p];

	}
	int getSize() const {
		return position;
	}
	DynamicArray(int s = 10) : maximumSize(s), position(0) {
		elements = new t[s];
	}
};

