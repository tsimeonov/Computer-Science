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
 }

 // Initialize the step counter k
 int stepCounter = 0;

 // Print the initial numver in the sequence
 cout << "The sequence is: " << currentValue << endl;

 // Loop until the sequence reaches 1
 while (currentValue != 1)
 {
  // check if x is even
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

  // increment the step counter
  stepCounter = stepCounter + 1;
 }

 // Output the total number of steps taken to reach 1
 cout << "The integer k is: " << stepCounter << endl;

 return 0;
}