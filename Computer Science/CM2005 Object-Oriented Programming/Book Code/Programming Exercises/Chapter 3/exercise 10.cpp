/*
Paula and Danny want to plant evergreen trees along the back side of their yard. They do not want to have an excessive number of trees.
Write a program that prompts the user to input the following:

a. The length of the yard.
b. The radius of a fully grown tree.
c. The required space between fully grown trees.

The program outputs the number of trees that can be planted in the
yard and the total space that will be occupied by the fully grown trees.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
 double const PI = 3.14159;

 // Variables
 int length;
 int radius;
 int distance;

 cout << "The length of the yard: ";
 cin >> length;
 cout << endl;

 cout << "The radius of a fully grown tree: ";
 cin >> radius;
 cout << endl;

 cout << "The required space between fully grown trees: ";
 cin >> distance;
 cout << endl;

 // cout << fixed << setprecision(2);

 // 1. Calculating the number of trees
 double numberTrees = floor((length + distance) / (2 * radius + distance));

 // 2. Calculating the total space
 // Total linear space (length)
 double linearSpace = numberTrees * (2 * radius);
 // Total area
 double totalArea = numberTrees * PI * pow(radius, 2);

 cout << "You can fit: " << numberTrees << " trees\n";
 cout << "The total area: " << totalArea;

 return 0;
}