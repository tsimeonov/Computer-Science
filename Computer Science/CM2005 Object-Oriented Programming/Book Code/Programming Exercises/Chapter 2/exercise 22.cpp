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
Operators used to combine propositions

Operators used to combine propostions

Logical operators - Operators used to combine propostions

Operators used to combine propostions
Operators used to combine propostions
Operators used to combine propostions

a table displaying all truth values of propostions
a table displaying all truth valued of a propostions
A table displaying all truth values of a propostions

*/