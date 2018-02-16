#include <iostream> 

using namespace std;

int main(){
  int number{0};
  int opsCounter{0};

  cin >> number;
  
  while(number != 1)
  {
   if(number % 2 == 0)
    {
      
    number /= 2;
    opsCounter += 1;
    }
    else 
    {
      number = (number * 3) + 1;
      opsCounter += 1;
    }
  }
  cout << opsCounter << endl;
}