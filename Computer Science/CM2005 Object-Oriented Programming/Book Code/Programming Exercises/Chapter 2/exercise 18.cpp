#include <iostream>

using namespace std;

int main()
{
  // Varialbles
  double hourRate;
  double taxRate = 0.14;
  double hoursWorked;
  // Money you receive after taxess
  double netIncome;
  double grossIncome;
  double incomeAfterTaxes;
  double clothes = 10;
  double supplies = 1;

  // Enter pay rate per hour
  cout << "Enter the hour rate" << endl;
  cin >> hourRate;

  // Number of hours worked in a week
  cout << "Number of hours worked in a week" << endl;
  cin >> hoursWorked;

  // A: Your income before and after taxes
  grossIncome = hourRate * hoursWorked;
  cout << "Your gross income is: $" << grossIncome << endl;

  netIncome = grossIncome * taxRate;
  incomeAfterTaxes = grossIncome - netIncome;
  cout << "Your net income is: $" << incomeAfterTaxes << endl;

  // cout << "Hour rate: " << hourRate << endl;
  // cout << "Houurs worked " << hoursWorked << endl;

  return 0;
}