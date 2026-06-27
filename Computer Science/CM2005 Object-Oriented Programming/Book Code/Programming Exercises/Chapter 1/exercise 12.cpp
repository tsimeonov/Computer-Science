#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int hours;
  double minutes;
  double seconds;
  double leftOver;
  double total;

  cout << "Total Elapsed time: " << endl;
  cin >> total;

  hours = total / 3600;
  leftOver = fmod(hours, 3600);
  minutes = seconds / 60;
  seconds = fmod(leftOver, 60);

  cout << "Result is: " << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}