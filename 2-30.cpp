// BMI CALCULATOR 

#include <iostream> 

using std::cout;
using std::cin;
using std:: endl;

int main(){
	int weight{0};
	int height{0};
	int x{0};
	int y{0};
	int bmi{0};
	
	
	cout << "Enter weight in pounds:   ";
	cin >> weight;

	cout << "Enter Height in inches: ";
	cin >> height;

	x = weight * 703; 
	y = height * height;
	bmi = x/ y; 

	cout << "BMI = " << bmi << endl;
	cout << "BMI VALUES \nUnder weight: less than 18.5 \nNormal: between 18.5 and 24.9"<< endl;
	cout << "Overweight: between 25 and 29.9 \nObese: 30 or greater" << endl;



}