#include <iostream>
#include <cmath>
#include <iomanip>

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
    // Create a tracker variable so we don't destroy firstNum
    int current = firstNum;

    // b: output all odd numbers between the two numbers
    cout << "The odd numbers are: ";

    while (current <= secondNum)
    {
      if (current % 2 != 0)
      {
        cout << current << " " << flush;
      }
      current++;
    }
    cout << endl;

    // c: Output the sum of all even numbers between firstNum and secondNum

    int sum = 0;
    cout << "Even numbers: ";

    // Reset the tracker back to the beginning for the second loop
    current = firstNum;

    while (current <= secondNum)
    {
      if (current % 2 == 0)
      {
        cout << current << " " << flush;
        sum += current;
      }
      current++;
    }

    cout << endl;

    cout << "The sum of even numbers is: " << sum << endl;

    // D: Output the numbers and their squares between 1 and 10

    cout << "Numbers and their squares between 1 and 10: " << endl;

    // Hardcore the tracker to start from 1
    current = 1;

    while (current <= 10)
    {
      cout << current << " squared is " << (current * current) << endl;
      current++;
    }

    // E. Output the sum of the squares of the odd numbers between firsrNum and secondNum

    // Reset current variable
    current = firstNum;

    int sumSquare = 0;

    while (current <= secondNum)
    {
      if (current % 2 != 0)
      {
        // Add the squares to a running total
        sumSquare += (current * current);
      }
      current++;
    }
    cout << "The sum of the squares for add numbers is: " << sumSquare << endl;
  }
  else
  {
    cout << "The first number needs to be less than the second number" << endl;
  }

  return 0;
}