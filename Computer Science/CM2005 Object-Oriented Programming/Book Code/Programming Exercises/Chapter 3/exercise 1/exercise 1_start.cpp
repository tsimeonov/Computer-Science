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
  double bonusAmount = grossSalary * (bonusPercent / 100);
  double grossWithBonus = grossSalary + bonusAmount;
  double taxAmount = grossWithBonus * (taxPercent / 100);
  double netPaycheck = grossWithBonus - taxAmount;

  double averageSpeed = distance / travelTime;
  double totalSalesAmount = coffeeCupsSold * coffeeCost;

  // Write formatted output to outData.txt
  outFile << fixed << setprecision(2);

  // Write formatted output to ourData.txt
  outFile << fixed << setprecision(2);

  outFile << "Name: " << firstName << " " << lastName
          << ", Department: " << department
          << endl;

  outFile << "---------------" << endl;

  outFile << "Montly Gross Salary: " << "$" << grossSalary
          << " Montly Bonus: " << bonusAmount << "%"
          << " Taxes: " << taxPercent << "%" << endl;

  outFile << "---------------" << endl;

  outFile << "Paycheck: " << "$" << netPaycheck << endl;

  outFile << "---------------" << endl;

  outFile << "Distance Traveled: " << distance << " miles,"
          << " Travelling time: " << travelTime << " hours"
          << endl;

  outFile << "---------------" << endl;

  outFile << "Average Speed: " << averageSpeed
          << " miles per hour"
          << endl;

  outFile << "---------------" << endl;

  outFile << "Number of Coffee Cups Sold: " << coffeeCupsSold
          << ", Cost: " << "$" << coffeeCost << " per cup"
          << endl;

  outFile << "---------------" << endl;

  outFile << "Sales Amount = " << "$" << totalSalesAmount << endl;

  return 0;
}