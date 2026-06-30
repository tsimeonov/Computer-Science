#include <iostream>
#include <string>

using namespace std;

int main()
{
  double d = 0;
  string s = "ewfwefe";

  try
  {
    d = stod(s);
  }
  catch (const exception &e)
  {
  }

  cout << "d: " << d << endl;
}