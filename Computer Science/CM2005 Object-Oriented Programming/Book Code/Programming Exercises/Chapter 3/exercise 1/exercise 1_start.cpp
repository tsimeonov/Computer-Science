// Part a
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  // PART B: Declare file stream varialbes and additional data variables

  ifstream inFile;
  ofstream outFile;

  // PART C: Open files and associated stream
  inFile.open("inData.txt");
  outFile.open("outData.txt");

  // PART D: Read data from inData.txt and write formatted putput to outData.txt

  string firstName, secondName, department;
  double grossSalary, bonusPercent, taxPercent;
  double distance, travelTime;
  int coffeeCupsSold;
  double coffeeCost;

  // Line 1: Read name and department
  inFile >> firstName >> secondName >> department;

  // Line 2:
  inFile >> grossSalary >> bonusPercent >> taxPercent;

  outFile << fixed << setprecision(2);

  outFile << "Name: " << firstName << " " << secondName << ", Department:  " << department << endl;

  outFile << "Montly Gross Salary: $" << grossSalary << ","
          << " Montly Bonus: " << bonusPercent << "%, "
          << "Taxes: " << taxPercent << "%" << endl;

  // PART E
  inFile.close();
  outFile.close();

  return 0;
}

/*


*/