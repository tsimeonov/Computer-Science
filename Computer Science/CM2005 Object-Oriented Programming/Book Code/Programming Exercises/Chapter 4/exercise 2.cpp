/*
Write a program that prompts the user to input three numbers.
The program should then output the numbers in ascending order.
*/

#include <iostream>

using namespace std;

int main()
{

 double num1;
 double num2;
 double num3;
 double temp;

 cout << "Please type the first number: ";
 cin >> num1;
 cout << endl;

 cout << "Please type the second number: ";
 cin >> num2;
 cout << endl;

 cout << "Please type the third number: ";
 cin >> num3;
 cout << endl;

 // 1. Compare the first and second numbers
 if (num1 > num2)
 {
  temp = num1;
  num1 = num2;
  num2 = temp;
 }

 // 2. Compare the first and third numbers
 if (num1 > num3)
 {
  temp = num1;
  num1 = num3;
  num3 = temp;
 }

 // 3. Compare the second and third numbers
 if (num2 > num3)
 {
  temp = num2;
  num2 = num3;
  num3 = temp;
 }

 cout << "Numbers in ascending order: " << num1 << ", " << num2 << ", " << num3 << endl;

 return 0;
}