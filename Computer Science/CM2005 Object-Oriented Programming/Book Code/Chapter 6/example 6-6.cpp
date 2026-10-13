/*
This program calculates and prints a customers bill for a local cable company.
The program processes two types of customers: residential and business
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Named constants - residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

// Named constants = business customes
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERB_COST = 75.00;
const double BUS_BACIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

double residential(); // Function prototype
double business();    // Function prototypes

int main()
{
 // Declare variables
 int accountNumber;
 char customerType;
 double amountDue;

 cout << fixed << showpoint;
 cout << setprecision(2);

 cout << "This program computes a cable bill." << endl;
 cout << "Enteer account numberL ";
 cin >> accountNumber;
 cout << endl;

 cout << "Enter customer type: R, r"
      << " (Residential), B, b (Business): ";
 cin >> customerType;
 cout << endl;

 return 0;
}