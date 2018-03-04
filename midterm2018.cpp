#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using std::string;



void problemOne() {
	int month{0};
	int day{0};
	int year{0};
	string month2,day2;

	cout << "Problem 1" << endl;
	cout << "Enter month(numerically): ";
	cin >> month;

	cout << "Enter day (numerically): ";
	cin >> day;

	cout << "Enter year (numerically): ";
	cin >> year;

	int total = month + day + year;
	int total2 = pow(total, 2);
	int total3 = total2 % 32;


	if(month < 10){
		month2 = "0" + to_string(month);
	}

	else{
		month2 = to_string(month);
	}

	if(day < 10){
		day2 = "0" + to_string(day); 

	}

	else{
		day2 = to_string(day) ;
	}


	cout << "Jordan Winberry, ";
	cout << month2 << "/";
	cout << day2 << "/";
	cout << year << ", ";
	cout << total3 << endl;
}

void problemTwo() {
	int loanAmount{0};
	double AnnIntRate{0};
	int years{0};
	double monthlyPayment{0};
	double decRate{0};
	double monthIntRate;
	double months{0};

	cout << "Problem 2" << endl;

	cout << "Enter loan amount: ";
	cin >> loanAmount;

	cout << "Enter annual interest rate as a percent: ";
	cin >> AnnIntRate;
	decRate = AnnIntRate / 100; 
	monthIntRate = decRate / 12;

	cout << "Enter number of years: ";
	cin >> years;
	months = years * 12;

	monthlyPayment = ((monthIntRate * loanAmount)) / (1-pow(1 + monthIntRate,-months));

	cout << "Monthly payment for $" << loanAmount << " at " << AnnIntRate << "% " << "APR over "<< years << " years is $" << monthlyPayment << endl;

}

void problemThree() {
	int numbers{1};
	int total{0};

	cout << "Problem 3" << endl;
	while(numbers > 0){
		cout << "enter positive number or zero to get total: ";
		cin >> numbers;

		if(numbers == 10){
			total *= 10;

		}
		else if (numbers % 2 == 0) {
			total += (numbers * 3);
		}
		else if (numbers > 0) {
			total *= 2;
		}
	}
	cout << "Total: " << total << endl;



}



class FizzBoo {
public: 

	FizzBoo(int goobs)
	{
		if (goobs >= 1) {
			xBoo = goobs;
			wooHoo = goobs;
		}
	}
	FizzBoo(int num1, int num2)
	{
		if(num1 >= 1 && num2 >= 1) {
			xBoo = num1;
			wooHoo = num2;
		}
	}

	int cool()
	{
		return xBoo * wooHoo;
	}

	void setXBoo(int number) {
		if (number >= 1) {
			xBoo = number;
		}
	}




private:
	int xBoo{0};
	int wooHoo{0};
};


void problemFour() {
	int number{0};
	int number2{0};

	cout << "Problem 4 " << endl;

	cout << "Enter a number greater than 1 to create new FizzBoo: ";
	cin >> number;
	FizzBoo fizz1{number};
	cout << "FizzBoo equals: " << fizz1.cool() << endl;

	cout << "Set xBoo, enter a number greater than 1: ";
	cin >> number; 
	fizz1.setXBoo(number);
	cout << "FizzBoo now equals: " << fizz1.cool() << endl;

	cout << "Enter number for xBoo (must be greater than 1): ";
	cin >> number;
	cout << "Enter number for wooHoo (must be greater than 1): ";
	cin >> number2;

	FizzBoo fizz2{number, number2};
	cout << "FizzBoo equals: " << fizz2.cool() << endl;


}

int main() {
	cout << "Jordan Winberry\n";
	problemOne();
	problemTwo();
	problemThree();
	problemFour();
	return 0;
}

