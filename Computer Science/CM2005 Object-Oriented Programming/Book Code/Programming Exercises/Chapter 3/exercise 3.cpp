/*
Write a program that prompts the user to enter the weight of a person
in kilograms and outputs the equivalent weight in pounds. Output both
the weights rounded to two decimal places. (Note that 1 kilogram =
2.2 pounds.) Format your output with two decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double weightKg;
  double weightPound;

  cout << "Enter weight in kilograms: ";
  cin >> weightKg;
  cout << endl;

  cout << fixed << showpoint << setprecision(2);

  weightPound = weightKg * 2.2;

  cout << "\033[32m"
       << "Weight in pounds is: " << weightPound
       << "lb"
       << "\033[0m" << endl;

  cout << "\033[34m"
       << "Weight in kilograms is: " << weightKg
       << "kg"
       << "\033[0m" << endl;

  return 0;
}