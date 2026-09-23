#include <iostream>

using namespace std;

int main()
{
 int num;
 bool isPrime;
 int divisor = 0;

 cout << "Enter an intege number: ";
 cin >> num;
 cout << endl;

 // Before doing any heavy math, the program can handle some special cases
 // Numbers like 0, 1 -1, are not prime numbers
 if (num <= 1)
 {
  isPrime = false;
 }

 return 0;
}