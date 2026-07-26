#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // declare the gravitational constant in CGS units
  const double k = 6.67e-8;

  double massOne;
  double massTwo;
  double distance;

  double force;

  cout << "Enter mass of first body (in grams): " << endl;
  cin >> massOne;

  cout << "Enter mass of second body (in grams): " << endl;
  cin >> massTwo;

  cout << "Enter distance between bodies (in centimeters): " << endl;
  cin >> distance;

  force = k * ((massOne * massTwo) / pow(distance, 2));

  cout << "The force is: " << force << endl;

  return 0;
}