// include statement
#include <iostream>
#include <string>

// using namespace statement
using namespace std;

const int SECRET = 11;
const double RATE = 12.5;

int main()
{
  // variable declaration
  int num1;
  int num2;
  int newNum;
  string name;
  double hoursWorked;
  double wages;

  // executable statements
  cout << "Enter first number" << endl;
  cin >> num1;

  cout << "Enter second number" << endl;
  cin >> num2;

  cout << "The value of num1 is: "
       << num1 << "\n"
       << "The value of num2 is: "
       << num2 << "\n"
       << endl;

  newNum = num1 * 2 + num2;
  cout << newNum << endl;

  cout << "Type your last name: " << endl;
  cin >> name;

  cout << "Enter a number between 0 and 70" << endl;
  cin >> hoursWorked;

  wages = RATE * hoursWorked;

  cout << "Name: " << name << endl;
  cout << "Pay Rate: " << RATE << "$" << endl;
  cout << "Hours Worked: " << hoursWorked << endl;
  cout << "Salary: " << wages << "$" << endl;

    // return statement
  return 0;
}

// A) Write a C++ statements that include the header files iostream and string
// B) write a C++ statement that allows you to use cin, cout and endl withiut the prefix std::
// C) write a C++ statements that declare and initialize the following named
// constaints: SECRET of type int initialized to 11 and RATE of type double initialized to 12.50
// D) write a C++ statements that declare the following variables: num1, num2 and newNum of type int; name of type string; and hoursWorked and wages of type double
// E) write a C++ statements that prompt the user to input two integers and store the first number in num1 and the second number in num2.
// F) write C++ statement that outputs the values of num1 and num2, indicating which is num2.
// for example, if num1 is 8 and num2 is 5 then the putput is:
// The value of num1 = 8 and the value if num2 = 5
// G) write a C++ statement that multiplies the value of num1 by 2, adds the value of num2 to it, and then stores the result in newNum.
// H) write a C++ statement that updates the value of newNum by adding the value of the named constant SECRET to it. Then, write a C++ statement that outputs the value of newNum with an appropriate message
// I) write C++ statements that prompt the user to enter a person's last name and then store the last name into the variable name
// J) write C++ statements that prompt the user to enter a decimal number between 0 and 70 and then store the number entered into hoursWorked.
// K) write a C+ statement that multiplies the value of the named constatant RATE with the value of hoursWorked and then stores the result into the variable wages.
// I) write C++ statement that produce the following output:
// Name:  // output the value of the variable name
// Pay Rate: $  // output the value of the RATE
// Hous Worked:  // output the value of the variable hoursWorked
// Salary: $  // output the value of the variable wages
// M) write a C++ program that tests each of the C++ statements that you wrote in parts a through I.