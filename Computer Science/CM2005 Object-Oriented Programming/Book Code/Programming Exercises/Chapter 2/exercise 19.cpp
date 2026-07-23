#include <iostream>

using namespace std;

int main()
{

  double quarters;
  double dimes;
  double nickels;
  double pennies;

  cout << "Enter quarters: " << endl;
  cin >> quarters;

  cout << "Enter dimes: " << endl;
  cin >> dimes;

  cout << "Enter nickels: " << endl;
  cin >> nickels;

  pennies = (quarters * 25) + (dimes * 10) + (nickels * 5);

  cout << "The total amount of pennies is: " << pennies << endl;

  return 0;
}