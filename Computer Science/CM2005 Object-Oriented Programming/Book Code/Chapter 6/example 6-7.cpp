#include <iostream>

using namespace std;

double larger(double x, double y);

int main()
{
 double num; // variable to hold the current number
 double max; // varialbe to hold the larger number
 int count;  // loop control variable

 cout << "Enter 10 numbers." << endl;
 cin >> num;
 max = num;

 for (count = 1; count < 10; count++)
 {
  cin >> num;
  max = larger(max, num);
 }

 cout << "The largest number is " << max << endl;

 return 0;
}

double larger(double x, double y)
{
 if (x >= y)
 {
  return x;
 }
 else
 {
  return y;
 }
}

/*
Sample run

Enter 10 numbers
20 23 42 12 42 12 53 64 23 53

The largest number is 64
*/