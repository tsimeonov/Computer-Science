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

An operation of bit or bits,
An operaiont of bit or bits

The proposition p XOR q is true when exactly one of p or q is true

THe propostion p XOR q is true when exactly one of p or q is true

Bitwise operations are fast and low level computations, that manipulate numbers by directly comparing, shifting or flipping their individual digits

Bitwise operations are fast low level computations that manipulate numbers by comparing, shifting or flipping their individual binary digits

Bitwise operation are fast low level compitations that manipulate numbers by comparing, shifting or flipping their individual binary digits

Bitwise operations are fast low level computations that manipulate numbers by comparing shifting or flipping their individual binary digits


*/