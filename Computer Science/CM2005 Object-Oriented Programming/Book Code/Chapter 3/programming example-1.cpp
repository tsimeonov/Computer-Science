/*
Program: Movie ticket sale
This program determines the money to be donated to a
charity. It prompts the user to input the movie name, adult ticket ptice,
child ticket price, number of adult tickets sold, number of child tickets sold,
and percentage of the gross amount to be donated to the charity
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

  // Step 1
  string movieName;
  double adultTicketPrice;
  double childTicketPrice;
  int noOfAdultTicketSold;
  int noOfChildTicketSold;
  double percentDonation;
  double grossAmount;
  double amountDonated;
  double netSaleAmount;

  cout << fixed << showpoint << setprecision(2);

  cout << "Enter the movie name: ";
  getline(cin, movieName);
  cout << endl;

  cout << "Enter the price of an adult ticket: ";
  cin >> adultTicketPrice;
  cout << endl;

  cout << "Enter the price of a child ticket: ";
  cin >> childTicketPrice;
  cout << endl;

  cout << "Enter the number of adult tickets "
       << "sold: ";
  cin >> noOfAdultTicketSold;
  cout << endl;

  cout << "Enter the number of child tickets "
       << "sold: ";
  cin >> noOfChildTicketSold;
  cout << endl;

  cout << "Enter the percentage of donation: ";
  cin >> percentDonation;
  cout << endl
       << endl;

  grossAmount = adultTicketPrice * noOfAdultTicketSold + childTicketPrice * noOfChildTicketSold;

  amountDonated = grossAmount * percentDonation / 100;

  netSaleAmount = grossAmount - amountDonated;

  return 0;
}