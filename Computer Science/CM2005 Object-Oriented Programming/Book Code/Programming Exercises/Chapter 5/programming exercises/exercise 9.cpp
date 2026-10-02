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
  cout << "The odd numbers are: ";

  for (int current = firstNum; current <= secondNum; current++)
  {
   if (current % 2 != 0)
   {
    cout << current << " ";
   }
  }
  cout << endl;

  // C: Output the sum of all even numbers between firstNum and seconNum

  int sum = 0;
  cout << "Even numbers: ";

  for (int current = firstNum; current <= secondNum; current++)
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
}