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

 if (firstNum <= secondNum)
 {
  // B: Output all odd numbers between the two numbers
  cout << "Exercise B" << endl;
  cout << "The odd numbers are: ";

  for (int current = firstNum; current <= secondNum; current++)
  {
   if (current % 2 != 0)
   {
    cout << current << " ";
   }
  }
  cout << endl;
  cout << "============================" << endl;

  // C: Output the sum of all even numbers between firstNum and seconNum

  int sum = 0;
  cout << "Exercise C" << endl;
  cout << "Even numbers: ";

  for (int current = firstNum; current <= secondNum; current++)
  {
   if (current % 2 == 0)
   {
    cout << current << " " << flush;
    sum += current;
   }
  }
  cout << endl;

  cout << "The sum of even numbers is: " << sum << endl;
  cout << "============================" << endl;

  // D: Output the numbers and their squares between 1 and 10

  cout << "Exercise D" << endl;
  cout << "Numbers and their squares between 1 and 10: " << endl;

  for (int current = 1; current <= 10; current++)
  {
   cout << current << " square is " << (current * current) << endl;
  }
  cout << "============================" << endl;

  // E. Output the sum of the quares of the odd numbers between firstNum and secondNum

  cout << "Exercise E" << endl;

  int sumSquare = 0;

  for (int current = firstNum; current <= secondNum; current++)
  {
   if (current % 2 != 0)
   {
    // Add the squares to a running total
    sumSquare += (current * current);
   }
  }
  cout << "The sum of the squares for odd numbers is: " << sumSquare << endl;
  cout << "============================" << endl;
 }
 else
 {
  cout << "The first number needs to be less than the second number" << endl;
 }
}