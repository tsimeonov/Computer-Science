/*
1. Mark the following statements as true or false
*/

/*
a. To use a predefined function in a program, you need to know only the name of the function and how to use it => TRUE
*/

/*
b. A value-returning function retirns only one value => TRUE
*/

/*
c. Parameters allow you to use different values each time the function is caled => TRUE
*/

/*
d. When a return statement executes in a user-defined function, the function immediately exits => TRUE
*/

/*
e. A value-returning function returns only integer values => FALSE
*/

/*
f. A varialbe name cannot be passed to a value parameter => FALSE
*/

/*
g. If a C++ function does not use parameters,parentheses around the empty parameter list are still required = TRUE
*/

/*
h. In C++, the names of the corresponding formal and actual parameters must be the same => FALSE
*/

/*
i. A function that changes the value of a reference parameter also changes the value of the actual parameter => TRUE
*/

/*
j. Whenever the value of a reference parameter changes, the value of the actual parameter changes => TRUE
*/

/*
k. In C++, function definitions can be nested; that is, the definition of one function can be enclosed in the body of another funciton => FALSE
*/

/*
l. Using global varialbes in a program is a better programming style than using local variables, because extra varialbes cn be avoided => FALSE
*/

/*
m. In a program, global constants are as dangerous as global variables => FALSE
*/

/*
n. The memory for a static variable remains allocated between function calls => TRUE
*/

#include <iostream>;

using namespace std;

void customFunc(int n, int m, int &sum, double &avg);

int main()
{
 int firstNum = 2;
 int secondNum = 4;
 int totalSum = 0;
 double average = 0.0;

 customFunc(firstNum, secondNum, totalSum, average);
 cout << "Numbers between " << firstNum << " and " << secondNum << endl
      << flush;
 cout << "Sum: " << totalSum << endl
      << flush;
 cout << "Average: " << average << endl
      << flush;

 return 0;
}

void customFunc(int n, int m, int &sum, double &avg)
{
 sum = 0;
 int count = 0;

 if (n <= m)
 {
  for (int i = n; i <= m; i++)
  {
   sum = sum + i;
   count++;
  }
  avg = static_cast<double>(sum) / count;
 }
 else
 {
  cout << "The first number needs to be less than the second" << endl;
 }
}