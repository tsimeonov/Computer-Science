#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

 // Variables
 double totalAcres;
 double numVegetables;

 double acresVeg1;
 double acresVeg2;

 double seed1, plant1, fert1, labor1, sellPirce1;

 double seed2, plant2, fert2, labor2, sellPirce2;

 double pctVeg1, pctVeg2;

 double costPerAcre1;
 double costPerAcre2;

 double totalCost;
 double totalRevenue;

 // Step 1: Prompt for toal farm size
 cout
     << "Enter total farm area in acres: ";
 cin >> totalAcres;
 cout << endl;

 // Step 2: Prompt for number of vegatables
 cout << "Enter number of vegetables to grow (1 or 2): ";
 cin >> numVegetables;
 cout << endl;

 // Step 3: Handle land distribution based on vegetable count
 if (numVegetables == 1)
 {
  acresVeg1 = totalAcres;
  acresVeg2 = 0;

  cout << "Vegetable 1 - enter seed, plantation, fertilizer and labor cost per acre: ";
  cin >> seed1 >> plant1 >> fert1 >> labor1;
  cout << endl;

  cout << "Vegetable 1 - Enter selling price per acre: ";
  cin >> sellPirce1;
  cout << endl;

  // Calculations per vegetable 1
  double costPerAcre1 = seed1 + plant1 + fert1 + labor1;
  totalCost = acresVeg1 * costPerAcre1;
  totalRevenue = acresVeg1 * sellPirce1;
 }
 else if (numVegetables == 2)
 {
  // Prompt for land percentages
  cout << "Enter percentage of land for vegetable 1: ";
  cin >> pctVeg1;
  cout << endl;

  cout << "Enter percentage of land for vegetable 2: ";
  cin >> pctVeg2;
  cout << endl;

  // Optional validation: ensure pctVeg1 + pctVeg2 == 100

  // Calculate acres for each vegetable
  double acresVeg1 = totalAcres * (pctVeg1 / 100);
  double acresVeg2 = totalAcres * (pctVeg2 / 100);

  // Input costs and selling price for vegetable 1
  cout << "Vegetable 1 - Enter seed, plantation, fertilizer, and labor cost per acre: ";
  cin >> seed1, plant1, fert1, labor1;
  cout << endl;

  cout << "Vegetable 1 - Enter selling price per acre: ";
  cin >> sellPirce1;
  cout << endl;

  // Input costs and selling price for vegetable 2
  cout << "Vegetable 2 - Enter seed, plantation, fertilizer, and labor cost per acre: ";
  cin >> seed2, plant2, fert2, labor2;
  cout << endl;

  cout << "Vegetable 2 - Enter selling price per acre: ";
  cin >> sellPirce2;
  cout << endl;

  // Calculations for both vegetables
  costPerAcre1 = seed1 + plant1 + fert1 + labor1;
  costPerAcre2 = seed2 + plant2 + fert2 + labor2;

  totalCost = (acresVeg1 * costPerAcre1) + (acresVeg2 * costPerAcre2);
  totalRevenue = (acresVeg1 * sellPirce1) + (acresVeg2 * sellPirce2);
 }
 else
 {
  cout << "Invalid number of vegetables entered" << endl;
 }

 // Step 4: Calculate final profit or loss
 double netIncome = totalCost - totalRevenue;

 // Step 5: Output results

 cout << "Total revenue: $" << totalRevenue << endl;

 if (netIncome > 0)
 {
  cout << "Profit: $" << netIncome << endl;
 }
 else if (netIncome < 0)
 {
  cout << "Loss: $-" << netIncome << endl;
 }
 else
 {
  cout << "Broke even: $0.00" << endl;
 }

 return 0;
}