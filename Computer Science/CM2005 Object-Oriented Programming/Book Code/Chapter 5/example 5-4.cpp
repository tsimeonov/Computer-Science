/*
Program: Sentinel-Controlled Loop
This program computes and outputs the total number if boxes of cookies sold, the total revenue, and the average number of boxes sold by each volunteer.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string SENTINEL = "-1";

int main()
{
 string name;
 int numOfVolunteers;
 int numOfBoxesSold;
 int totalNumOfBoxesSold;
 double costOfOneBox;

 cout << fixed << setprecision(2);

 cout << "Line 14: Enter each volunteer's name and "
      << "the number of boxes " << endl
      << "      sold by each volunteer, ending "
      << "with -1: " << endl;

 totalNumOfBoxesSold = 0;
 numOfVolunteers = 0;

 cin >> name;

 while (name != SENTINEL)
 {

  cin >> numOfBoxesSold;
  totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
  numOfVolunteers++;
  cin >> name;
 }

 cout << endl;

 cout << "Line 26: The total number of boxes sold: "
      << totalNumOfBoxesSold << endl;

 cout << "Line 27: Enter the cost of one box: ";
 cin >> costOfOneBox;
 cout << endl;

 cout << "Line 30: The total money made by selling: "
      << "cookies: $"
      << totalNumOfBoxesSold * costOfOneBox << endl;

 if (numOfVolunteers != 0)
 {
  cout << "Line 32: The average number of "
       << "boxes sold by each volunteer: "
       << totalNumOfBoxesSold / numOfVolunteers
       << endl;
 }
 else
 {
  cout << "Line 34: No input" << endl;
 }

 return 0;
}

/*
Sample Run: In this sample run, the user input is shaded.
Line 14:  Enter each volunteer’s name and the number of boxes
sold by each volunteer, ending with -1:
Sara 120
Lisa 128
Cindy 359
Nicole 267
Blair 165
Abby 290
Amy 190
Megan 450
Elizabeth 280
Meridth 290
Leslie 430
Chelsea 378
-1
Line 26: The total number of boxes sold: 3347
Line 27: Enter the cost of one box: 3.50
Line 30: The total money made by selling cookies: $11714.50
Line 32: The average number of boxes sold by each volunteer: 278
*/