// Lab11Question2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

class Student {
private:
	string name;
	int id;
	int size = 3;
public:

	int* marks = new int[size];

	string getName() const {
		return name;
	}

	int getId() const {
		return id;
	}

	int* getMarks() const {
		return marks;
	}

	int getSize() const {
		return size;
	}

	void setName(string input) {
		name = input;
	}

	void setId(int input) {
		id = input;
	}

	Student() {
		name = "";
		id = 0;
		for (int i = 0; i < size; i++) {
			marks[i] = 0;
		}
	}

	/*void setMarks(int mark1, int mark2, int mark3) {
		marks[0] = mark1;
		marks[1] = mark2;
		marks[2] = mark3;
	}*/

};

int main() {
	Student* sPtr;
	Student s;
	string input;
	int inputInt;
	sPtr = &s;

	cout << "Please Enter a name: ";
	cin >> input;
	sPtr->setName(input);

	cout << "Please Enter an ID: ";
	cin >> inputInt;
	sPtr->setId(inputInt);

	for (int i = 0; i < sPtr->getSize(); i++) {
		cout << "Enter mark " << i + 1 << ": ";
		cin >> inputInt;
		sPtr->marks[i] = inputInt;
	}

	showStudent(sPtr);
}

void showStudent(Student*& s) {
	cout << "Student info: \n";
	cout << "Name: " << s->getName() << endl;
	cout << "ID: " << s->getId() << endl;
	for (int i = 0; i < s->getSize(); i++) {
		cout << "Mark " << i + 1 << ": " << s->marks[i] << endl;
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
