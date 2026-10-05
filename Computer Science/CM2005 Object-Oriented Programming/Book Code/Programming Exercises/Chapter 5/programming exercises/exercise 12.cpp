#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
 // Varialbes
 double townA;
 double townB;
 double growthRateTownA;
 double growthRateTownB;

 // Variable to track how many years pass
 int years = 0;

 cout << "Enter the population and growth rate of town A: ";
 cin >> townA >> growthRateTownA;
 cout << endl;

 cout << "Enter the population and growth rate of town B: ";
 cin >> townB >> growthRateTownB;
 cout << endl;

 while (townA < townB)
 {
  // Calculate and add this year's growth for both towns
  townA = townA + (townA * (growthRateTownA / 100));
  townB = townB + (townB * (growthRateTownB / 100));

  years++;
 }

 // Tell C++ to format numbers using standard regional rules (adds dots/commas)
 cout.imbue(locale(""));
 cout << fixed << setprecision(0);

 // Output the final results
 cout << "Town A will surpass Town B after: " << years << " years" << endl;
 cout << "Population of Town A: " << townA << endl;
 cout << "Population of Town B: " << townB << endl;
 return 0;
}