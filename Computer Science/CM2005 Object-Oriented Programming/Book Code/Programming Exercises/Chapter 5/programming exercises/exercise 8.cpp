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
  }
  else
  {
    cout << "The first number needs to be less than the second number" << endl;
  }

  return 0;
}