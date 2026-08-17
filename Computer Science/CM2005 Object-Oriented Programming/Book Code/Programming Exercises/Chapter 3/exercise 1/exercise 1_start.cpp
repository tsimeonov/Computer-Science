// Part a
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  // PART B
  ifstream inFile;
  ofstream outFile;

  // PART C
  inFile.open("inData.txt");
  outFile.open("outData.txt");

  // PART D

  string firstName, secondName, department;
  double grossSalary, bonusPercent, taxPercent;
  double distance, travelTime;
  int coffeeCupsSold;
  double coffeeCost;

  // Line 1: Read name and department
  inFile >> firstName >> secondName >> department;

  outFile << fixed << setprecision(2);

  outFile << "Name: " << firstName << " " << secondName << ", Department: " << department << endl;

  // PART E
  inFile.close();
  outFile.close();

  return 0;
}

/*

*/