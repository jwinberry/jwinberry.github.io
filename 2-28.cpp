// Digits of an integer

#include <iostream> 

using std::cout;
using std::cin;
using std:: endl;

int main(){
	int number1{0};
	int first{0};
	int second{0};
	int third{0};
	int fourth{0};
	int fifth{0};

	cout << "Enter a 5 digit long integer :   ";
	cin >> number1;

	if (number1 < 10000){
		cout << "Invalid. Try Again.";
	}

	if(number1 > 99999){
		cout << "Invalid. Try Again.";
	}

first = number1/10000;
second = (number1/1000)%10;
third = (number1/100)%10;
fourth = (number1/10)%10;
fifth = number1%10;

cout << first << "   "<< second << "   "<< third << "   " << fourth << "   "<< fifth << endl;
}