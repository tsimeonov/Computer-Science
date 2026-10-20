// Reference and value parameters

#include <iostream>

using namespace std;

void funOne(int a, int &b, char v);
void funTwo(int &x, int y, char &w);

int main()
{
 int num1, num2;
 char ch;

 num1 = 10;
 num2 = 15;
 ch = 'A';

 cout << "Line 12: Inside main: num1 = " << num1
      << ", num2 = " << num2 << ", and ch = " << ch << endl;

 funOne(num1, num2, ch);

 cout << "Line 14: After funOne: num1 = " << num1
      << ", num2 = " << num2 << ", and ch = " << ch << endl;

 funTwo(num2, 25, ch);

 cout << "Line 14: After funOne: num1 = " << num1
      << ", num2 = " << num2 << ", and ch = " << ch << endl;

 return 0;
}

void funOne(int a, int &b, char v)
{
 int one;

 one = a;
 a++;
 b = b * 2;
 v = 'B';

 cout << "Line 26: Inside funOneL a = " << a
      << ", b = " << b << ", v = " << v
      << ", and more = " << one << endl;
}

void funTwo(int &x, int y, char &w)
{
 x++;
 y = y * 2;
 w = 'G';

 cout << "Line 33: Inside funTwo: x = " << x
      << ", y = " << y << ", and w = " << w << endl;
}

/*
Line 12: Inside main: num1 = 10, num2 = 15, and ch = A
Line 26: Inside funOneL a = 11, b = 30, v = B, and more = 10
Line 14: After funOne: num1 = 10, num2 = 30, and ch = A
Line 33: Inside funTwo: x = 31, y = 50, and w = G
Line 14: After funOne: num1 = 10, num2 = 31, and ch = G
*/