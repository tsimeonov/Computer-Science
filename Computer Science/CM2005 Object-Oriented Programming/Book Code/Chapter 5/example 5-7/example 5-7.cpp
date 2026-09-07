/*
This program reds data from a file consisting of students
names and their scores. The program outputs each students name
followed by the test score followed by the grade.
The program also putputs the average test score for all the students
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
 // Declare variables to manipulate data
 string firstName;
 string lastName;
 double testScore;
 char grade = ' ';
 double sum = 0;
 int count = 0;

 // Declare stream varialbes
 ifstream inFile;
 ofstream outFile;

 // Open inout file
 inFile.open("./Ch5_stData.txt");

 if (!inFile)
 {
  cout << "Cannot open input file. "
       << "Program terminated!" << endl;

  return 1;
 }

 // open output file
 outFile.open("Ch5_stData.out");

 outFile << fixed << setprecision(2);

 // read the name
 inFile >> firstName >> lastName;
 // read the test score
 inFile >> testScore;

 while (inFile)
 {
  sum = sum + testScore;
  count++;

  cout << "Sum is: " << sum << endl;
  cout << "TestScore is : " << testScore << endl;

  // Determine the grade
  switch (static_cast<int>(testScore) / 10)
  {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
   grade = 'F';
   break;
  case 6:
   grade = 'D';
   break;
  case 7:
   grade = 'C';
   break;
  case 8:
   grade = 'B';
   break;
  case 9:
  case 10:
   grade = 'A';
   break;
  default:
   cout << "Invalid score" << endl;
  }

  outFile << left << setw(12) << firstName
          << setw(12) << lastName
          << right << setw(4) << testScore
          << setw(2) << grade << endl;

  inFile >> firstName >> lastName;
  inFile >> testScore;
 }

 outFile << endl;

 if (count != 0)
 {
  outFile << "Class Average: " << sum / count << endl;
 }
 else
 {
  outFile << "No Data" << endl;
 }

 inFile.close();
 outFile.close();

 return 0;
}