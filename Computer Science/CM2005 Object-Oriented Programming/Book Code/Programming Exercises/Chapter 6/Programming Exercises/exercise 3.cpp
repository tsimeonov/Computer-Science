#include <iostream>
#include <cctype> // for lower
#include <string>

using namespace std;

bool isVowel(char ch);

int main()
{
 string sentence;
 int counter = 0;

 cout << "Enter a sequence of characters: ";
 cin >> sentence;
 cout << endl;

 for (int i = 0; i < sentence.length(); i++)
 {
  if (isVowel(sentence[i]))
  {
   counter++;
  }
 }

 cout << "The number of vowels is: " << counter << endl;

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
