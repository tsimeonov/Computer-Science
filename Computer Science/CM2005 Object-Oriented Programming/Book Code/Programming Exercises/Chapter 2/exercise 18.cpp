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
  double clothes = 0.1;
  double moneyOnClothes;
  double supplies = 0.01;

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

  // B: Money spend on clothes and other accessories
  moneyOnClothes = incomeAfterTaxes * clothes;
  cout << "Money spent on clothes: $ " << moneyOnClothes << endl;

  // cout << "Hour rate: " << hourRate << endl;
  // cout << "Houurs worked " << hoursWorked << endl;

  return 0;
}