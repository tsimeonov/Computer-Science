#include <iostream>

using namespace std;

int main()
{

 int num;
 bool isPrime; // true or false
 int divisor = 0;

 cout << "Enter a positive integer: ";
 cin >> num;
 cout << endl;

 // Before doing any heavy math, the program handles special cases immediately
 // Number like 0, 1 or negative numbers ar never prime
 if (num <= 1)
 {
  isPrime = false;
 }
 // 2 is the only even prime number. If the user enters 2, we immediately mark it as prime
 else if (num == 2)
 {
  isPrime = true;
 }
 /* If a number is divisible by 2 (and isnt' 2 itself), it is ab even composite number
(4,6,8,10.....) We mark it as not prime */
 else if (num % 2 == 0)
 {
  isPrime = false;
 }

 /* If a number passes all three checks above, it must be odd number greater that 2 (sucha as 9,15,25,97)
  */
 else
 {
  // Assume it's prime until proven otherwise
  isPrime = true;
  // Start checking at 3 (the first odd factor)
  divisor = 3;

  while (divisor * divisor <= num && isPrime == true)
  {
   if (num % divisor == 0)
   {
    // It divided evenly, so it's not prime
    isPrime = false;
   }
   // Jump to the next odd number (3,5,7,9...)
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