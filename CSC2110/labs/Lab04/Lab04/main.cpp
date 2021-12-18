


#include <iostream>
#include "account.h"
using namespace std;

int main()
{
	//creates object and constructor asks for name and inital
	//balance
	Account account1;
	Account account2;

	cout << endl;

	//prints initial name and balance

	cout << "Balance on account " << account1.name << " is now: $" << account1.balance << endl;
	cout << "Balance on account " << account2.name << " is now: $" << account2.balance << endl << endl;

	//deposit something in account1 withdrawal from account2

	cout << "Depositing $400 into account1..." << endl << endl;
	account1.deposit(400);

	cout << "\nwithdrawaling $700 from account2..." << endl << endl;
	account2.withdrawal(700);


	/*discussion answers:
	*
	you can keep an account from being created without a name by
	forcing the user to enter a name in the constructor funciton
	I did this in my program and you cannot continue without making
	a name for the account first

	when you take one of the methods out of the class it doesnt compile
	because it has no access to the public variables within the class
	same thing happens with the constructor function.

	*/



}