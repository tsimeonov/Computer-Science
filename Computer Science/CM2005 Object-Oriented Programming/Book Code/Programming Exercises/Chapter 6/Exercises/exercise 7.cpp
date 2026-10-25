#include <iostream>

using namespace std;

int num1, num2, num3;
double length, width, height;
double volume;

double box(double, double, double);

int main()
{
 num1 = 6;
 num2 = 7;
 num3 = 4;
 length = 6.2;
 width = 2.3;
 height = 3.4;

 // volume = box(length, width, height); // Valid
 // volume = box(length, 3.8, height); // Valid
 // cout << box(num1, num3, num3) << endl; // Valid
 // cout << box(length, width, 7.0) << endl; // Valid
 // volume = box(length, num1, height); // Valid
 // cout << box(6.2, , height) << endl; // Invalid: expected expression
 // volume << box(length + width, height); // Invalid: too few argumenets
 // volume << box(num1, num2 + num3) << endl; // Invalid: too few argumenets

 cout << volume << endl;

 return 0;
}

double box(double l, double w, double h)
{
 return l * w * h;
}