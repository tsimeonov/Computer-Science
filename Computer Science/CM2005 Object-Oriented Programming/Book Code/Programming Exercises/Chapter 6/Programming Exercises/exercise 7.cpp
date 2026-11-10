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
 // If num1 is bigger than num2, we swam them using a tempory variable
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
  // Check if the current number if prime
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

 return 0;
}