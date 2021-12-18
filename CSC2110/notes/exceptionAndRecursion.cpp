//notes on exceptions and recursion

using namespace std;
#include <iostream>

//=================================================================
//exception handling

class dataType {
};

int main() {
    try {
        int num = 0;

        if (num == 0)
            throw dataType();


        //could also use assert


    }

    catch (dataType) { //must pass a data type, not a variable name through
        cout << "yo";
    }

    

    /* 
    when exception occurs programmer has 3 options
        terminate
        include code to recover
        log error and continue
    */
}