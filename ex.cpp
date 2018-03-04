#include <iostream>
using std::cout;
using std::cin;
 
int integerPart(int, int );
int integerRemainder(int, int);
int separate(int);
 
int main()
{
   int a, b;
   int i;
 
   cout << "Enter two integers: ";
   cin >> a >> b;
   cout << "\ninteger part of the quotient is " << integerPart(a, b);
   cout << "\ninteger remainder is " << integerRemainder(a, b);
 
   cout << "\nEnter integer between 1 and 32767: ";
   cin >> i;
   separate(i);
 
   return 0;
}
 
// integer part of the quotient function
int integerPart(int a, int b)
{
   return (a / b) * b;
}
 
int integerRemainder(int a, int b)
{
   return a % b;
}
 
//separate function
int separate(int i)
{
   if(i >= 10000)
   {
      cout << i/10000 << "  ";
      i = i % 10000;
   }
   if(i >= 1000)
   {
      cout << i/1000 << "  ";
      i = i % 1000;
   }
   if(i >= 100)
   {
      cout << i/100 << "  ";
      i = i % 100;
   }
   if(i >= 10)
   {
      cout << i/10 << "  ";
      i = i % 10;
   }
   cout << i;

return 0;

}