/*
The code is the Collatz Conjecture (often called the 3n+1 problem). It defines a sequence where you start with an integer x, and generate the next number based on whether the current number is even or odd, continuing until the number reaches 1.
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
  cout << "Please enter a positive integer greater than 0" << endl;

  return 1;
 }

 // Initialize the step couter k
 int stepCount = 0;

 // Print the initial number in the sequence
 cout << "The sequence is: " << currentValue << endl;

 // Loop until the sequence reaches 1
 while (currentValue != 1)
 {
  // Check if x is even
  if (currentValue % 2 == 0)
  {
   currentValue = currentValue / 2;
  }
  else
  {
   currentValue = (3 * currentValue) + 1;
  }

  // Print the next number in the sequence
  cout << currentValue << endl;

  // Increment the step counter
  stepCount = stepCount + 1;
 }

 // Output the total number of steps taken to reach 1
 cout << "The integer k is: " << stepCount << endl;

 return 0;
}