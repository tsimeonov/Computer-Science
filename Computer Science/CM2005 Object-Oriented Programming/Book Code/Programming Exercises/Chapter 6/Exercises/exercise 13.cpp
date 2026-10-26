#include <iostream>

using namespace std;

int secret(int m, int n);

int main()
{

 cout << secret(18, 4) << endl;   // 72
 cout << secret(-10, 20) << endl; // -200

 return 0;
}

int secret(int m, int n)
{
 int temp = n;

 for (int i = 1; i < abs(m); i++)
 {
  temp = temp + n;
 }
 if (m < 0)
 {
  temp = -temp;
 }

 return temp;
}
