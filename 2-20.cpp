/* Diameter, Circumference, and Area of a circle.    */
#include <iostream> 

using std::cout;
using std::cin;
using std:: endl;

int main(){
	int radius{0};
	int diameter{0};
	int circumference{0};
	int area{0};
	
	

	cout << "Input radius of circle as an integer :   ";
	cin >> radius;

	cout << "Diameter = " <<  radius * 2  <<   endl;
	cout << "Circumference =  " << (radius * 2) * 3.14159 << endl;
	cout << "Area = " <<  3.14159 * (radius * radius) << endl;s


}