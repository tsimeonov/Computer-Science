#include <iostream>
#include <iomanip>

using namespace std;

// Use named constants for discounts
const double DISCOUNT_10_ROOM = 0.1;
const double DISCOUNT_20_ROOM = 0.2;
const double DISCOUNT_30_ROOM = 0.3;
const double DISCOUNT_3_DAYS = 0.05;

int main()
{

 // Variables
 // cost of renting one room
 double roomPrice;
 // the number of rooms booked
 int nrRooms;
 // the number of days the rooms are booked
 int nrDays;
 // and the sales tax (as a percent)
 double salesTax;

 double discount = 0.0;

 // Input
 cout << "What is the cost of renting a room: ";
 cin >> roomPrice;
 cout << endl;

 cout << "How many rooms you want to book: ";
 cin >> nrRooms;
 cout << endl;

 cout << "For how many days you want to book the room: ";
 cin >> nrDays;
 cout << endl;

 cout << "How much is the sales tax: ";
 cin >> salesTax;
 cout << endl;

 if (nrRooms >= 30)
 {
  discount = DISCOUNT_30_ROOM;
 }
 else if (nrRooms >= 20)
 {
  discount = DISCOUNT_20_ROOM;
 }
 else if (nrRooms >= 10)
 {
  discount = DISCOUNT_10_ROOM;
 }

 // Additional 5% discount for booking of at least 3 days
 if (nrDays >= 3)
 {
  discount = discount + DISCOUNT_3_DAYS;
 }

 // Calculations
 // total room cost
 double discountedRoomPrice = roomPrice - (roomPrice * discount);
 double totalRoomCost = discountedRoomPrice * nrRooms * nrDays;

 double taxAmount = totalRoomCost * (salesTax / 100);
 double totalBilling = totalRoomCost + taxAmount;

 cout << fixed << setprecision(2);

 // Output

 cout
     << "The cost of renting a room is: " << roomPrice << endl;
 cout << "The percentage discount for the room is: " << discount * 100 << "%" << endl;
 cout << "The number of rooms booked is:  " << nrRooms << endl;
 cout << "The number of days the room is book:  " << nrDays << endl;
 cout << "The total cost of the room is:  " << totalRoomCost << endl;
 cout << "The sales tax is:  " << salesTax << "%" << endl;
 cout << "The total billing amount is:  " << totalBilling << endl;

 return 0;
}