// BMI CALCULATOR 

#include <iostream> 

using std::cout;
using std::cin;
using std:: endl;

int main(){
	int weight{0};
	int height{0};
	
	
	cout << "Enter weight in pounds:   ";
	cin >> weight;

	cout << "Enter Height in inches: "
	cin >> height;

	cout << "BMI = " << (weight * 703) / height * height << endl;
	cout << "BMI VALUES \n Under weight: less than 18.5 \n Normal: between 18.5 and 24.9"<< endl;
	cout << "Overweight: between 25 and 29.9 \n Obese: 30 or greater" << endl;
	


}