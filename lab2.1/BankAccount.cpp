#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(string Name)
{
	this->Name;
}

 BankAccount::BankAccount(string Name, double balance) {
	this->Name = Name;
	this->Balance = balance;
}

 void BankAccount::Withdraw(double amount) {
	 if (amount >= 500 || amount>Balance) {
		 cout << "Hello! " << this->Name<<endl << "The amount is too big to be withdrawn" << endl;
	 }
	 else {
		 cout << "Hello! " << this->Name << endl;
		 cout << "Your previous balance was ==> " << this->Balance << endl;

		 this->Balance = this->Balance - amount;
		 cout << "Your new balance is ==> " << this->Balance << endl;
	 }
}

void BankAccount::Deposit(double amount) {
	if (amount >= 1000) {
		cout << "The amount is too big to be deposited ";
	}
	else {
		cout << "The amount is deposited successfully" << this->Name << endl;
		cout << "Your previous balance was ==> " << this->Balance << endl;
		this->Balance = this->Balance + amount;
		cout << "Your new balance is ==> " << this->Balance << endl;
	}
}
void BankAccount::SetBalance(double amountmade) {
	this-> Balance  = amountmade;
}
string BankAccount::GetName() {
	return this->Name;
}
double BankAccount::GetBalance() {
	return this->Balance;
}