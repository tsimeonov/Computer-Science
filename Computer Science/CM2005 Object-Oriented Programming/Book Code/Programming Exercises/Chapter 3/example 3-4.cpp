/*
How to use predefined functions.
This program uses tje math functions pow and sqrt to determine and output the volume of a sphere, the distance between two points, respectively, and the string function length to find the number of characters in a string.
If the radius of the sphere is r, then the volume of the sphere is (4/3) * PI*r^3. If (x1,y1) and (x2,y2) are the coordinates of two points in the XY-place, then the distance between these points is sqrt ((x2-x1)^2 + (y2-y1)^2)
*/

// Line 1
#include <iostream>
// Line 2
#include <cmath>
// Line 3
#include <string>

// Line 4
using namespace std;

// Line 5
const double PI = 3.1416;

// Line 6
int main()
// Line 7
{
  // Line 8
  double sphereRadius;
  // Line 9
  double sphereVolume;
  // Line 10
  double point1X, point1Y;
  // Line 11
  double point2X, point2Y;
  // Line 12
  double distance;

  // Line 13
  string str;

  // Line 14
  cout << "Line 14: Enter the radius of the sphere: ";

  // Line 15
  cin >> sphereRadius;

  // Line 16;
  cout << endl;

  // Line 17
  sphereVolume = (4 / 3) * PI * pow(sphereRadius, 3);

  // Line 18
  cout << "Line 18: The volume of the sphere is: " << sphereVolume << endl
       << endl;

  // Line 19
  cout << "Line 19: Enter the coordinates of two " << "points in X-Y place: ";

  // Line 20
  cin >> point1X >> point1Y >> point2X >> point2Y;

  // Line 21
  cout << endl;

  // Line 22
  distance = sqrt(pow(point2X - point1X, 2) + pow(point2Y - point1Y, 2));

  // Line 23
  cout << "Line 23: The distance between the points " << "(" << point1X << ", " << point1Y << ") and " << "(" << point2X << ", " << point2Y << ") is: " << distance << endl
       << endl;

  // Line 24
  str = "Programming with C++";

  // Line 25
  cout
      << "Line 25: The number of characters, " << "including blanks, in \n    \"" << str << "\" is: " << str.length() << endl;

  // Line 26
  return 0;

  // Line 27
}
