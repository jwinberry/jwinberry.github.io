#include <iostream>
#include <iomanip>


double celsiusConv(double fahrenheit) {
    return ((fahrenheit - 32) * 5 / 9.0);
}

double fahrenheitConv(double celsius) {
    return (celsius * 1.8 + 32);
}



int main(){

    double fahrenheit = 0;
    double celsius = 0;

    std::cout << "Enter temperature in fahrenheit (32 - 212) for celsius conversion:  " << "\n";
    std::cin >> fahrenheit;
    fahrenheit = celsiusConv(fahrenheit);
    std::cout << "The celsius temperature is " << fahrenheit << "\n";
 
    std::cout << "Enter temperature in Celsius" << "\n";
    std::cin >> celsius;
    celsius = fahrenheitConv(celsius);
    std::cout << "The Fahrenheit temperature is: " << celsius << "\n";

} 










































