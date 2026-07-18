#include <iostream>

using namespace std;

int main()
{

  double oneMilkCarton = 3.78;
  double totalMilk;
  int totalMilkCartons;
  double oneLiterMilk = 0.38;
  double totalMilkProd;
  double profit = 0.27;
  double totalProfit;

  cout << "What is the total amount produced in the morning" << endl;
  cin >> totalMilk;

  totalMilkCartons = totalMilk / oneMilkCarton;
  cout
      << totalMilkCartons << " cartons are needed to hold milk" << endl;

  // Output the cost of producing the milk

  totalMilkProd = totalMilkCartons * oneLiterMilk;
  cout << "The cost to produce milk is " << totalMilkProd << endl;

  // Output the profit for prodicng milk
  totalProfit = profit * totalMilkCartons;
  cout << "The profit is: " << totalProfit << endl;

  return 0;
}
