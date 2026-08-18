// PART A: Include required header files

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	// PART B: Declare file stream variables and additional data variables

	// ifstream stands for Input File Stream. It is a data type used specifically for reading data from a file (bringing data into your program).

	// ofstream stands for Output File Stream. It is a data type used specifically for writing data to a file (sending data out of your program).

	ifstream inFile;
	ofstream outFile;

	string firstName, lastName, department;
	double grossSalary, bonusPercent, taxPercent;
	double distance, travelTime;
	int coffeeCupsSold;
	double coffeeCost;

	// PART C: Open files and associate streamns
	inFile.open("inData.txt");
	outFile.open("outData.txt");

	// PART D: Read data from inData.txt and write formatted output to outData.txt

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

	// Write formatted output to outData.txt
	outFile << fixed << setprecision(2);

	outFile << "Name: " << firstName << " " << lastName
					<< ", Department: " << department << endl;

	outFile << "Monthly Gross Salary: $" << grossSalary
					<< ", Monthly Bonus: " << bonusPercent << "%"
					<< ", Taxes: " << taxPercent << "%" << endl;

	outFile << "Paycheck: $" << netPaycheck << endl;

	outFile << "Distance Traveled: " << distance << " miles"
					<< ", Traveling Time: " << travelTime << " hours" << endl;

	outFile << "Average Speed: " << averageSpeed << " miles per hour" << endl;

	outFile << "Number of Coffee Cups Sold: " << coffeeCupsSold
					<< ", Cost: $" << coffeeCost << " per cup" << endl;

	outFile << "Sales Amount = $" << totalSalesAmount << endl;

	// PART E: Close input and output files
	inFile.close();
	outFile.close();

	return 0;
}

/*
Output

Name: Giselle Robinson, Department: Accounting

Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00%

Paycheck: $4116.00

Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours

Average Speed: 50.00 miles per hour

Number of Coffee Cups Sold: 75, Cost: $1.50 per cup

Sales Amount = $112.50
*/