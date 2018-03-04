//Separating Didgits 

#include <iostream>

using namespace std;
using std::string;


int main(){
	int a{0};
	int b{0};
	int integerPart{0};
	int integerRemainder{0};


	cout << "Enter two integers: " << endl;
	cin >> a >> b;
	cout << "Integer part of the quotient is " << integerPart << endl;
	cout << "Integer remainer is " << integerRemainder << endl;

	



// Integer part of quotient function 

int integerPart()
{
	return (a / b) * b;

}

int integerRemainder()
{
	return a % b;
}


}
























