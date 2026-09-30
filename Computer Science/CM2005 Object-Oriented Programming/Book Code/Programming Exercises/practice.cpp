#include <iostream>

using namespace std;

int main()
{
  // Variables
  int firstNum;
  int secondNum;

  cout << "Enter first and second num: ";
  cin >> firstNum >> secondNum;
  cout << endl;

  if (firstNum < secondNum)
  {
    // Create a tracker variable so we don't destroy the original variable
    int current = firstNum;

    // B: Output all odd numbers

    cout << "Odd numbers are: ";
    while (current <= secondNum)
    {
      if (current % 2 != 0)
      {
        cout << current << " ";
      }
      current++;
    }
    cout << endl;

    // C: Output even numbers and their sums
    int sum = 0;

    // Reset the current
    current = firstNum;

    cout << "Even numbers: ";

    while (current <= secondNum)
    {
      if (current % 2 == 0)
      {
        cout << current << " ";
        sum += current;
      }
      current++;
    }
    cout << endl;
    cout << "The sum is: " << sum << endl;
  }

  else
  {
    cout << "The first number needs to be less than the second number" << endl;
  }

  return 0;
}