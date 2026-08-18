#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
 ifstream inFile;
 ofstream outFile;

 inFile.open("Ch3_Ex5Data.txt");
 outFile.open("Ch3_Ex5Output.dat");

 string lastName, firstName;
 double salary, percentIncrease;

 inFile >> lastName >> firstName;
 inFile >> salary >> percentIncrease;

 outFile << fixed << setprecision(2);

 outFile << "Last name is: " << lastName
         << "\nFirst name is: " << firstName
         << "\nSalary: " << salary
         << "\nPercent pay increase: " << percentIncrease << "%"
         << endl;

 outFile << "-----" << endl;

 inFile >> lastName >> firstName;
 inFile >> salary >> percentIncrease;

 outFile << "Last name is: " << lastName
         << "\nFirst name is: " << firstName
         << "\nSalary: " << salary
         << "\nPercent pay increase: " << percentIncrease << "%"
         << endl;

 outFile << "-----" << endl;

 inFile >> lastName >> firstName;
 inFile >> salary >> percentIncrease;

 outFile << "Last name is: " << lastName
         << "\nFirst name is: " << firstName
         << "\nSalary: " << salary
         << "\nPercent pay increase: " << percentIncrease << "%"
         << endl;

 outFile << "-----" << endl;

 // Close the file
 inFile.close();
 outFile.close();

 return 0;
}