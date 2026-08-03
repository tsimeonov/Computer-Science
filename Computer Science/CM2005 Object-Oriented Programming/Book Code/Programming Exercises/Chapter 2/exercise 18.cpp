#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Varialbles
  double hourRate;
  double hoursWorked;
  double taxRate = 0.14;

  double grossIncome;
  double taxIncome;
  double incomeAfterTaxes;

  double clothes = 0.10;
  double moneyOnClothes;

  double supplies = 0.01;
  double moneyOnSupplies;

  double totalSpentSoFar;
  double remainingMoneyBonds;

  double bonds = 0.25;
  double moneyOnBonds;

  double parentSpend = 0.5;
  double parentBonds;

  // Enter pay rate per hour
  cout << "Enter the hour rate" << endl;
  cin >> hourRate;

  // Number of hours worked in a week
  cout << "Number of hours worked in a week" << endl;
  cin >> hoursWorked;

  cout << fixed << setprecision(2);

  // A: Your income before and after taxes
  grossIncome = hourRate * hoursWorked * 5;
  cout << "Your gross income is: $" << grossIncome << endl;

  taxIncome = grossIncome * taxRate;
  incomeAfterTaxes = grossIncome - taxIncome;
  cout << "Your net income is: $" << incomeAfterTaxes << endl;

  // B: Money spend on clothes and other accessories
  moneyOnClothes = incomeAfterTaxes * clothes;
  cout << "Money spent on clothes: $ " << moneyOnClothes << endl;

  // C: Money spent on school supplies
  moneyOnSupplies = incomeAfterTaxes * supplies;
  cout << "\033[31m" << "Money spent on supplies: $ " << moneyOnSupplies << "\033[0m" << endl;

  // D: The money you spend to buy savings bonds
  totalSpentSoFar = moneyOnClothes + moneyOnSupplies;
  cout << "Remaining money: " << totalSpentSoFar << endl;

  remainingMoneyBonds = incomeAfterTaxes - totalSpentSoFar;
  moneyOnBonds = remainingMoneyBonds * bonds;

  cout << "\033[32m" << "Money spent on bonds: $ " << moneyOnBonds << "\033[0m" << endl;

  // E: The money your parents spend to buy additional savings bonds for you

  parentBonds = moneyOnBonds * parentSpend;
  cout << "\033[32m" << "Money parents spend on bonds: $ " << parentBonds << "\033[0m" << endl;

  return 0;
}

/*


*/