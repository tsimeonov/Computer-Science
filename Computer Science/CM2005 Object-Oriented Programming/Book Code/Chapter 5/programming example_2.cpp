/*
Program: Counts zeros, odds and evens
This program counts the number of odd and even numbers
The program also counts the number of zeros
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

int main()
{
 // Declare variables
 int counter;
 int number;

 int zeros = 0;
 int odds = 0;
 int evens = 0;

 cout << "Please enter " << N << " integers, "
      << "positive, negative, or zeros"
      << endl;

 cout << "The numbers you entered are: " << endl;

 for (counter = 1; counter <= N; counter++)
 {
  cin >> number;
  cout << number << " ";

  if (number == 0)
  {
   zeros++;
   evens++;
  }
  else if (number % 2 == 0)
  {
   evens++;
  }
  else
  {
   odds++;
  }
 }

 cout << endl;

 cout << "There are " << evens << " evens, "
      << "which includes " << zeros << " zeros"
      << endl;
 cout << "The number of odd numbers is: " << odds << endl;

 return 0;
}

/*
Sample Run: In this sample run, the user input is shaded.
Please enter 20 integers, positive, negative, or zeros.
The numbers you entered are:
0 0 -2 -3 -5 6 7 8 0 3 0 -23 -8 0 2 9 0 12 67 54
0 0 -2 -3 -5 6 7 8 0 3 0 -23 -8 0 2 9 0 12 67 54
There are 13 evens, which includes 6 zeros.
The number of odd numbers is: 7
*/