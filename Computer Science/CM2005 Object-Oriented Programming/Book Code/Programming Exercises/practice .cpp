#include <iostream>
#include <string>

using namespace std;

int main()
{
 string input;
 int sum = 0;

 cout << "Enter an integer number: ";
 cin >> input;
 cout << endl;

 for (int i = 0; i < input.size(); i++)
 {
  if (input[i] == '-')
  {
   continue;
  }

  int digit = input[i] - '0';

  cout << digit << " ";

  sum += digit;
 }

 cout << endl;

 cout << "Sum: " << sum << endl;

 return 0;
}