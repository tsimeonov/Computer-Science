#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 int temp = 0;

 for (int counter = 1; counter <= 100; counter++)
 {
  if (pow(floor(sqrt(counter / 1.0)), 2.0) == counter)
  {
   temp = temp + counter;
  }
 }

 cout << temp << endl;

 return 0;
}

/*
a: What is the output of this program => 385
b: What does this program do?
The program calculates and prints the sum of all perfect squares from 1 to 100
*/