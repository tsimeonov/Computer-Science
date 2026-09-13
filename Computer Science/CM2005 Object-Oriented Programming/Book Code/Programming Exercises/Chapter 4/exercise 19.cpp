#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

 double totalAcres;
 int numVegetables;

 double acresVeg1 = 0, acresVeg2 = 0;
 double seed1, plant1, fert1, labor1, sellPrice1;
 double seed2, plant2, fert2, labor2, sellPrice2;
 double pctVeg1, pctVeg2;

 double costPerAcre1, costperAcre2;
 double totalCost = 0;
 double totalRevenue = 0;

 // Step 1: Prompt for total farm size
 cout << "Enter total farm area in acres: ";
 cin >> totalAcres;
 cout << endl;

 // Step 2: Prompt fo number of vegerables
 cout << "Enter number of vegetables to grow (1 ot 2): ";
 cin >> numVegetables;
 cout << endl;

 // Step 3: Handle distribution and inputs
 if (numVegetables == 1)
 {
  acresVeg1 = totalAcres;

  cout << "Vegetable 1 - Enter seed, plantation, fertilizer and labor cost per acre: ";
  cin >> seed1 >> plant1 >> fert1 >> labor1;
  cout << endl;

  cout << "Vegetable 1 - Enter selling price per acre: ";
  cin >> sellPrice1;
  cout << endl;

  costPerAcre1 = seed1 + plant1 + fert1 + labor1;
  totalCost = acresVeg1 * costPerAcre1;
  totalRevenue = acresVeg1 * sellPrice1;
 }
 else if (numVegetables == 2)
 {
  cout << "Enter percentage of land for vegetable 1: ";
  cin >> pctVeg1;
  cout << endl;

  cout << "Enter percentage of land for vegetable 2: ";
  cin >> pctVeg2;
  cout << endl;

  acresVeg1 = totalAcres * (pctVeg1 / 100);
  acresVeg2 = totalAcres * (pctVeg2 / 100);

  cout << "Vegetable 1 - Enter seed, plantation, fertilizer and labor cost per acre: ";
  cin >> seed1 >> plant1 >> fert1 >> labor1;
  cout << endl;

  cout << "Vegetable 1 - Enter selling price per acre: ";
  cin >> sellPrice1;
  cout << endl;

  cout << "Vegetable 2 - Enter seed, plantation, fertilizer and labor cost per acre: ";
  cin >> seed2 >> plant2 >> fert2 >> labor2;
  cout << endl;

  cout << "Vegetable 2 - Enter selling price per acre: ";
  cin >> sellPrice2;
  cout << endl;

  costPerAcre1 = seed1 + plant1 + fert1 + labor1;
  costperAcre2 = seed2 + plant2 + fert2 + labor2;

  totalCost = (acresVeg1 * costPerAcre1) + (acresVeg2 * costperAcre2);
  totalRevenue = (acresVeg1 * sellPrice1) + (acresVeg2 * sellPrice2);
 }
 else
 {
  cout << "Invalid number of vegetables entered" << endl;
 }

 // Step 4: Calculate net income
 double netIncome = totalRevenue - totalCost;

 // Step 5: Output results
 cout << fixed << setprecision(2);
 cout << "------------------------------------------" << endl;
 cout << "Total revenueL $" << totalRevenue << endl;

 if (netIncome > 0)
 {
  cout << "Profit: $" << netIncome << endl;
 }
 else if (netIncome < 0)
 {
  cout << "Loss: $" << -netIncome << endl;
 }
 else
 {
  cout << "Broke even: $0.00" << endl;
 }

 return 0;
}