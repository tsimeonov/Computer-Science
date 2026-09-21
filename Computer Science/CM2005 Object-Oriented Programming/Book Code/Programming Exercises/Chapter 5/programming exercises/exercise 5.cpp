#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
 int num1, num2;

 cout << "Enter two integer numbers: ";
 cin >> num1 >> num2;
 cout << endl;

 // Determine the lower and upper bonds of the range
 int start = min(num1, num2);
 int end = max(num1, num2);

 // cout << "Min is: " << start << endl;
 // cout << "Max is: " << end << endl;

 int count3 = 0;
 int count5 = 0;

 // Loop through all numbers in the range [start,end]
 for (int i = start; i <= end; i++)
 {
  if (i % 3 == 0)
  {
   count3++;
  }
  if (i % 5 == 0)
  {
   count5++;
  }
 }

 cout << count3 << " numbers are multiples of 3" << endl;
 cout << count5 << " numbers are multiples of 5" << endl;

 return 0;
}