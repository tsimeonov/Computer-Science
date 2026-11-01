#include <iostream>
#include <cctype> // for lower
#include <string>

using namespace std;

bool isVowel(char ch);

int main()
{
 string sentence;

 cout << "Enter a sequence of characters: ";
 cin >> sentence;
 cout << endl;

 cout << "The sentence is: " << sentence << endl;

 int count = 0;

 for (int i = 0; i < sentence.length(); i++)
 {
  if (isVowel(sentence[i]))
  {
   count++;
  }
 }

 cout << "The number of vowels: " << count << endl;

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
