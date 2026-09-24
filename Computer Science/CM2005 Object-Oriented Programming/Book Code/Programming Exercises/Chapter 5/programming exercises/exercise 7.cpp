/*
The program uses a famous trick to check if a large number is divisible by 11.
Instead of dividing the wholw number by 11, the trick is to add and substract it's
digits one by one, from right to left. If the final "score" is divisble by 11, the original number is too.
*/

#include <iostream>

using namespace std;

int main()
{
 // Variables
 // Holds the number you type in
 int num;
 // A copy of num. We use this copy to chop up the digits so we don't destroy the
 // origirnal num
 int temp = num;
 // The running score
 int alternating_sum = 0;
 // Acts as a flipper. It starts as 1 (for addition), then flips to -1 (for substraction)
 // and keeps bouncing back and forth
 int sign = 1;

 cout << "Enter a positive integer: ";
 cin >> num;
 cout << endl;

 // It processes the number one digit at a time, from right to left
 while (temp > 0)
 {
  // (Th grabber) This math trick always grabs the last digit of a number.
  // For 425, it grabs 5
  int digit = temp % 10;

  // (The math): It takes that 5 and multiplies it by our sign.
  // Since sign is currently 1, it adds 5 to our score
  alternating_sum = alternating_sum + (digit * sign);

  // Flip the sign for the next digit (1 becomes -1, -1 becomes 1)
  sign = sign * -1;

  // (The Eraser): This chops off the last digit. 425 becomes 42.
  temp = temp / 10;

  // The loop repeats. It grabs the 2, substracts it from the score, flips the sign back to positive and chops the 2 off so the number is just 4. It does this until the number is completly chopped down to 0, at which point the loop stops.
 }

 /*
 Once the loop finishes, all the addition and subtraction is done. The program looks at your final alternating_sum
 */

 // Using if (alternating_sum % 11 == 0), it asks "Does this final score divide cleanly by 11 with zetro remainder"

 if (alternating_sum % 11 == 0)
 {
  cout << num << " is divisible by 11" << endl;
 }
 else
 {
  cout << num << " is not divisible by 11" << endl;
 }
}