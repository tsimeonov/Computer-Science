#include <iostream>

using namespace std;

int main()
{

 // Declare names constants
 const double OPTION_1_FIXED = 25000; // $5000 + $20000
 const double OPTION_2_RATE = 0.125;
 const double OPTION_3_RATE__TIER_1 = 0.10;
 const double OPTION_3_RATE_TIER_2 = 0.14;
 const double OPTION_3_THRESHOLD = 4000;

 // Variables
 double netPrice;
 int copiesSold;
 double royalty1, royalty2, royalty3;

 // Ask for input
 cout << "Enter the net price of the novel: ";
 cin >> netPrice;
 cout << endl;

 cout << "Enter the estimated number of copies to be solde: ";
 cin >> copiesSold;
 cout << endl;

 return 0;
}