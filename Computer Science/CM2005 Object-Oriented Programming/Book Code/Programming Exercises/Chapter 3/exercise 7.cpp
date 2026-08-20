/*
Interest on a credit card’s unpaid balance is calculated using the
­average daily balance. Suppose that netBalance is the balance shown
in the bill, payment is the payment made, d1 is the number of days in
the billing cycle, and d2 is the number of days payment is made before
billing cycle. Then, the average daily balance is:

averageDailyBalance = (netBalance * d1 – payment * d2) / d1

If the interest rate per month is, say, 0.0152, then the interest on the unpaid balance is:

interest = averageDailyBalance * 0.0152

Write a program that accepts as input netBalance, payment, d1, d2,
and interest rate per month. The program outputs the interest. Format
your output to two decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

 // varialbes
 double netBalance;
 double payment;
 double d1;
 double d2;
 double interest;
 double averageDailyBalance;

 cout << "Type balance shown on the bill: ";
 cin >> netBalance;
 cout << endl;

 cout << "------------------" << endl;

 cout << "Payment made: ";
 cin >> payment;
 cout << endl;

 cout << "------------------" << endl;

 cout << "Number of days in the billing cycle: ";
 cin >> d1;
 cout << endl;

 cout << "------------------" << endl;

 cout << "The number of days payment is made before billing cycle: ";
 cin >> d2;
 cout << endl;

 cout << "------------------" << endl;

 cout << "What is the interest: ";
 cin >> interest;
 cout << endl;

 cout << "------------------" << endl;

 cout << fixed << showpoint << setprecision(2);

 averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

 interest = averageDailyBalance * interest;

 // Output the result to the user
 cout << "The interest on the unpaid balance is: " << interest << endl;

 return 0;
}