// lab20A2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
#include "node.h"
#include "linkedList.h"
using namespace std;


int main()
{
	Student s1("Ira", "Glass");
	Student s2("Adam", "Driver");
	Student s3("Hasan", "Piker");
	

	LinkedList list;

	list.addLast(s1);
	list.addLast(s2);
	list.addLast(s3);

	

	cout << "linked list app!\n";
	cout << "------------------\n\n";

	cout << "Full queue:\n";
	list.display();
	cout << "\n\n";


	cout << "Pop 1st element until queue is empty:\n";
	while (!list.isEmpty()) {
		cout << list.getFirst().getFirstName() << " " << list.getFirst().getLastName() << endl;
		list.deleteFirst();
	}

	list.display();

	return 0;
}

