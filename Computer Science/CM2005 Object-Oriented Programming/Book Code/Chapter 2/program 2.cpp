/*
Make Change

Write a program that takes as input any change expressed in cents.
It should then compute the number of half-dollars, quarters, nickels and pennies in that order.
*/

#include <iostream>

using namespace std;

const int HALF_DOLLAR = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;

int total;
double numberHalfdDollar;
int remainingChange;
double numberQuarters;
double numberDimes;
double numberNickels;
double numberPennies;

int main()
{

  // 1. Get the change in cents
  cout << "Type the total change in cents " << endl;
  cin >> total;
  cout << endl;

  // 2. Find the number of half-dollars
  numberHalfdDollar = total / HALF_DOLLAR;
  cout << "The number of half-dollars:  " << numberHalfdDollar << endl;

  // 3. Calculate the remaining change
  remainingChange = total % HALF_DOLLAR;
  // cout << "Step 3:  " << remainingChange << endl;

  // 4. Find the number of quarters.
  numberQuarters = remainingChange / QUARTER;
  cout << "The number of quarters:  " << numberQuarters << endl;

  // 5. Calculate the remaining change
  remainingChange = remainingChange % QUARTER;
  // cout << "Step 3:  " << remainingChange << endl;

  // 6. Find the number of dimes
  numberDimes = remainingChange / DIME;
  cout << "The number of dimes is: " << numberDimes << endl;

  // 7. Calculate the remaining change
  remainingChange = remainingChange % 10;
  // cout << "Step 7:  " << remainingChange << endl;

  // 8. Find the number of nickels
  numberNickels = remainingChange / NICKEL;
  cout << "The number of nickels is: " << numberNickels << endl;

  // 9. Calculate the remaining change, which is the number of pennies
  numberPennies = remainingChange % NICKEL;
  cout << "The number of pennies is: " << numberPennies << endl;

  return 0;
}