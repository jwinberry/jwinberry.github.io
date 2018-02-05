#include <iostream> 
#include "3-11.h"

using namespace std;


int main(){
	Employee employee1{"Jane", "Doe", 1000};
	Employee employee2{"John", "Smith", 1250};

	cout << "\nEmployee1(First Name): " << employee1.getName() << endl;
	cout << "\n\n(Last Name): " << employee1.getName2() << endl;
	cout << "\n\n(Monthly Salary) $ " << employee1.getEarnings() << endl;
	cout << "\n\nEmployee2(First Name): " << employee2.getName() << endl;
	cout << "\n\n(Last Name): " << employee2.getName2() << endl;
	cout << "\n\n(Monthly Salary) $ " << employee2.getEarnings() << endl;

	cout << "\n\nEnter raise amount for employee1 (Decimal Form): ";
	float raiseAmount;
	cin >> raiseAmount;
	cout << "adding " << raiseAmount << " to employee1's Monthly Salary.";
	employee1.raise(raiseAmount);

	cout << "\n\nEnter raise amount for employee2 (Decimal form): ";
	cin >> raiseAmount;
	cout << "adding" << raiseAmount << " to employee2's Monthly Salary.";
	employee2.raise(raiseAmount);

	cout << "\n\nEmployee1" << employee1.getName() << employee1.getName2() << "'s monthly salary is $ " << employee1.getEarnings();
	cout << "\n\nEmployee2" << employee2.getName() << employee2.getName2() << "'s monthly salary is $ " << employee2.getEarnings() << endl;


}