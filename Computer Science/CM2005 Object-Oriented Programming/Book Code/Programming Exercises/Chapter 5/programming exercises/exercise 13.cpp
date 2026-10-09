/*
The text in your prompt describes the famous Collatz Conjecture (often called the $3n+1$ problem). It defines a sequence where you start with an integer $x$, and generate the next number based on whether the current number is even or odd, continuing until the number reaches 1.
*/

#include <iostream>

using namespace std;

int main()
{

 long long x = 0;

 // Prompt the user for input
 cout << "Enter the starting integer x: ";
 cin >> x;
 cout << endl;

 // Validate input to ensure it is a positive integer
 if (x <= 0)
 {
  cout << "Please enter a positive integer greater than 0" << endl;

  return 1;
 }

 // Initialize the step couter k
 int k = 0;

 // Print the initial number in the sequence
 cout << "The sequence is: " << x << endl;

 // Loop until the sequence reaches 1
 while (x != 1)
 {
  // Check if x is even
  if (x % 2 == 0)
  {
   x = x / 2;
  }
  else
  {
   x = (3 * x) + 1;
  }

  // Print the next number in the sequence
  cout << x << endl;

  // Increment the step counter
  k = k + 1;
 }

 // Output the total number of steps taken to reach 1
 cout << "The integer k is: " << k << endl;

 return 0;
}