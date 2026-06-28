#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int hours;
  int minutes;
  int seconds;
  int leftOver;
  int total;

  cout << "Total Elapsed time: " << endl;
  cin >> total;

  hours = total / 3600;
  leftOver = total % 3600;
  minutes = leftOver / 60;
  seconds = leftOver % 60;

  cout << "Result is: " << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}