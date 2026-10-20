// Reference and value parameters

#include <iostream>

using namespace std;

void addFirst(int &first, int &second);
void doubleFirst(int one, int two);
void squareFirst(int &ref, int val);

int main()
{

 return 0;
}

void addFirst(int &first, int &second)
{
 cout << "Line 20: Inside addFirst: first = "
      << first << ", second = " << second << endl;

 first = first + 2;

 cout << "Line 22: Inside addFirst: first = "
      << first << ", second = " << second << endl;

 second = second * 2;

 cout << "Line 24: Inside addFirst: first = "
      << first << ", second = " << second << endl;
}