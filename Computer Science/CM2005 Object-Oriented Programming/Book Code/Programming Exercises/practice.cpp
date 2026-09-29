#include <iostream>

using namespace std;

int main()
{

 // Step 1: set up core variables
 int num;
 int alternating_sum = 0;
 int sign = 1;

 // Step 2: get user input
 cout << "Enter an integer number: ";
 cin >> num;
 cout << endl;

 // Step 3: Prepare the state for the loop
 int temp = num;
 bool is_first_digit = true;
 cout << "Nr. splitted: ";

 // Step 4: Star the extraction loop
 while (temp > 0)
 {
  int digit = temp % 10;

  // Step 5: Build the visual equation
  if (is_first_digit)
  {
   cout << digit;
   is_first_digit = false;
  }
  else
  {
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
  alternating_sum = alternating_sum + (digit * sign);

  sign = sign * -1;
  temp = temp / 10;
 }

 // Step 7: Finalize visual output

 cout << " = " << alternating_sum << endl;

 // Step 8: Evaluate divisibility
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