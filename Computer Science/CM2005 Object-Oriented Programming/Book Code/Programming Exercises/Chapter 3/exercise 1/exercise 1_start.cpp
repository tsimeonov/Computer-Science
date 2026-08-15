// Part a: Include required header files

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

  // Part b: Declare file stream variables and additional data variables
  ifstream inFile;
  ofstream outFile;

  string firstName, lastName, department;
  double grossSalary, bonusPercent, taxPercent;
  double distance, travelTime;
  int coffeeCupsSold;
  double coffeeCost;

  // Part c: Open files and associated streams
  inFile.open("inData.txt");
  outFile.open("outData.txt");

  // Part d: Read data from inData,txt and write formatted output to outData.txt

  // Line 1: Read name and department
  inFile >> firstName >> lastName >> department;

  // Line 2: Read financial data
  inFile >> grossSalary >> bonusPercent >> taxPercent;

  // Line 3: Read travel data
  inFile >> distance >> travelTime;

  // Line 4: Read coffee data
  inFile >> coffeeCupsSold >> coffeeCost;

  // Computations
  double bonusAmount = grossSalary * (bonusAmount / 100);
  double grossWithBonus = grossSalary + bonusAmount;
  double taxAmount = grossWithBonus * (taxPercent / 100);
  double netPaycheck = grossWithBonus - taxAmount;

  double averageSpeed = distance / travelTime;
  double totalSalesAmount = coffeeCupsSold * coffeeCost;

  // Write formatted output to outData.txt
  outFile << fixed << setprecision(2);

  return 0;
}