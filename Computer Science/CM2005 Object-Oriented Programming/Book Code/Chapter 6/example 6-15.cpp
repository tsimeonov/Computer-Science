// Reference and value parameters

#include <iostream>

using namespace std;

void addFirst(int &first, int &second);
void doubleFirst(int one, int two);
void squareFirst(int &ref, int val);

int main()
{
 int num = 5;

 cout << "Line 9: Inside main: num = " << num << endl;

 addFirst(num, num);
 cout << "Line 11: Inside main after addFirst: "
      << " num = " << num << endl;

 doubleFirst(num, num);
 cout << "Line 13: Inside main after "
      << "doubleFirst: num = " << num << endl;

 squareFirst(num, num);
 cout << "Line 15: Inside main after "
      << "sqareFirst: num = " << num << endl;

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

void doubleFirst(int one, int two)
{
 cout << "Line 28: Inside doubleFirst: one = "
      << one << ", two = " << two << endl;

 one = one * 2;

 cout << "Line 30: Inside doubleFirst: one = "
      << one << ", two = " << two << endl;

 two = two + 2;

 cout << "Line 32: Inside doubleFirst: one = "
      << one << ", two " << two << endl;
}

void squareFirst(int &ref, int val)
{

 cout << "Line 36: Inside squareFirst: ref = "
      << ref << ", val = " << val << endl;

 ref = ref * ref;

 cout << "Line 38: Inside squareFirst: ref = "
      << ref << ", val = " << val << endl;

 val = val + 2;

 cout << "Line 40: Inside sqareFirst: ref = "
      << ref << ", val = " << val << endl;
}

/*
Line 9: Inside main: num = 5
Line 20: Inside addFirst: first = 5, second = 5
Line 22: Inside addFirst: first = 7, second = 7
Line 24: Inside addFirst: first = 14, second = 14
Line 11: Inside main after addFirst:  num = 14
Line 28: Inside doubleFirst: one = 14, two = 14
Line 30: Inside doubleFirst: one = 28, two = 14
Line 32: Inside doubleFirst: one = 28, two 16
Line 13: Inside main after doubleFirst: num = 14
Line 36: Inside squareFirst: ref = 14, val = 14
Line 38: Inside squareFirst: ref = 196, val = 14
Line 40: Inside sqareFirst: ref = 196, val = 16
Line 15: Inside main after sqareFirst: num = 196
*/