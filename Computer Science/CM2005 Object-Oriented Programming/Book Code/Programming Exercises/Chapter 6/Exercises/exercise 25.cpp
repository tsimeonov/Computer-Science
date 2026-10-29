#include <iostream>

using namespace std;

void customFunc(int &num1, double &num2, string &str);

int main()
{
 int myInt = 4;
 double myDouble = 10;
 string myStr = "Hello";

 customFunc(myInt, myDouble, myStr);

 cout << "myInt: " << myInt << endl;
 cout << "myDouble: " << myDouble << endl;
 cout << "myStrt: " << myStr << endl;

 return 0;
}

void customFunc(int &num1, double &num2, string &str)
{
 num1 = 0;
 num2 = 0;
 str = " ";
}