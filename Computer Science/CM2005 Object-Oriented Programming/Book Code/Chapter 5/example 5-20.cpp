/*
Divisibility test by 3 and 9
*/

#include <iostream>

using namespace std;

int main()
{
 int num, temp, sum;

 cout << "Enter a positive integer: ";
 cin >> num;
 cout << endl;

 temp = num;

 sum = 0;

 do
 {
  // extract the last digit and add it to the sum
  sum = sum + num % 10;
  // remove the last digit
  num = num / 10;

 } while (num > 0);
 {

  cout << "The usm of the digits = " << sum << endl;

  if (sum % 9 == 0)
  {
   cout << temp << " is divisible by 3 and 9" << endl;
  }
  else if (sum % 3 == 0)
  {
   cout << temp << " is divisible by 3 and not 9" << endl;
  }
  else
  {
   cout << temp << " is not divisible by 3 or 9" << endl;
  }
 }

 return 0;
}

/*
Sample Run 1
Enter a positive integer: 27193257
The sum of the digits = 36
27193257 is divisible by 3 and 9

Sample Run 2
Enter a positive integer: 609321
The sum of the digits = 21
609321 is divisible by 3, but not 9

Sample Run 3
Enter a positive integer: 161905102
The sum of the digits = 25
161905102 is not divisible by 3 or 9

*/