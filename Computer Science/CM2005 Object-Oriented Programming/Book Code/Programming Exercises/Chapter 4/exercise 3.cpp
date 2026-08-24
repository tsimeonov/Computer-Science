/*
Write a program that prompts the user to input an integer between
0 and 35. If the number is less than or equal to 9, the program should
output the number; otherwise, it should output A for 10, B for 11, C for
12, . . . , and Z for 35. (Hint: Use the cast operator, static_cast<char>(),
for numbers >= 10.)
*/

#include <iostream>

using namespace std;

int main()
{
 int num;

 cout
     << "Type a number between 0 and 35: ";
 cin >> num;
 cout << endl;

 if (num <= 9)
 {
  cout << "The number is: " << num << endl;
 }
 else if (num >= 10)
 {
  char letter = static_cast<char>(num + 55);
  cout << "The number is: " << letter << endl;
 }

 return 0;
}