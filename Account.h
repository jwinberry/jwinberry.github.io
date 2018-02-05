#include <string> 

using std::string;
using std::cout;
using std::cin;
using std:: endl;

class Account 
{
public:

	Account(std::string accountName, int initialBalance)
	:name{accountName}
	{

		if (initialBalance > 0) 
		{
			balance = initialBalance;
		}
	}
	void deposit(int depositAmount) {
		if (depositAmount > 0 )
		{
			balance = balance + depositAmount;
		}
	}

	void withdraw(int withdrawAmount) 
	{
		if(withdrawAmount > balance)
		{
			cout << "Withdrawal amount exceeded account balance.";
		}
		else if (withdrawAmount > 0) 
		{
			balance = balance - withdrawAmount;
		}
		

	}

	int getBalance() const 
	{
		return balance;

	}
	void setName(string accountName)
	{
		name = accountName;
	}

	string getName() const
	{
		return name;

	}
private:
	string name;
	int balance{0};
};

