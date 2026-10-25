#include <cmath>
#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{

 cout << fixed << setprecision(2);

 int x = 1;
 int y = 1;
 int a = 1;
 int b = 1;
 int c = 1;

 cout << "a:" << pow(9.2, 4) << endl;                              // 7163,93
 cout << "b:" << sqrt(5 * x - 3 * x * y) << endl;                  // 1,41
 cout << "c:" << cbrt(a + b) << endl;                              // 1.26
 cout << "d:" << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl; // NaN
 cout << "e:" << 3 * x * x - 2 * y << endl;                        // 1

 return 0;
}