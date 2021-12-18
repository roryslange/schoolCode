#include "linkedList.h"

bool LinkedList::isEmpty() const
{
	if (first == nullptr && last == nullptr)
		return 1;
	else
		return 0;
}

int LinkedList::getSize() const
{
	return size;
}

void LinkedList::display() const
{
	NodeType* current;
	current = first;

	while (current != nullptr) {
		cout << current->data.getFirstName() << " " << current->data.getLastName() << endl;
		current = current->next;
	}
}

void LinkedList::addLast(Student studentData)
{
	NodeType* newNode = new NodeType;
	newNode->data = studentData;

	if (isEmpty()) {
		first = newNode;
		last = newNode;
	}
	else {
		last->next = newNode;
		last = newNode;
	}

	size++;
}

void LinkedList::addFirst(Student studentData)
{
	NodeType* newNode = new NodeType;
	newNode->data = studentData;

	if (isEmpty()) {
		first = newNode;
		last = newNode;
	}
	else {
		newNode->next = first;
		first = newNode;
		
	}
	size++;
}

void LinkedList::deleteFirst()
{
	if (isEmpty()) {
		cout << "list is empty cannot delete first item.\n";
	}

	else if (size == 1) {
		delete first;
		first = nullptr;
		last = nullptr;
		size--;
	}

	else {
		NodeType* temp;
		temp = first;
		first = first->next;
		delete temp;
		size--;
	}
}

void LinkedList::deleteLast()
{
	if (isEmpty())
		cout << "cannot delete last the list is empty\n";
	else if (size == 1) {
		delete first;
		first = nullptr;
		last = nullptr;
		size--;
	}

	else {
		NodeType* prev;
		prev = first;

		while (prev->next != last) {
			prev = prev->next;
		}

		delete last;
		prev->next = nullptr;
		last = prev;
		
		size--;

	}
}

Student LinkedList::getFirst() const
{
	if (first == nullptr) {
		cout << "List is empty cannot return anything.\n";
	}
	else
		return first->data;

}

Student LinkedList::getLast() const
{
	if (first == nullptr) {
		cout << "List is empty cannot return anything.\n";
	}
	else
		return last->data;
}

LinkedList::LinkedList()
{
	size = 0;
	first = nullptr;
	last = nullptr;

}
