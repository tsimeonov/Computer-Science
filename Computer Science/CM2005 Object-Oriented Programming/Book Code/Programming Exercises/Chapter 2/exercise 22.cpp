#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  // 1. Declare constants and variables
  const double METRIC_TON_IN_POUNDS = 2205;
  double bag_capacity_pounds;
  double bags_needed;

  // 2. Prompt the user for input
  cout << "Write the amount in pounds a single bag can hold" << endl;
  cin >> bag_capacity_pounds;

  // 3. Process the calculation
  // Divide the total metric ton weight by the capacity of a single bag
  bags_needed = ceil(METRIC_TON_IN_POUNDS / bag_capacity_pounds);

  // 4. Output the result
  cout << "Number of bags needed to store one metric ton of rice: " << bags_needed << endl;

  return 0;
}

/*

The proposition with a truth value opposite of p
The proposition with the truth value opposite of p

Exclusive OR
Is true when exctly one of p and q is true

The proposition p XOR q is true when exactly one of p and q is true

The propostions  p XOR q is true ehen exctly one of p an q is true

A proposition constructed by combinign propositions using logical operators

A propostion constructed by combibng propostions using logical operators

A propostion constructed by combining propostions using logical operators

*/