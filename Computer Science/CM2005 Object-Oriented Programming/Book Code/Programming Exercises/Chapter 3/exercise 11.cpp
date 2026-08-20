/*
A size of a jumbo candy bar with rectangular shape is l × w × h.
Due to rising costs of coca, the volume of the candy bar is to be reduced by p%.
To accomplish this, the management decided to keep the thickness, h, of the candy bar the same, and reduce the length and width by the same amount.
For example, if l = 12, w = 7, h = 3, and p = 10,
then the new dimension of the candy bar is 11.39 × 6.64 × 3.
Write a program to accomplish this.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

 // Variables
 double length;
 double width;
 double newLength;
 double newWidth;
 int const height = 3;
 double const pFactor = 10;

 cout << "Type the length: ";
 cin >> length;
 cout << endl;

 cout << "Type the width: ";
 cin >> width;
 cout << endl;

 cout << fixed << setprecision(2);

 double k = sqrt(1 - (pFactor / 100));
 newLength = length * k;
 newWidth = width * k;

 cout << "New length is: " << newLength << endl;

 cout << "New width is: " << newWidth << endl;

 cout << "Height is: " << height << endl;

 return 0;
}