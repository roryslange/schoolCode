#pragma once
#include <iostream>
using namespace std;

class Account {
public:
	string name;
	float balance;

	//deposit money into the account then print the new total
	void deposit(float amount = 0) {
		balance += amount;
		cout << "Balance on account " << name << " is now: $" << balance << endl;

	}

	//withdrawal money from the account then print the new total
	void withdrawal(float amount = 0) {
		balance -= amount;
		cout << "Balance on account " << name << " is now: $" << balance << endl;
	}

	//print name of the bank account
	void nameShow() { 
		cout << "name of the account is: " << name << endl;
	}

	//print the balance of the bank account
	void balanceShow() {
		cout << "balance of the account is: " << balance << endl;
	}

	//constructor function obtains name and initial balance of the account
	Account() {
		cout << "Enter the name of the account: ";
		cin >> name;
		
		cout << "Enter the balance of the account: ";
		cin >> balance;
	}
};