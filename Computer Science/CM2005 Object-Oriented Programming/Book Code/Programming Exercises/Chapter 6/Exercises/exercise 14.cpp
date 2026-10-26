#include <iostream>
#include <cmath>

using namespace std;

bool customFunc(double num1, double num2, double num3);

int main()
{
 // Prints true or false instead of 1 or 0
 cout << boolalpha;

 cout << customFunc(2.1, 3.2, 6.9) << endl; // true
 cout << customFunc(2.0, 3.0, 5.0) << endl; // false

 return 0;
}

bool customFunc(double num1, double num2, double num3)
{
 return floor(num1 * num2) == floor(num3);
}