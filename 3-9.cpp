#include <iostream> 
#include "Account.h"

using namespace std;


int main()
{
Account account1{"Jane Doe", 50};
Account account2{"John Doe", 50};

cout << "account1: " << account1.getName() << "balance is $"
<< account1.getBalance();

cout << "\naccount2: " << account2.getName() << "balance is $"
<< account2.getBalance();

cout << "\n\nEnter deposoit amount for account1: "; 
int depositAmount;
cin >> depositAmount;
cout << "adding " << depositAmount << " to account1 balance. ";
account1.deposit(depositAmount);

cout << "\n\nEnter withdraw amount for account1: ";
int withdrawAmount;
cin >> withdrawAmount;
cout << "subtracting " << withdrawAmount << " from account1 balance. ";
account1.withdraw(withdrawAmount);

cout << "\n\naccount1: " << account1.getName() << " balance is $"
<< account1.getBalance();


cout << "\n\nEnter Deposit Amount for account2: "; 
cin >> depositAmount;
cout << "adding " << depositAmount << " to account2 balance. ";
account2.deposit(depositAmount);

cout << "\n\nEnter Withdraw Amount for account2: ";
cin >> withdrawAmount;
cout << "subtracting " << withdrawAmount << " from account2 balance. ";
account2.withdraw(withdrawAmount);


cout << "\naccount2: " << account2.getName() << " balance is $" 
<< account2.getBalance() << endl;










} 