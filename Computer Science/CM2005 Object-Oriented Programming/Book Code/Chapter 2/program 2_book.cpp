#include <iostream>

using namespace std;

// named constants
const int HALF_DOLLAR = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;

int main()
{
  // declare varialbes
  int change;

  // Statements: Step 1 - Step 12
  cout << "Enter change in cents: "; // Step 1
  cin >> change;                     // Step 2
  cout << endl;

  cout << "The change you entered is " << change << endl; // Step 3
  // Step 4
  cout << "The number of half-dollars to be returned is " << change / HALF_DOLLAR << endl;

  // Step 5
  change = change % HALF_DOLLAR;

  // Step 6
  cout << "The number of quarters to be returned is " << change / QUARTER << endl;

  // Step 7
  change = change % QUARTER;

  // Step 8
  cout << "The number of dimes to be returned is " << change / DIME << endl;

  // Step 9
  change = change % DIME;

  // STEP 10
  cout << "The number of nickels to be returned is " << change / NICKEL << endl;

  // Step 11
  change = change % NICKEL;

  // Step 12
  cout << "The number of pennies to be returned is " << change << endl;

  return 0;
}
