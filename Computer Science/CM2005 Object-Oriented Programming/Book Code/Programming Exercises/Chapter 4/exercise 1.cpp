/*
Write a program that prompts the user to input a number. The pro-
gram should then output the number and a message saying whether
the number is positive, negative, or zero.
*/

#include <iostream>

using namespace std;

int main()
{

 double num;

 cout << "Type a number to see if it's positive, negative or zero: ";
 cin >> num;
 cout << endl;

 if (num < 0)
 {
  cout << "Number " << num << " is negative";
 }
 else if (num > 0)
 {
  cout << "Number " << num << " is positive";
 }
 else
 {
  cout << "Number " << num << " is zero";
 }

 return 0;
}