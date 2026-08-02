// Thos example illustrates how the function setw works
// setw - stands for set width, used to set the minumim
// field width for the next formatting output

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int miles = 245;
  int speed = 55;
  double hours = 35.45;
  double error = 3.7564;

  cout << fixed << showpoint;
  cout << "123456789012345678901234567890" << endl;

  cout << setw(5) << miles << endl;

  cout << setprecision(2) << endl;

  cout << setw(5) << miles
       << setw(5) << speed
       << setw(6) << hours
       << setw(7) << error << endl;

  cout << setw(5) << speed
       << setw(5) << miles
       << setw(4) << hours
       << setw(7) << error << endl;

  cout << setw(2) << miles
       << setw(6) << hours
       << setw(7) << error << endl;

  cout << setw(2) << miles
       << setw(7) << "error"
       << error << endl;

  return 0;
}

/*

Sample Run:
123456789012345678901234567890
245
245 55 35.45 3.76
55 24535.45 3.76
245 35.45 3.76
245 error3.76

*/