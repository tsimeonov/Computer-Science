#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void trackVar(double &x, double y);

int main()
{
 double one, two;

 cout << fixed << showpoint << setprecision(2);

 cout << "Enter two numbers: ";
 cin >> one >> two;
 cout << endl;

 trackVar(one, two);
 cout << "one = " << one << ", two = " << two << endl;
 trackVar(two, one);
 cout << "one = " << one << ", two = " << two << endl;

 return 0;
}

void trackVar(double &x, double y)
{
 double z;

 z = floor(x) + ceil(y);
 x = x + z;
 y = y - z;

 cout << "z = " << z << ", ";
}

/*
(a) What is the output if the input is 3 5?
Output:
z = 8.00, one = 11.00, two = 5.00
z = 16.00, one = 11.00, two = 21.00

(b) What is the output if the input is 4 11?
Output:
z = 15.00, one = 19.00, two = 11.00
z = 30.00, one = 19.00, two = 41.00

(c) What is the output if the input is 10 10?
Output:
z = 20.00, one = 30.00, two = 10.00
z = 40.00, one = 30.00, two = 50.00
*/