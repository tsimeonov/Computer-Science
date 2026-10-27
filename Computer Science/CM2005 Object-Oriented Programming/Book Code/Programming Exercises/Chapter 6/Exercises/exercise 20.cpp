#include <iostream>

using namespace std;

const double RATE = 15.50;
const char STAR = '*';

double temp;

void func(int, int, double &, char &);

int main()
{
 int s = 50;
 int t = 6;
 double d;
 char ch = STAR;

 func(s, t, d, ch);
 cout << "d = " << d << ", ch = " << ch << endl;
 func(75, 8, d, ch);
 cout << "d = " << d << ", ch = " << ch << endl;

 return 0;
}

void func(int speed, int time, double &distance, char &c)
{
 double num;

 distance = speed * time;
 num = static_cast<int>(c);
 c = static_cast<char>(num + 1);
}

/*
What is the output of this program?
d = 300; ch = +
d = 600; ch = ,
*/

/*
a: Function prototype, function heading, function body, and function definitions

void func(int, int, double &, char &); // function prototype
void func(int speed, int time, double &distance, char &c) // function heading


// Function body

 double num;

 distance = speed * time;
 num = static_cast<int>(c);
 c = static_cast<char>(num + 1);

 // Function definitions int speed, int time, double &distance, char &c

*/

/*
b: Function call statements, formal parameters, and actual parameters

 func(s, t, d, ch);
 func(75, 8, d, ch);

 Formal parameters
 int, int, double &, char &

 Actual parameters
 int speed, int time, double &distance, char &c
*/

/*
c: Value parameters and reference parameters ????
*/

/*
d: Local varialbes and global variables

 Local varialbes
 int s = 50;
 int t = 6;
 double d;
 char ch = STAR;

 Global variables
 const double RATE = 15.50;
 const char STAR = '*';

 double temp;
*/

/*
e: Named constants
const double RATE = 15.50;
const char STAR = '*';
*/