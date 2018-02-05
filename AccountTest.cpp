#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){
	Account myAccout;

	cout << "Initial account name: " <<myAccout.getName();

	cout << "\nPlease enter the account name: ";
	string theName;
	getline(cin, theName);
	myAccout.setName(theName);

	cout << "Name in object myAccout is: "
	<< myAccout.getName() << endl; 





}