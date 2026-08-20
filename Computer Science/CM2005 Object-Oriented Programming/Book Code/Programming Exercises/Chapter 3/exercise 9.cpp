/*
Dairy Farm decided to ship milk in containers in the form of cubes rather
than cylinders. Write a program that prompts the user to input the
radius of the base and the height of a cylindrical container and outputs
the side of the cube with the same volume as the cylindrical container.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

 double const PI = 3.14159;

 // variables
 double baseRadius;
 double heightContainer;

 cout << "Enter the radius of the base of the cylindrical container: ";
 cin >> baseRadius;
 cout << endl;

 cout << "Enter height of the cylidrical container: ";
 cin >> heightContainer;
 cout << endl;

 cout << fixed << showpoint << setprecision(2);

 // 1. Volume of the cylinder
 double volume = PI * pow(baseRadius, 2) * heightContainer;

 // 2. Calcualte the cube root of the volume to find the side
 double side = cbrt(volume);

 cout
     << "The side of the cube with the same volume: " << side << endl;
 return 0;
}