#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 // Variables
 int num1;
 int num2;
 double result;
 string operation;

 // Ask for input
 cout << "Enter the first number: ";
 cin >> num1;
 cout << endl;

 cout << "Enter the second number: ";
 cin >> num2;
 cout << endl;

 cout << "Enter the operation (add, substract, multiply, divide): ";
 cin >> operation;
 cout << endl;

 cout << fixed << setprecision(2);

 // Calculate
 if (operation == "add")
 {
  result = num1 + num2;
  cout << "The result is: " << result;
 }
 else if (operation == "substract")
 {
  result = num1 - num2;
  cout << "The result is: " << result;
 }
 else if (operation == "multiply")
 {
  result = num1 * num2;
  cout << "The result is: " << result;
 }
 else if (operation == "divide")
 {
  if (num2 == 0)
  {
   cout << "Error: Division by zero is not allowed" << endl;
  }
  else
  {
   result = static_cast<double>(num1) / num2;
   cout << "The result is: " << result;
  }
 }
 else
 {
  cout << "Invalid operation entered" << endl;
 }

 return 0;
}
