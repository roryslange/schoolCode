#include "linkedList.h"

bool LinkedListType::isEmpty() const
{
	if (first == nullptr && last == nullptr)
		return 1;
	else
		return 0;
}

int LinkedListType::getSize() const
{
	return size;
}

void LinkedListType::display() const
{

}

void LinkedListType::addLast(Student studentData)
{
	NodeType* newNode = new NodeType;
}

LinkedListType::LinkedListType()
{
}
