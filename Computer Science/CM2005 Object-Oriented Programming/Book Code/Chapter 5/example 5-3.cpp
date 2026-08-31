/*
Program: Counter-controlled loop
This program computes and outputs the total number of boxes of
cookies sold, the total revenue, and the average number of boxes sold
by each volunteer
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
 string name;
 int numOfVolunteers;
 int numOfBoxesSold;
 int totalNumOfBoxesSold;
 int counter;
 double costOneBox;

 cout << fixed << showpoint << setprecision(2);

 cout << "Line 14: Enter the number of volunteers: ";
 cin >> numOfVolunteers;
 cout << endl;

 totalNumOfBoxesSold = 0;
 counter = 0;

 while (counter < numOfVolunteers)
 {
  cout << "Line 21: Enter the volunteer's name and the number of boxes sold: ";
  cin >> name >> numOfBoxesSold;
  cout << endl;
  totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
  counter++;
 }

 cout << "Line 27: The total number of boxes sold: "
      << totalNumOfBoxesSold << endl;

 cout << "Line 28: Enter the cost of one box: ";
 cin >> costOneBox;
 cout << endl;

 cout << "Line 31: The total money made by selling cookies: $"
      << totalNumOfBoxesSold * costOneBox << endl;

 if (counter != 0)
 {
  cout << "Line 33: The average number of "
       << "boxes sold by wach volunteer: "
       << totalNumOfBoxesSold / counter << endl;
 }
 else
 {
  cout << "Line 25: No input" << endl;
 }

 return 0;
}

/*
Sample run
Line 14: Enter the number of volunteers: 5
Line 21: Enter the volunteer's name and the number of boxes sold: Sara 120
Line 21: Enter the volunteer's name and the number of boxes sold: Lisa 128
Line 21: Enter the volunteer's name and the number of boxes sold: Cindy 359
Line 21: Enter the volunteer's name and the number of boxes sold: Nicole 267
Line 21: Enter the volunteer's name and the number of boxes sold: Blair 165
Line 27: The total number of boxes sold: 1039
Line 28: Enter the cost of one box: 3.50
Line 31: The total money made by selling cookies: $3636.50
Line 33: The average number of boxes sold by each volunteer: 207
*/