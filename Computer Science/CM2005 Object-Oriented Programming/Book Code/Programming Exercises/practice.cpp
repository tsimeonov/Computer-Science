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
    // Create a tracker variable so we dont' destroy firstNum
    int current = firstNum;

    // B: Output all odd numbers between firstNum and secondNum
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

    // C: Output the sum of all even numbers between firstNum and secondNum

    cout << "Even numbers are: ";

    int sum = 0;

    // Reset the tracker variable
    current = firstNum;

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

    // D: Output the numbers and theit squares
    cout << "The squares are: " << endl;

    // Reset current variable
    current = firstNum;

    while (current <= secondNum)
    {
      cout << current << " squared is: " << (current * current) << endl;
      current++;
    }
  }

  else
  {
    cout << "The first number needs to be less than the second number" << endl;
  }

  return 0;
}