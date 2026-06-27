
#include <iostream>
using namespace std;

int main()
{
  double num1;
  double num2;
  double num3;
  double num4;
  double num5;
  double result;

  cout << "Enter first number " << endl;
  cin >> num1;

  cout << "Enter second number " << endl;
  cin >> num2;

  cout << "Enter third number " << endl;
  cin >> num3;

  cout << "Enter forth number " << endl;
  cin >> num4;

  cout << "Enter fifth number " << endl;
  cin >> num5;

  result = (num1 + num2 + num3 + num4 + num5) / 5;

  cout << "The average is: " << result << endl;

  return 0;
}
