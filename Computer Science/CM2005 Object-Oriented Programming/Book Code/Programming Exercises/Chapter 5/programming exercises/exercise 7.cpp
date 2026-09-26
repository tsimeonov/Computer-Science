/*
The program uses a famous trick to check if a large number is divisible by 11.
Instead of dividing the wholw number by 11, the trick is to add and substract it's
digits one by one, from right to left. If the final "score" is divisble by 11, the original number is too.
*/

#include <iostream>

using namespace std;

int main()
{

 // ==========================================
 // STEP 1: SET UP CORE VARIABLES
 // ==========================================
 // 'num' : holds the original input
 // 'alternating_sum' : acts as our running score
 // 'sign' : acts as a flipper, boincing between 1 (add) and
 // -1 (substract)
 int num;
 int alternating_sum = 0;
 int sign = 1;

 // ==========================================
 // STEP 2: GET USER INPUT
 // ==========================================
 // Prompt the user and capture their number
 cout << "Enter a positive integer: ";
 cin >> num;
 cout << endl;

 // ==========================================
 // STEP 3: PREPARE THE STATE FOR THE LOOP
 // ==========================================
 // 'temp' : is a working copy of 'num' so we can chop it up without losing the original.
 int temp = num;

 // 'is_first_digit': is a flag. We use it so we don't accidentally print
 // "+" or "-" in front of the very first number is our visual equation
 bool is_first_digit = true;

 // Start printing the visual equation
 cout << "t = ";

 // ==========================================
 // STEP 4: START THE EXTRACTION LOOP
 // ==========================================
 // Keep looping as long as there are digits to process
 while (temp > 0)
 {
  // STEP 4A: GRAB THE LAST DIGIT
  // The modulo operator (%) divides bt 10 and gives the remainder
  // (the last digit)
  int digit = temp % 10;

  // ==========================================
  // STEP 5: BUILD THE VISUAL EQUATION
  // ==========================================
  if (is_first_digit)
  {
   // If it's the first digit, just print is plain, then turn the flag off forever
   cout << digit;
   is_first_digit = false;
  }
  else
  {
   // For all following digits, check the 'sign' variable to see if we
   // should print a plus or a minus before the number
   if (sign == 1)
   {
    cout << " + " << digit;
   }
   else
   {
    cout << " - " << digit;
   }
  }

  // ==========================================
  // STEP 6: PERFORM THE MATH & UPDATE STATE
  // ==========================================
  // Multiply the digit by our current sign (1 or -1) and add it to our score
  alternating_sum = alternating_sum + (digit * sign);

  // Flip the sign for the nect digit (1 becomes -1, and -1 becomes 1)
  sign = sign * -1;

  // Chop the last digit off our working number using integer division.
  // Example: 425 becomes 42
  temp = temp / 10;
 }

 // ==========================================
 // STEP 7: FINALIZE VISUAL OUTPUT
 // ==========================================
 // The loop is over. Cap off the equation by printing the final score
 cout << "  = " << alternating_sum << endl;

 // ==========================================
 // STEP 8: EVALUATE DIVISIBILITY
 // ==========================================
 // If the final score divides evenly by 11 (meaning the remainder is 0)
 // then the originalnumber is also divisible by 11
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

/*
Sample
n = 8784204
Then t = 4 - 0 + 2 - 4 + 8 - 7 + 8 = 11

Because 2 is not divisible by 11, 54063297 is not divisible by 11
*/