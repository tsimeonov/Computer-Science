#include <iostream>

using namespace std;

int main()
{
 int num;
 bool isPrime;
 int divisor = 0;

 cout << "Enter an integer number: ";
 cin >> num;
 cout << endl;

 // Before doing any heavy math, theprogram can handle some special cases immedialtly
 // If a number is 0,1 or negative, it can't be a prime number
 if (num <= 1)
 {
  isPrime = false;
 }
 // 2 is the only even prime number
 else if (num == 2)
 {
  isPrime = true;
 }
 // If a number is divisible by 2, but not 2 itself, it is an even composite number
 // (4,6,8)
 else if (num % 2 == 0)
 {
  isPrime = false;
 }
 // If a number passes all the above checks, it means the number is odd and greater than 2
 else
 {
  // Assume it's a prime until preven otherwise
  isPrime = true;
  // Start checking at 3 (the first odd number)
  divisor = 3;

  while (divisor * divisor <= num && isPrime == true)
  {
   if (num % divisor == 0)
   {
    // If divided evenly, so it's not prime
    isPrime = false;
   }
   // Jump to the next odd number
   divisor = divisor + 2;
  }
 }
}