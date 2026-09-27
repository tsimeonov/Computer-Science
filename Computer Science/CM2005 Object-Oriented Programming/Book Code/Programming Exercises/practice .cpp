#include <iostream>

using namespace std;

int main()
{
 // Step 1: set up core variables
 int num;
 int alternating_sum = 0;
 int sign = 0;

 // Step 2: get user input
 cout << "Enter positive integer";
 cin >> num;
 cout << endl;

 // Step 3: Prepare the state for the loop
 // temp : is a working copy of num so we can chop it up without losing the original
 int temp = num;

 // is_first_right is a flag. We use it so we dont accidentally print
 // + or - in front of the very first number in our visual equation
 bool is_first_right = true;

 // Start printing the visual equation
 cout << "t: " << endl;

 // Step 4: Start the extraction loop
 // keep looping as long as there are digits to process
 while (temp > 0)
 {
  // Step 4A: grab the last digit
  // the module operator % divides by 10 and gives the remainder
  int digit = temp % 10;

  // Step 5: build the visual equation
  if (is_first_right)
  {
   // If it;s the first digit, just print it plain, then turn the flag off forever
   cout << digit;
   is_first_right = false;
  }
  else
  {
   // For all following digits, check the sign variable to see if we
   //  shouldprint a plus or a minus before the number
   if (sign == 1)
   {
    cout << " + " << digit;
   }
   else
   {
    cout << " - " << digit;
   }
  }

  // Step 6: Perform the math and update sign
  // Multiply the digit by our current sign 1 or -1 and add it ti our store
  alternating_sum = alternating_sum + (digit * sign);

  // Flip the sign for the next digit (1 becomes -1 and -1 becomes 1)
  sign = sign * -1;
 }

 return 0;
}