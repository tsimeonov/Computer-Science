#include <iostream>
#include <string>

using namespace std;

int main()
{
 string input;
 int sum = 0;

 cout << "Enter an integer number: " << endl;
 cin >> input;
 cout << endl;

 // Loop through each character in the string
 for (char c : input)
 {
  // Skip negative signs if the user types "-2345"
  if (c == '-')
   continue;

  // Convert the character to an integer
  int digit = c - '0';

  // Print the digit with a space for the row
  cout << digit << " ";

  // Ass to the running total
  sum += digit;
 }

 // Move to the next line after the row of digits
 cout << endl;

 cout << "Sum: " << sum << endl;

 return 0;
}