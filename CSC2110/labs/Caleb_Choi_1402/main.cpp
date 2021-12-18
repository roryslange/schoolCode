#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "LinkedListType.h"
using namespace std;

int main() {
    Student stu1("Stephen", "Curry");
    Student stu2("Klay", "Thompson");
    Student stu3("Caleb", "Choi");

    LinkedListType linkedList;
    linkedList.addLast(stu1);
    linkedList.addLast(stu2);
    linkedList.addLast(stu3);
    cout << "Linked List Appp!" << endl;
    cout << "------------------------" << endl;
    linkedList.display();
    return 0;
}