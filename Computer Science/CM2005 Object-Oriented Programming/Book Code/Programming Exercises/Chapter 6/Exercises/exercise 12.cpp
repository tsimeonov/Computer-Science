#include <iostream>
#include <iomanip>

using namespace std;

double mystery(int x, double y, char ch);

int main()
{
 cout << fixed << setprecision(2);

 cout << mystery(16, 2.0, 'A') << endl; // 4.00
 cout << mystery(5, 3.0, '*') << endl;  // 74.00
 cout << mystery(-7, 2.5, 'T') << endl; // 92.62

 return 0;
}

double mystery(int x, double y, char ch)
{
 if (x > 0 && isupper(ch))
 {
  return (sqrt(x * 1.0) + (static_cast<int>(ch)) - 65);
 }
 else
 {
  return (pow(y, 3) + x + static_cast<int>(ch));
 }
}