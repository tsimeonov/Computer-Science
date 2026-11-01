#include <iostream>
#include <cctype> // for lower

using namespace std;

bool isLower(char ch);

int main()
{
 cout << boolalpha;

 cout << "isLower('a')" << isLower('a') << endl; // true
 cout << "isLower('E')" << isLower('E') << endl; // true
 cout << "isLower('x')" << isLower('x') << endl; // false
 cout << "isLower('g')" << isLower('g') << endl; // false

 return 0;
}

bool isLower(char ch)
{
 char lower = tolower(ch);

 if (lower == 'a' || lower == 'e' || lower == 'o' || lower == 'i' || lower == 'u')
 {
  return true;
 }
 else
 {
  return false;
 }
}
