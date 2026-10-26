#include <iostream>

using namespace std;

int mystery(int x, int y, int z);

int main()
{
 cout << mystery(4, 18, 12) << endl;  // 7
 cout << mystery(6, -3, 45) << endl;  // -17
 cout << mystery(-5, 12, -7) << endl; // -1
 cout << mystery(1, 0, 0) << endl;    // 1
 cout << mystery(10, 10, 10) << endl; // 2

 return 0;
}

int mystery(int x, int y, int z)
{
 if (x <= y && x <= z && z != 0)
 {
  return (y + z) / x;
 }
 else if (y <= z && y <= x && y != 0)
 {
  return (z + x) / y;
 }
 else if (z <= x && z <= y && z != 0)
 {
  return (x + y) / z;
 }
 else
 {
  return x + y + z;
 }
}