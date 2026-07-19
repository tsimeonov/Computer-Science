#include <iostream>
#include <iomanip>

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
  double moneyOnSupplies;
  double supplies = 0.01;
  double remainingMoney;
  double bonds = 0.25;
  double remainingMoneyBonds;
  double moneyOnBonds;
  double parentSpend = 0.5;
  double parentBonds;

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

  // C: Money spent on school supplies
  moneyOnSupplies = incomeAfterTaxes * supplies;
  cout << "\033[31m" << "Money spent on supplies: $ " << moneyOnSupplies << "\033[0m" << endl;

  // D: The money you spend to buy savings bonds
  remainingMoney = moneyOnClothes + moneyOnSupplies;
  cout << "Remaining money: " << remainingMoney << endl;

  remainingMoneyBonds = incomeAfterTaxes - remainingMoney;
  moneyOnBonds = remainingMoneyBonds * bonds;

  cout << "\033[32m" << "Money spent on bonds: $ " << moneyOnBonds << "\033[0m" << endl;

  // E: The money your parents spend to buy additional savings bonds for you

  cout << fixed << setprecision(2);
  parentBonds = moneyOnBonds * parentSpend;
  cout << "\033[32m" << "Money parents spend on bonds: $ " << parentBonds << "\033[0m" << endl;

  return 0;
}

/*
Pay rate per hour = $15;
Number of hours worked = 40;

Gross income = 15 * 40 = 600;

A: Income before and after taxes

taxes = 0.14;

600 * 0.14 = 84
NetIcome = groos income * taxes;

600 - 84 = 516
income After taxes = gross income - net income

B: Money spent on clothes
516 * 0.1
income After taxes * clothes = 51.6

C: Money spent on supplies
516 * 0.01
income after taxes * supplies = 5.16

D: Money spent on bonds
459.24 Remaining

114.81 * 0.5 = 57.405

*/