// Example: setprecision, fixed, showpoint

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

int main()
{

  double radius = 12.67;
  double height = 12.00;

  cout << fixed << showpoint;

  cout << "---------" << endl;
  cout << setprecision(2) << "Line 10: setprecision(2)" << endl;
  cout << "Line 11: radius = " << radius << endl;
  cout << "Line 12: height = " << height << endl;
  cout << "Line 13: volume = " << PI * radius * radius * height << endl;
  cout << "Line 14: PI = " << PI << endl;

  cout << "---------" << endl;

  cout << setprecision(3) << "Line 15: setprecision(3)" << endl;
  cout << "Line 16: radius = " << radius << endl;
  cout << "Line 17: height = " << height << endl;
  cout << "Line 18: volume = " << PI * radius * radius * height << endl;
  cout << "Line 19: PI = " << PI << endl;

  cout << "---------" << endl;

  cout << setprecision(4) << "Line 20: setprecision(4)" << endl;
  cout << "Line 21: radius = " << radius << endl;
  cout << "Line 22: height = " << height << endl;
  cout << "Line 23: volume = " << PI * radius * radius * height << endl;
  cout << "Line 24: PI = " << PI << endl;

  cout << "---------" << endl;

  cout << "Line 25: " << setprecision(3) << radius << ", "
       << setprecision(2) << height << ", "
       << setprecision(5) << PI << endl;

  return 0;
}

/*
Sample run

Line 10: setprecision(2)
Line 11: radius = 12.67
Line 12: height = 12.00
Line 13: volume = 6051.80
Line 14: PI = 3.14
Line 15: setprecision(3)
Line 16: radius = 12.670
Line 17: height = 12.000
Line 18: volume = 6051.797
Line 19: PI = 3.142
Line 20: setprecision(4)
Line 21: radius = 12.6700
Line 22: height = 12.0000
Line 23: volume = 6051.7969
Line 24: PI = 3.1416
Line 25: 12.670, 12.00, 3.14159
*/