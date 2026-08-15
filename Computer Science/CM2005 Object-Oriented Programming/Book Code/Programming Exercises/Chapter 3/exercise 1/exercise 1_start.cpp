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

  return 0;
}