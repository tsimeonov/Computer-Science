#include <iostream>

using namespace std;

int main()
{
 // Step 1: set up cire variables
 // num: holds the origianl input
 // alternating_sum acts as our running score
 // sign acts as a flipper, bouncing between 1 add and -1 subtract
 int num;
 int alternating_sum = 0;
 int sign = 1;

 // Step 2: Get user input
 cout << "Enter a positive integer: ";
 cin >> num;
 cout << endl;

 // Step 3: prepar the state for the loop
 // "temp" is a working copy of num so we can chop it up without using the original
 int temp = num;

 // is_first_digit is a flag, we use it so we don't accidentally print
 // + or - in front of the very first number in our visual equation
 bool is_first_digit = true;

 // Start printing the visual equaltion
 cout << "Nr. splitted ";

 // Step 4: Start the extraction loop
 // Keep looping as long as there are digits to process
 while (temp > 0)
 {
  // Step 4a: Grab the last digit
  // The modulo operator divides by 10 and gives the remainder (the last digit)
  int digit = temp % 10;

  // Step 5: Build the visual equation
  if (is_first_digit)
  {
   // If it's the first digit, jut print it plain, thne turn the flag off forever
   cout << digit;
   is_first_digit = false;
  }
  else
  {
   // For all the following digits. check the sign varialbe to see if we should
   // print a plus or a minus before the number
   if (sign == 1)
   {
    cout << " + " << digit;
   }
   else
   {
    cout << " - " << digit;
   }
  }

  // Step 6: Perform the math and update state
  // multiply the digit by our current sign (1 or -1) and add it to tour score
  alternating_sum = alternating_sum + (digit * sign);

  // Flip the sign for the nect digit (1 becomes -1, and -1 becomes 1)
  sign = sign * -1;

  // Chop the last digit off our working number using integer division
  // 425 becomes 42
  temp = temp / 10;
 }

 // Step 7: Finalize visual output
 // The loop is over. Cap off the equation by printing the final socre
 cout << " = " << alternating_sum << endl;

 // Step 8: Evaluate divisibility
 // If the final score divided evenly by 11 meaning the remainder is 0.
 // then the original number is also divisible by 11
 if (alternating_sum % 11 == 0)
 {
  cout << num << " is divisible by 11" << endl;
 }
 else
 {
  cout << num << " is not divisible by 11" << endl;
 }

 return 0;
}