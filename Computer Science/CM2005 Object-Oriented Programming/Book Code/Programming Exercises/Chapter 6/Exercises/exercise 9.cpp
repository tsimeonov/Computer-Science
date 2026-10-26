#include <iostream>

using namespace std;

double first(double, double);
int second(char, double, double);
string third(string, string, int, double);
char grade(double, double);

int main()
{

 cout << first(2.5, 7.8) << endl;

 return 0;
}

double first(double, double)
{

 return 1;
}

/*
a: How many parameters does the function first have? What is the type of function first
Two parameters, return type double
*/

/*
b: How many parameters does function second have? What is the type of function second
Three parameters, return type int
*/

/*
c: How many parameters does function third have? What is the type of function third
Four parameters, return type string
*/

/*
d: How many parameters does function grade have? What is the type of funciton grade
Two parameters, return type char
*/

/*
e: How many actual parameters are needed to call the funciton third?
What is the type of each actual parameter, and in what order should you use these parameters in a call to the function third
Four parameters, string, string, int, double
*/

/*
f: Write a C++ statement that prints the value returned by function first with the actual parameters 2.5 and 7.8

 cout << first(2.5, 7.8) << endl;

*/

/*
g: Write a C++ statement that prints the value returned by function grade with the actual parameters 82.50 and 92.50

 cout << grade(82.50, 92.50) << endl;

*/

/*
h: Write a C++ statement that prints the string returned by function third
string third(string, string,int,double);
*/