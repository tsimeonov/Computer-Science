#include <iostream>
#include <iomanip>

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

 cout << "Enter the estimated number of copies to be sold: ";
 cin >> copiesSold;
 cout << endl;

 // Calculations
 royalty1 = OPTION_1_FIXED;

 royalty2 = netPrice * copiesSold * OPTION_2_RATE;

 if (copiesSold <= OPTION_3_THRESHOLD)
 {
  royalty3 = netPrice * copiesSold * OPTION_3_RATE__TIER_1;
 }
 else
 {
  double tier_1_Earnings = netPrice * OPTION_3_THRESHOLD * OPTION_3_RATE__TIER_1;
  double tier_2_Earnings = netPrice * (copiesSold - OPTION_3_THRESHOLD) * OPTION_3_RATE_TIER_2;
  royalty3 = tier_1_Earnings + tier_2_Earnings;
 }

 cout << fixed << setprecision(2);

 cout << "---- OPTION 1 ----" << endl;
 cout << "Total royalties: $" << royalty1 << endl;
 cout << "--------------" << endl;

 cout << "---- OPTION 2 ----" << endl;
 cout << "Total royalties: $" << royalty2 << endl;
 cout << "--------------" << endl;

 cout << "---- OPTION 3 ----" << endl;
 cout << "Total royalties: $" << royalty3 << endl;
 cout << "--------------" << endl;

 // Determine the best option
 cout << "---- BEST OPTION ----" << endl;
 if (royalty1 >= royalty2 && royalty1 >= royalty3)
 {
  cout << "Options 1 is the most profitable choice." << endl;
 }
 else if (royalty2 >= royalty1 && royalty2 >= royalty3)
 {
  cout << "Options 2 is the most profitable choice." << endl;
 }
 else
 {
  cout << "Options 3 is the most profitable choice." << endl;
 }

 return 0;
}