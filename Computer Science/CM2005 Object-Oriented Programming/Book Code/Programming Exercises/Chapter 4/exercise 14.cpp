#include <iostream>

using namespace std;

int main()
{

 double nrHours;

 cout
     << "How many hours the car was parked: ";
 cin >> nrHours;
 cout << endl;

 if (nrHours >= 0 && nrHours <= 3)
 {
  cout << "The parking fee is: " << "$5" << endl;
 }
 else if (nrHours > 3 && nrHours <= 9)
 {
  cout << "The parking fee is: $" << 6 * (int)(nrHours + 1) << endl;
 }
 else if (nrHours > 9 && nrHours <= 24)
 {
  cout << "The parking fee is: " << "$60" << endl;
 }
 else
 {
  // Catches negative numbers or anything over 234
  cout << "Invalid input. Hours must be between 9 and 24" << endl;
 }

 return 0;
}

/*
Example 1: A 2.5-hour stay
- Hours (h): 2.5
- Which rule applies? Because 2.5 is between 0 and 3, we use the first rule (0≤h≤3).
- Fee: $5

Example 2: A 5.7-hour stay
- Hours (h): 5.7
- Which rule applies? Because 5.7 is between 3 and 9, we use the middle rule (3<h≤9).
- Calculation:
  - Add 1 to the hours: 5.7 + 1 = 6.7
  - Apply the int() function (which drops the decimal): int(6.7) = 6
  - Multiply by 6: 6 * 6 = 36
  - Fee: 36

  Example 3: A 12-hour stay
  - Hours (h): 12
  - Which rule applies? Because 12 is greater than 9, we use the final rule (9<h≤24).
  - Fee: $60
*/