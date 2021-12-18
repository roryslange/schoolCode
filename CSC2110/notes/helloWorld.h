#pragma once
#include <string>
#include <iostream>
using namespace std;

class hello {
private:
    int name = 1;

public:
    void printName() {
        cout << name << endl;
    }
};