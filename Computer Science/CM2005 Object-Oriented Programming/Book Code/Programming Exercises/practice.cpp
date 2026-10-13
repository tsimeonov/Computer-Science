/*
the code is the collatz conjecture often called the 3n+1 problem.
It defines a sequence where you start with an integer x and generate the next number based on whether the current number is even or odd, until the number reaches 1.
*/

#include <iostream>

using namespace std;

int main()
{
 long long currentValue = 0;

 // Prompt the user for input
 cout << "Enter the starting integer x: ";
 cin >> currentValue;
 cout << endl;

 // Validate input to ensure it is a positive integer
 if (currentValue <= 0)
 {
  cout << "Please enter a positive integer greater than 0: " << endl;

  return 1;
 }

 return 0;
}