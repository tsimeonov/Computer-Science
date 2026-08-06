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

  // Step 2: Output results

  cout << "*****************************************" << endl;

  cout << setfill('.') << left << setw(35) << "Movie Name: "
       << right << " " << movieName << endl;

  cout << left << setw(35) << "Number of Tickets Sold: "
       << setfill(' ') << right << setw(10)
       << noOfAdultTicketSold + noOfChildTicketSold
       << endl;

  cout << setfill('.') << left << setw(35)
       << "Gross Amount: "
       << setfill(' ') << right << " $"
       << setw(8) << grossAmount << endl;

  cout << setfill('.') << left << setw(35)
       << "Percentage of Gross Amount Donated: "
       << setfill(' ') << right
       << setw(9) << percentDonation << "%" << endl;

  cout << setfill('.') << left << setw(35)
       << "Amount Donated: "
       << setfill(' ') << right << " $"
       << setw(8) << amountDonated << endl;

  cout << setfill('.') << left << setw(35)
       << "Net Sale: "
       << setfill(' ') << right << " $"
       << setw(8) << netSaleAmount << endl;

  return 0;
}

/*
Sample run

Enter movie name: Journey to Mars
Enter the price of an adult ticket: 4.50
Enter the price of a child ticket: 3.00
Enter number of adult tickets sold: 800
Enter number of child tickets sold: 1850
Enter the percentage of donation: 10

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
Movie Name: ....................... Journey to Mars
Number of Tickets Sold: ........... 2650
Gross Amount: ..................... $ 9150.00
Percentage of Gross Amount Donated: 10.00%
Amount Donated: ................... $ 915.00
Net Sale: ......................... $ 8235.00

*/