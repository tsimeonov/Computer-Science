/*
How to use predefined functions
*/

#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{

 int num;
 double firstNum, secondNum;
 char ch = 'T';

 cout << fixed << setprecision(2);

 cout << "Line 12: Is " << ch
      << " is a lowercase letter? "
      << islower(ch) << endl;

 cout << "Line 13: Uppercase a is: " << toupper('a') << endl;

 cout << "Line 14: 4.5 to the power 6.0 = " << pow(4.5, 6.0) << endl;

 cout << "Line 15: Enter two decimal numbers: ";
 cin >> firstNum >> secondNum;
 cout << endl;

 cout << "Line 18: " << firstNum
      << " to the power of " << secondNum
      << " = " << pow(firstNum, secondNum) << endl;

 cout << "Line 19: 5.0 to the power if 4 = " << pow(5, 4) << endl;

 firstNum = firstNum + pow(3.5, 7.2);
 cout << "Line 21: firstNum = " << firstNum << endl;

 num = -32;
 cout << "Line 23: Absolute value of " << num << " = " << abs(num) << endl;

 cout << "Line 24: Square root of 28 = " << sqrt(28) << endl;

 return 0;
}

/*
Line 12: Is T a lowercase letter? 0
Line 13: Uppercase a is A
Line 14: 4.5 to the power 6.0 = 8303.77
Line 15: Enter two decimal numbers: 24.7 3.8
Line 18: 24.70 to the power of 3.80 = 195996.55
Line 19: 5.0 to the power of 4 = 625.00
Line 21: firstNum = 8290.60
Line 23: Absolute value of -32 = 32
Line 24: Square root of 28.00 = 5.29
*/