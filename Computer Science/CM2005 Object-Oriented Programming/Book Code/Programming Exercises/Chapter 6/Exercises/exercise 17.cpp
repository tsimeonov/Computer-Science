#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double customeFunc(double num1, double num2);

int main()
{
 cout << fixed << setprecision(2);

 cout << customeFunc(2.0, 3.0) << endl; // Output 17.00

 return 0;
}

double customeFunc(double num1, double num2)
{
 return (pow(num1, num2)) + (pow(num2, num1));
}
