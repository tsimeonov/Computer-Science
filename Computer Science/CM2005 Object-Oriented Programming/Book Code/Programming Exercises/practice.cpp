#include <iostream>
#include <cctype> // for tolower

using namespace std;

bool isVowel(char ch);

int main()
{
 cout << boolalpha; // Prints "true" or "false" instead of 1 or 0

 cout << "isVowel('a'): " << isVowel('a') << endl; // true
 cout << "isVowel('E'): " << isVowel('E') << endl; // true
 cout << "isVowel('x'): " << isVowel('x') << endl; // false
 cout << "isVowel('9'): " << isVowel('9') << endl; // false

 return 0;
}

bool isVowel(char ch)
{
 char lower = tolower(static_cast<unsigned char>(ch));

 if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
 {
  return true;
 }
 else
 {
  return false;
 }
}
