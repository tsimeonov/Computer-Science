/*
Given the first two numbers of a Fibonacci sequence, this
determines and outputs the desired number of the Fibonacci sequence
*/

#include <iostream>

using namespace std;

int main()
{

  // Declare variables
  int previous1;
  int previous2;
  int current;
  int counter;
  int nthFibonacci;

  cout << "Enter the first two Fibonacci numbers: ";
  cin >> previous1 >> previous2;
  cout << endl;

  cout << "The first two Fibonacci numbers are "
       << previous1 << " and " << previous2 << endl;

  cout << "Enter the position of the desired Fibonacci number: ";
  cin >> nthFibonacci;
  cout << endl;

  if (nthFibonacci == 1)
  {
    current = previous1;
  }
  else if (nthFibonacci == 2)
  {
    current = previous2;
  }
  else
  {
    counter = 3;

    while (counter <= nthFibonacci)
    {
      current = previous2 + previous1;
      previous1 = previous2;
      previous2 = current;
      counter++;
    }
  }

  cout << "The Fibonacci number at position " << nthFibonacci << " is " << current << endl;

  return 0;
}

/*
Sample Runs: In these sample runs, the user input is shaded.
Sample Run 1:
Enter the first two Fibonacci numbers: 12 16
The first two Fibonacci numbers are 12 and 16
Enter the position of the desired Fibonacci number: 10
The Fibonacci number at position 10 is 796
Sample Run 2:
Enter the first two Fibonacci numbers: 1 1
The first two Fibonacci numbers are 1 and 1
Enter the position of the desired Fibonacci number: 15
The Fibonacci number at position 15 is 610
*/