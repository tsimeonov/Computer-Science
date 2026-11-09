#include <iostream>

using namespace std;

// Function prototype
bool isPrime(long long n);

int main()
{
 long long num1, num2;

 // 1. Propmt and read input
 cout << "Enter two positive numbers: ";
 cin >> num1 >> num2;
 cout << endl;

 // Input validation
 if (num1 <= 0 || num2 <= 0 || num1 >= 1000000 || num2 >= 1000000)
 {
  cout << "Invalid input. Both numbers must be between 1 and 999,999,999." << endl;
  return 1;
 }

 // 2. Ensure lowerBound <= upperBound
 long long lowerBound = (num1 < num2) ? num1 : num2;
 long long upperBound = (num1 > num2) ? num1 : num2;

 return 0;
}

// Helper function to check if a number is prime
bool isPrime(long long n)
{
 if (n <= 1)
 {
  return false;
 }

 if (n == 2)
 {
  return true;
 }

 if (n % 2)
 {
  return false;
 }

 long long limit = static_cast<long long>(sqrt(n));

 for (long long divisor = 3; divisor <= limit; divisor += 2)
 {
  if (n % divisor == 0)
  {
  }
  return false;
 }

 return true;
}