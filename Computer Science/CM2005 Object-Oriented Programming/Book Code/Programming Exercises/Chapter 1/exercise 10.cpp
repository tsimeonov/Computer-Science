#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  double num1;
  double num2;
  double num3;
  double num4;
  double num5;
  double result;

  cout << "Enter num1" << endl;
  cin >> num1;
  cout << "Enter num2" << endl;
  cin >> num2;
  cout << "Enter num3" << endl;
  cin >> num3;
  cout << "Enter num4" << endl;
  cin >> num4;
  cout << "Enter num5" << endl;
  cin >> num5;

  result = round(num1 + num2 + num3 + num4 + num5);
  cout << "Result is: " << result << endl;

  return 0;
}