#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
 // Variables
 double townA;
 double townB;
 double growthRateTownA;
 double growthRateTownB;

 int years = 0;

 cout << "Enter the population an growth rate of town A: ";
 cin >> townA >> growthRateTownA;
 cout << endl;

 cout << "Enter the population and growth rate of town B: ";
 cin >> townB >> growthRateTownB;
 cout << endl;

 while (townA < townB)
 {
  townA = townA + (townA * (growthRateTownA / 100));
  townB = townB + (townB * (growthRateTownB / 100));

  years++;
 }

 cout << "Town A will surpass town B after: " << years << " years";
 cout << "Population of town A: " << townA << endl
      << endl;
 cout << "Population of town B: " << townB << endl;

 return 0;
}