#include <iostream>
#include <cmath>

using namespace std;

int main()
{

 // Variables
 double a; // x^2
 double b; // x
 double c; // constant term

 // Input
 cout << "Type the coefficient of x^2: ";
 cin >> a;
 cout << endl;

 cout << "Type the coefficient of x: ";
 cin >> b;
 cout << endl;

 cout << "Type the constant term: ";
 cin >> c;
 cout << endl;

 // Calculate discriminant
 double discriminant = pow(b, 2) - 4 * a * c;

 if (discriminant == 0)
 {
  cout << "The equation has a single (repreated) root " << endl;
 }
 if (discriminant > 0)
 {
  cout << "The equation has two real roots " << endl;
 }
 if (discriminant < 0)
 {
  cout << "The equation has two complex roots " << endl;
 }
 if (discriminant >= 0)
 {
  double root1 = (-b + sqrt(discriminant)) / (2 * a);
  double root2 = (-b - sqrt(discriminant)) / (2 * a);

  if (discriminant == 0)
  {
   cout << "The root is: " << root1 << endl;
  }
  else
  {
   cout << "Root 1 is: " << root1 << endl;
   cout << "Root 2 is: " << root2 << endl;
  }
 }

 return 0;
}