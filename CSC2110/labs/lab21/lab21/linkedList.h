#pragma once
#include "node.h"

class LinkedListType {
private:
	int size;
	NodeType* first;
	NodeType* last;

public:
	bool isEmpty() const;
	int getSize() const;
	void display() const;
	void addLast(Student studentData);
	LinkedListType();
};