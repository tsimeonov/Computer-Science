// Example: scientific and fixed

#include <iostream>

using namespace std;

int main()
{
  double hours = 35.23;
  double rate = 15.00;
  double tolerance = 0.0100;

  cout << "hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl
       << endl;

  cout << scientific;
  cout << "Scientific notation: " << endl;
  cout << "hours = " << hours << ", rate = " << rate
       << ", pay= " << hours * rate
       << ", tolerance = " << tolerance << endl
       << endl;

  cout << fixed;
  cout << "Fixed decimal notation: " << endl;
  cout << "hours = " << hours << ", rate = " << rate
       << ", pay= " << hours * rate
       << ", tolerance = " << tolerance << endl
       << endl;

  return 0;
}