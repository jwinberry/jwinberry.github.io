#include <string> 
#include <iostream>

using namespace std;

class Employee{
public:
	explicit Employee(string firstName, string lastName, int salary )
	: givenName{firstName}, surName{lastName}{

		if(salary > 0)
		{
			earnings = salary;
		}
	}
	void raise(float raiseAmount)
	{
		if(raiseAmount > 0)
		{
			earnings = (earnings * raiseAmount) + earnings;

		}
	}
	int getEarnings() const{
		return earnings;
	}
	
	void setName(string firstName){
		givenName = firstName;
	}
	std::string getName() const{
		return givenName;
	}

	void setName2(std::string lastName){
		surName = lastName;
	}
	std::string getName2() const{
		return surName;
	}

	
private:
	std::string givenName;
	std::string surName;
	int earnings{0};
};