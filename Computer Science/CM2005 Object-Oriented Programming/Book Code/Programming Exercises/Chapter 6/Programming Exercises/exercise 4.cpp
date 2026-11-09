#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.14159;

int main()
{
 cout << fixed << setprecision(2);
 cout << "The value of sqrt PI is: " << sqrt(PI) << endl;

 double r;

 cout << "Enter the radius of a sphere: " << endl;
 cin >> r;
 cout << endl;

 cout << "Surface area of the sphere: " << 4.0 * PI * pow(r, 2) << endl;
 cout << "Volume of the sphere: " << (4.0 / 3.0) * PI * pow(r, 3) << endl;

 return 0;
}
