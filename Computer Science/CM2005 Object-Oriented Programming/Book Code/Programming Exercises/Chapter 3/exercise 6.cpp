#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

 double mass, density, volume;

 cout << fixed << setprecision(2);

 cout << "Type the mass in grams: ";
 cin >> mass;
 cout << endl;

 cout << "Type the density in gr. per cubic centimeters: ";
 cin >> density;
 cout << endl;

 volume = mass / density;

 cout << "The volume is: " << volume << endl;

 return 0;
}
