#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

 int num1, num2;

 cout << "Enter two integers: ";
 cin >> num1 >> num2;
 cout << endl;

 // Determine the lower and upper bonds of the range
 int start = min(num1, num2);
 int end = max(num1, num2);

 int count3 = 0;
 int count5 = 0;

 // Loopf through all numbers in the range
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

 cout << count3 << " numbers are multiple of 3" << endl;
 cout << count5 << " numbers are multiple of 5" << endl;

 return 0;
}