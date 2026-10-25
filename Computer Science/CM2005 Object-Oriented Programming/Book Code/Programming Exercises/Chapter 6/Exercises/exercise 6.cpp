#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
 double num1;
 double num2;

 cout << fixed << showpoint << setprecision(2);

 cout << "Enter two decimal numbers: ";
 cin >> num1 >> num2;
 cout << endl;

 if (num1 > 0 && num2 > 0)
 {
  cout << sqrt(num1 * num2) << endl;
 }
 else if (num1 < 0 && num2 >= 0)
 {
  cout << floor(num1) + floor(num2) << endl;
 }
 else if (num2 < 0 && num1 >= 0)
 {
  cout << ceil(num1) + ceil(num2) << endl;
 }
 else
 {
  cout << floor(num1) + ceil(num2) << endl;
 }

 return 0;
}

// a: What is the output if the input is 12.5 and 8.0? Output: 10.00
// b: What is the output if the input is 15.5 and -6.5? Output: 10.00
// c: What is the output if the input is -18.35 and 34.6? Output: 15.00
// d: What is the output if the input is -20.90 and -10.4? Output: -31.00