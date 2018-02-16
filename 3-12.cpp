#include <iostream> 
#include "3-12.h"

using namespace std;


void displayAccount(Account acct)
{
	cout << "Account Owner: " << acct.getName() << endl;
	cout << "Account Balance: " << acct.getBalance() << endl;
	cout << "\n";
}



int main()
{

	Account account1{"Jane Doe", 50};
	Account account2{"John Doe", 50};

	displayAccount(account1);
	cout << "Enter deposit amount for " << account1.getName() << "'s account: ";
	int depositAmount;
	cin >> depositAmount;
	acctount1.deposit(depositAmount);
	cout << "\nAdded " << depositAmount << " to " << account1.getName() << "'s account." << endl;
	cout << "New Balance is: " << account1.getBalance() << endl;
	cout << "\n";
	

	displayAccount(account2);
	cout << "Enter deposit amount for " << account2.getName() << "'s account: ";
	cin >> depositAmount;
	acctount2.deposit(depositAmount);
	cout << "\nAdded " << depositAmount << " to " << account2.getName() << "'s account." << endl;
	cout << "New Balance is: " << account2.getBalance() << endl;
	cout << "\n";



} 