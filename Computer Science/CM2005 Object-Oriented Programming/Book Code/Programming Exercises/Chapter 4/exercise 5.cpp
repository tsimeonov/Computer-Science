/*
In a right triangle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides.
Write a program that prompts the user to enter the lengths of three sides of a triangle and then outputs a message indicating whether the triangle is a right triangle.
*/

#include <iostream>

using namespace std;

int main()
{

 int sideA;
 int sideB;
 int sideC;

 cout << "Enter the lenght of the three sides of the rectangle: ";
 cin >> sideA >> sideB >> sideC;
 cout << endl;

 int sqA = sideA * sideA;
 int sqB = sideB * sideB;
 int sqC = sideC * sideC;

 if ((sqA + sqB == sqC) || (sqA + sqC == sqB) || (sqB + sqC == sqB))
 {
  cout << "This is a right triangle" << endl;
 }
 else
 {

  cout << "This is not a right triangle" << endl;
 }

 return 0;
}