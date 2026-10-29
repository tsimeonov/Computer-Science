#include <iostream>

using namespace std;

int secret(int, int);

void func(int x, int &y);

int main()
{
 int num1, num2;

 num1 = 6;

 cout << "Enter a positive integer: ";
 cin >> num2;
 cout << endl;

 cout << secret(num1, num2) << endl;
 num2 = num2 - num1;

 cout << num1 << " " << num2 << endl;
 func(num2, num1);
 cout << num1 << " " << num2 << endl;

 return 0;
}

int secret(int a, int b)
{
 int d;

 d = a + b;
 b = a * d;

 return b;
}

void func(int x, int &y)
{
 int val1, val2;

 val1 = x + y;
 val2 = x * y;
 y = val1 + val2;
 cout << val1 << " " << val2 << endl;
}

/*
Output

Enter a positive integer: 2

48
6 -4
2 -24
-22 -4
*/