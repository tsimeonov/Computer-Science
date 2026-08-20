/*
Linda is starting a new cosmetic and clothing business and would like
to make a net profit of approximately 10% after paying all the expenses,
which include merchandise cost, store rent, employees’ salary, and
electricity cost for the store. She would like to know how much the
merchandise should be marked up so that after paying all the expenses
at the end of the year she gets approximately 10% net profit on the mer-
chandise cost. Note that after marking up the price of an item she would
like to put the item on 15% sale.
Write a program that prompts Linda to enter the total cost of the merchandise, the salary of the employees (including her own salary), the yearly rent, and the ­ estimated electricity cost.
The program then outputs how much the merchandise should be marked up so that Linda gets the desired profit.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

 // Variables
 double merchandiseCost;
 double employeeSalary;
 double yearlyRent;
 double electricityCost;
 double expenses;

 cout << "Total cost of the merchandise: ";
 cin >> merchandiseCost;
 cout << endl;

 cout << "Early employees salary (including your own): ";
 cin >> employeeSalary;
 cout << endl;

 cout << "Early rent: ";
 cin >> yearlyRent;
 cout << endl;

 cout << "Estimated electricity cost: ";
 cin >> electricityCost;
 cout << endl;

 cout << fixed << showpoint << setprecision(2);

 // 1. Calcualte total expenses
 expenses = merchandiseCost + employeeSalary + yearlyRent +
            electricityCost;

 // 2. Calculate desired profit (10%)
 double desiredProfit = merchandiseCost * 0.1;

 // 3. Calcuate requred revenie to cover expenses and hit the profit goal
 double requiredRevenue = expenses + desiredProfit;

 // 4. Calculate the marked up total price (+15%)
 double markedUpTotalPrice = requiredRevenue * 0.85;

 // 5. Calculate how much to mark it up as a percentage
 double markupAmount = markedUpTotalPrice - merchandiseCost;
 double markupPercentage = (markupAmount / merchandiseCost) * 100;

 cout << "The merchandise need to be marked by: "
      << markupPercentage << "%" << endl;

 return 0;
}