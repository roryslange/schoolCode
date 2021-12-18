#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "LinkedListType.h"
#include"NodeType.h"
#include "Student.h"
using namespace std;


bool LinkedListType::isEmpty() const
{
	if (first == NULL && last == NULL) {
		return true;
	}
	return false;
}

int LinkedListType::getSize() const
{
	return size;
}

void LinkedListType::display() const
{
	NodeType* current;
	current = first;
	while (current != NULL)
	{
		cout << current->data.getFirstname() << " " << current->data.getLastname() << endl;
		current = current->next;
	}
}

void LinkedListType::addLast(Student studentData)
{
	NodeType* newNode = new NodeType();
	newNode->data.setFirstname(studentData.getFirstname());
	newNode->data.setLastname(studentData.getLastname());

	if (isEmpty())
	{
		first = newNode;
		last = newNode;
	}
	else
	{
		last->next = newNode;
		last = newNode;
	}
	size++;
}

LinkedListType::LinkedListType()
{
	size = 0;
	first = NULL;
	last = NULL;
}