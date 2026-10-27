#include <iostream>

using namespace std;

int mystery(int num1, int num2);

int main()
{
 cout << "a: " << mystery(4, -5) << endl;  // Output: -120
 cout << "b: " << mystery(-8, 9) << endl;  // Output: 37
 cout << "c: " << mystery(2, 3) << endl;   // Output: 6
 cout << "d: " << mystery(-2, -4) << endl; // Output: 0

 return 0;
}

int mystery(int num1, int num2)
{
 if (num1 > 0)
 {
  for (int i = 1; i <= num1; i++)
  {
   num2 = num2 * i;
  }
  return num2;
 }
 else if (num2 > 0)
 {
  for (int i = 0; i <= num2; i++)
  {
   num1 = num1 + i;
  }
  return num1;
 }

 return 0;
}
