/*
The statements in the following program are in incorrect order. Re-arange the statements so that they prompt the user to input the shape type (rectangle, circle, or cylinder) and the appropriate dimension of the shape. The program then outputs the following information about the shape: For a rectangle, it outputs the area and perimeter;
for a circle, it outputs the area and circumference; and for a cylinder,
it outputs the volume and surface area. After rearranging the state-
ments, your program should be properly indented.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

 string shape;
 double height;

 cout << "Enter the shape type: (rectangle, circle, cylinder): ";
 cin >> shape;
 cout << endl;

 const double PI = 3.1416;
 double length;
 double width;
 double radius;

 cout << fixed << showpoint << setprecision(2);

 if (shape == "rectangle")
 {
  cout << "Enter the length of the rectangle: ";
  cin >> length;
  cout << endl;

  cout << "Enter the width of the rectangle: ";
  cin >> width;
  cout << endl;

  cout << "Perimeter of the rectangle = " << 2 * (length + width) << endl;

  cout << "Area of the rectange = " << length * width << endl;
 }
 else if (shape == "circle")
 {
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  cout << endl;

  cout << "Circumference of the circle: " << 2 * PI * radius << endl;

  cout << "Area of the circle = " << PI * pow(radius, 2.0) << endl;
 }
 else if (shape == "cylinder")
 {
  cout << "Enter the radius of the base of the cylinder: ";
  cin >> radius;
  cout << endl;

  cout << "Enter the height of the cylinder: ";
  cin >> height;
  cout << endl;

  cout << "Volume of the cylinder = " << PI * pow(radius, 2.0) * height << endl;

  cout << "Surface area of the cylinder = "
       << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
       << endl;
 }
 else
 {
  cout << "The program does not handle " << shape << endl;
 }

 return 0;
}