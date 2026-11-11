#include <iostream>

using namespace std;

// STEP 1: Function protorype
bool isPrime(long long n);

int main()
{
 // STEP 2: Get the two numbers from the user
 long long num1, num2;
 cout << "Enter two positive integers: ";
 cin >> num1 >> num2;
 cout << endl;

 // STEP 3: Make sure num1 is the smaller number
 // If num1 is bigger than num2, we swap them using a tempory variable
 if (num1 > num2)
 {
  long long temp = num1;
  num1 = num2;
  num2 = temp;
 }

 // STEP 4: Create variables to keep track of our results
 long long sum = 0;
 int twinCount = 0;
 long long lastPrime = -1; // Remembers the previous prime we found

 cout << "Twin primes: " << endl;

 // STEP 5: Loop through every number from num1 to num2
 for (long long current = num1; current <= num2; current++)
 {
  // Check if the current number is prime
  if (isPrime(current) == true)
  {
   // 5a. Add the prime number to our total sum
   sum = sum + current;

   // 5b. Check if it's a twim prime (difference of 2 from the last prime)
   if (lastPrime != -1 && current - lastPrime == 2)
   {
    cout << lastPrime << " and " << current << endl;
    twinCount = twinCount + 1;
   }

   // 5c. Save this prime as "lastPrime" before moving to the next number
   lastPrime = current;
  }
 }

 // STEP 6: Print the final totals
 cout << endl;
 cout << "Sum of all primes: " << sum << endl;
 cout << "Numer of twin primes: " << twinCount << endl;

 return 0;
}

// STEP 7: Function definition
bool isPrime(long long n)
{
 // Number 1 and below are not prime
 if (n <= 1)
 {
  return false;
 }

 // Check if "n" can be divided evenly by any number from 2 up to it's square root
 for (long long divisor = 2; divisor * divisor <= n; divisor++)
 {
  if (n % divisor == 0)
  {
   return false; // Found a divisor, so "n" is NOT prime
  }
 }

 return true; // No divisors found, so "n" IS prime
}

/*
Sample

Enter two positive integers: 1 30

Twin primes:
3 and 5
5 and 7
11 and 13
17 and 19

Sum of all primes: 129
Numer of twin primes: 4
*/
