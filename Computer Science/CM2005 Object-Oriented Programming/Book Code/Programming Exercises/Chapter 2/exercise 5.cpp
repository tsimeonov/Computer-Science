#include <iostream>

using namespace std;

const double PI = 3.14;

int main()
{
  double radius;
  double area;
  double circumference;

  cout << "Enter the radius:";
  cin >> radius;
  cout << endl;

  area = PI * radius * radius;

  cout << "Area = " << area << endl;

  circumference = 2 * PI * radius;

  cout << "Circumferemce = " << circumference << endl;

  return 0;
}
