#include <iostream>

using namespace std;

int main()
{

 int num;
 bool isPrime;
 int divisor = 0;

 cout << "Enter a positive integer: ";
 cin >> num;
 cout << endl;

 // Before doing any heavy math, the program handles special cases
 // Numbers like 0,1 and negative numbers are never prime
 if (num <= 1)
 {
  isPrime = false;
 }
 // 2 i the only even prime number. If the user enter 2, we immediatley mark it as 2
 else if (num == 2)
 {
  isPrime = true;
 }
 // If a number is divisiable by 2 (and isn't 2 itself), it is an even composite number
 // like 4,6,8, we mark it as not prime
 else if (num % 2 == 0)
 {
  isPrime = false;
 }
 // If a number passes all three checks abovem it must be odd number greater that 2
 else
 {
  // assume it's prime utin prove otherwise
  isPrime = true;
  // Start checking at 3, the first odd factor
  divisor = 3;

  while (divisor * divisor <= num && isPrime == true)
  {
   if (num % divisor == 0)
   {
    // it divided evenly so it's not prime
    isPrime = false;
   }
   // Jump to the next odd number (3,5,7...)
   divisor = divisor + 2;
  }
 }

 if (isPrime == true)
 {
  cout << num << " is a prime number" << endl;
 }
 else
 {
  cout << num << " is not a prime number" << endl;
 }

 return 0;
}