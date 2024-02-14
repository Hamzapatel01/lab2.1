#pragma once
#include <string>
using namespace std;

class BankAccount
{
private:
	double Balance;
	string Name;

public:
	 BankAccount(string);
	 BankAccount(string, double);
	void Withdraw(double);
	void Deposit(double);
	void SetBalance(double);
	string GetName();
	double GetBalance();
};


