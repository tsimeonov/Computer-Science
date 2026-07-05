// Functions peek and putback

#include <iostream>

using namespace std;

int main()
{
  char ch;

  // LIne 6
  cout << "Line 6: Enter a string: ";

  cin.get(ch);
  cout << endl;

  // Line 9
  cout << "Line 9: After first cin.get(ch); " << "ch = " << ch << endl;

  cin.get(ch);

  // Line 11
  cout << "Line 11: After second cin.get(ch);" << "ch = " << ch << endl;

  cin.putback(ch);
  cin.get(ch);

  // Line 14
  cout << "Line 14: After putback and then " << "cin.get(ch); ch = " << ch << endl;

  ch = cin.peek();

  // Line 16
  cout << "Line 16: After cin.peek(); ch = " << ch << endl;

  cin.get(ch);

  // Line 18
  cout << "Line 18: After cin.get(ch); ch = " << ch << endl;

  return 0;
}