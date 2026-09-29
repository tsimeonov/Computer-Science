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
  // a: Output all odd numbers between the numbers

  int current = firstNum + 1;

  cout << "Odd numbers: ";

  while (current < secondNum)
  {
   if (current % 2 != 0)
   {
    cout << current << " " << flush;
   }
   current++;
  }
  cout << endl;
 }
 else
 {
  cout << "The first number needs to be less than the second number" << endl;
 }

 return 0;
}