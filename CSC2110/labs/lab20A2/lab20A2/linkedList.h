#pragma once
#include "node.h"


class LinkedList {
private:
	int size;
	NodeType* first;
	NodeType* last;

public:
	bool isEmpty() const;
	int getSize() const;
	void display() const;
	void addLast(Student studentData);
	void addFirst(Student studentData);
	void deleteFirst();
	void deleteLast();
	Student getFirst() const;
	Student getLast() const;
	LinkedList();
};