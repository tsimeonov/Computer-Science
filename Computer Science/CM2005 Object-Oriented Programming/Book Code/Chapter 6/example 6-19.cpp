// Functions with default parameters

#include <iostream>
#include <iomanip>

using namespace std;

int volume(int l = 1, int w = 1, int h = 1);
void funcOne(int &x, double y = 12.34, char z = 'B');

int main()
{

 int a = 23;
 double b = 48.78;
 char ch = 'M';

 cout << fixed << setprecision(2);

 cout << "Line 12: a = " << a << ", b = "
      << b << ", ch = " << ch << endl;
 cout << "Line 13: Volume = " << volume() << endl;
 cout << "Line 14: Volume = " << volume(5, 4) << endl;
 cout << "Line 15: Volume = " << volume(34) << endl;
 cout << "Line 16: Volume = " << volume(6, 4, 5) << endl;

 funcOne(a);
 funcOne(a, 42.68);
 funcOne(a, 34.65, 'Q');
 cout << "Line 20: a = " << a << ", b = "
      << b << ", ch = " << ch << endl;

 return 0;
}

int volume(int l, int w, int h)
{

 return l * w * h;
}

void funcOne(int &x, double y, char z)
{
 x = 2 * x;
 cout << "Line 30: x = " << x << ", y = "
      << y << ", z = " << z << endl;
}

/*
Line 12: a = 23, b = 48.78, ch = M
Line 13: Volume = 1
Line 14: Volume = 20
Line 15: Volume = 34
Line 16: Volume = 120
Line 30: x = 46, y = 12.34, z = B
Line 30: x = 92, y = 42.68, z = B
Line 30: x = 184, y = 34.65, z = Q
Line 20: a = 184, b = 48.78, ch = M
*/