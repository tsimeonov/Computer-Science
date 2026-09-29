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
  // a: output all odd numbers between the two numbers
  cout << "Odd numbers: ";

  while (firstNum <= secondNum)
  {
   if (firstNum % 2 != 0)
   {
    cout << firstNum << " " << flush;
   }
   firstNum++;
  }
  cout << endl;
 }

 else
 {
  cout << "The first number needs to be less than the second number" << endl;
 }

 return 0;
}