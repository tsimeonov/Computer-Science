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
 for (int i = 0; i < input.size(); i++)
 {
  // Skip negative signs if the user types "-2345"
  if (input[i] == '-')
   continue;

  // Convert the character to an integer
  int digit = input[i] - '0';

  // Print the digit with a space for the row
  cout << digit << " ";

  // Add to the running total
  sum += digit;
 }

 // Move to the next line after the row of digits
 cout << endl;

 cout << "Sum: " << sum << endl;

 return 0;
}
