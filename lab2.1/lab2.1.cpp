#include <iostream>
#include<string>
#include "BankAccount.h"
using namespace std;

int main()
{
	double Balance;
	string Name;
	cout << "Enter the name ==> ";
	cin >> Name;
	cout << "Enter your balance ==> ";
	cin >> Balance;
	BankAccount firstaccount(Name,Balance);
	BankAccount secondaccount(Name);
	secondaccount.SetBalance(Balance);

	double Withdraw, Deposit;
	cout << "Enter your withdrawal amount ==> ";
	cin >> Withdraw;
	firstaccount.Withdraw(Withdraw);

	cout << "Enter deposit amount ==> ";
	cin >> Deposit;
	secondaccount.Deposit(Deposit);
}

