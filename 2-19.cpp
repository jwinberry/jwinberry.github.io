// Arithmetic , Smallest, Largest 

#include <iostream> 

using std::cout;
using std::cin;
using std:: endl;

int main(){
	int number1{0};
	int number2{0};
	int number3{0};
	int sum{0};
	int average{0};
	int product{0};
	

	cout << "Input 3 different integers :   ";
	cin >> number1 >> number2 >> number3;


	sum = number1 + number2 + number3 ;
	average = (number1 + number2 + number3) / 3;
	product = number1 * number2 * number3 ;


	cout << "The sum is:" << sum << endl;
	cout <<"The average is: " << average << endl;
	cout << "The product is: " << product << endl;

	if ((number1<number2)&&(number1<number3))
		cout << "Smallest is " << number1 << endl;
	if ((number2<number1)&&(number2<number3))
		cout << "Smallest is " << number2 << endl;
	if ((number1<number1)&&(number3<number2))
		cout << "Smallest is " << number3 << endl;
	if ((number1>number2)&&(number1>number3))
		cout << "Largest is " << number1 << endl;
	if ((number1<number2)&&(number3<number2))
		cout << "Largest is " << number2 << endl;
	if ((number3>number2)&&(number3>number1))
		cout << "Largest is " << number3 << endl;

	
}






