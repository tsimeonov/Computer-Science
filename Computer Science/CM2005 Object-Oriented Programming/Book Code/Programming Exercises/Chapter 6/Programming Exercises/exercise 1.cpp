#include <iostream>

using namespace std;

bool isPalindrome(string str);

int main()
{
 string myStr = "abba";

 isPalindrome(myStr);

 cout << "Is " << myStr << "a palindrome: " << isPalindrome(myStr) << endl;
 ;

 return 0;
}

bool isPalindrome(string str)
{
 int length = str.length();

 cout << boolalpha;

 for (int i = 0; i < length / 2; i++)
 {
  if (str[i] != str[length - 1 - i])
  {
   return false;
  }
 }
 return true;
}
