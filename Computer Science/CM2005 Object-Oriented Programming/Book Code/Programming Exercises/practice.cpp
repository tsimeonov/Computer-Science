#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{

 double townA;
 double townB;
 double growthRateTownA;
 double growthRateTownB;

 int years = 0;

 cout << "Enter the population and growth rate of town A: ";
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

 cout.imbue(locale(""));
 cout << fixed << setprecision(2);

 cout << "Town A will surpass town B after: " << years << " years " << endl;
 cout << "Population of town A: " << townA << endl;
 cout << "Population of town B: " << townB << endl;

 return 0;
}