// Program illustrating how a value parameter works

#include <iostream>

using namespace std;

void funcValueParam(int num);

int main()
{
 int number = 6;

 cout << "Line 7: Before calling the function "
      << "funcValueParam, number = " << number
      << endl;

 funcValueParam(number);

 cout << "Line 9: After calling the function "
      << "funcValueParam, number = " << number
      << endl;

 return 0;
}

void funcValueParam(int num)
{
 cout << "Line 14: In the function funcValueParam, "
      << "before changing, num = " << num
      << endl;

 num = 15;

 cout << "Line 16: In the function funcValueParam, "
      << "after changing, num = " << num
      << endl;
}

/*
Sample run

Line 7: Before calling the function funcValueParam, number = 6
Line 14: In the function funcValueParam, before changing, num = 6
Line 14: In the function funcValueParam, before changing, num = 15
Line 9: After calling the function funcValueParam, number = 6
*/