#include <iostream>

using namespace std;

bool isWitespace(char ch);

int main()
{

 cout << isWitespace(' ') << endl;

 return 0;
}

bool isWitespace(char ch)
{
 if (ch == ' ')
 {
  return true;
 }
 else
 {
  return false;
 }
}
