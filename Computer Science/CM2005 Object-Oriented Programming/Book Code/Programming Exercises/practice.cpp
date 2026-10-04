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
    // B: Output all odd numbers between firstNum and secondNum

    cout << "Exercise B:" << endl;

    cout << "Odd numbers are: ";

    for (int current = firstNum; current <= secondNum; current++)
    {
      if (current % 2 != 0)
      {
        cout << current << " ";
      }
    }
    cout << endl;
    cout << "=================" << endl;

    // C: Output the sum of all even numbers between firstNum and secondNum

    cout << "Exercise C:" << endl;

    cout << "Even numbers are: ";
    int sum = 0;

    for (int current = firstNum; current <= secondNum; current++)
    {
      if (current % 2 == 0)
      {
        cout << current << " ";
        sum += current;
      }
    }

    cout << endl;
    cout << "The sum of all even numbers is: " << sum << endl;
    cout << "=================" << endl;

    // D: Output the numbers and their squares between 1 and 10

    cout << "Exercise D:" << endl;
    cout << "The numbers and their squares between firstNum and secondNum" << endl;

    for (int current = firstNum; current <= secondNum; current++)
    {
      cout << current << " square is " << (current * current) << endl;
    }

    cout << endl;
    cout << "=================" << endl;

    // E: Output the sum of the squares of the odd numbers between firstNum and secondNum

    cout << "Exercise E" << endl;
    cout << "Output the sum of the squares of the odd numbers" << endl;

    int sumSquares = 0;

    for (int current = firstNum; current <= secondNum; current++)
    {
      if (current % 2 != 0)
      {
        // add the squares to a running total
        sumSquares += (current * current);
      }
    }
    cout << "The sum of squares is " << sumSquares << endl;
    cout << endl;
  }

  else
  {
    cout << "The first number needs to be less than the second number" << endl;
  }

  return 0;
}