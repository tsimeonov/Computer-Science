// Input failure program

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  int age = 0;
  int weight = 0;
  double height = 0.0;

  // Line 10
  cout << "Line 10: Enter name, age, weight and " << "height: ";
  cin >> name >> age >> weight >> height;
  cout << endl;

  // Line 13
  cout << "Line 13: Name: " << name << endl;

  // Line 14
  cout << "Line 14: Age " << age << endl;

  // Line 15
  cout << "Line 15: Weight " << weight << endl;

  // Line 16
  cout << "Line 16: Height " << height << endl;

  return 0;
}