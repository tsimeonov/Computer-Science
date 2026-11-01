#include <iostream>
#include <cctype> // for lower

using namespace std;

bool isVowel(char ch);

int main()
{
 cout << boolalpha;

 cout << "isVowel('a')" << isVowel('a') << endl; // true
 cout << "isVowel('E')" << isVowel('E') << endl; // true
 cout << "isVowel('x')" << isVowel('x') << endl; // false
 cout << "isVowel('g')" << isVowel('g') << endl; // false

 return 0;
}

bool isVowel(char ch)
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
