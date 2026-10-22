/*
Classify Numbers
This program reads 20 numbers and outputs the number of zeros, odd and even numbers
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

// Function prototypes
void initialize(int &zeroCount, int &oddCount, int &evenCount);
void getNumber(int &num);
void classifyNumber(int num, int &zeroCount, int &oddCount, int &evenCount);
void printResults(int zeroCount, int oddCount, int evenCount);

int main()
{
 // Variable declaration
 int counter; // loop  control variable
 int number;  // variable to store the new number
 int zeros;   // varialbe to store the number of zeros
 int odds;    // variable to store the number of even integers
 int evens;   // variables to store the number of even integers

 initialize(zeros, odds, evens);

 cout << "Please enter " << N << " integers." << endl;
 cout << "The numbers you entered are: " << endl;

 for (counter = 1; counter <= N; counter++)
 {
  getNumber(number);
  cout << number << " ";
  classifyNumber(number, zeros, odds, evens);
 }

 cout << endl;

 printResults(zeros, odds, evens);

 return 0;
}

void initialize(int &zeroCount, int &oddCount, int &evenCount)
{
 zeroCount = 0;
 oddCount = 0;
 evenCount = 0;
}

void getNumber(int &num)
{
 cin >> num;
}

void classifyNumber(int num, int &zeroCount, int &oddCount, int &evenCount)
{
 switch (num % 2)
 {
 case 0:
  evenCount++;
  if (num == 0)
  {
   zeroCount++;
  }
  break;
 case 1:
 case -1:
  oddCount++;
 }
}

void printResults(int zeroCount, int oddCount, int evenCount)
{
 cout << "There are " << evenCount << " evens, "
      << "which includes " << zeroCount << " zeros" << endl;
 cout << "The number of odd numbers is: " << oddCount << endl;
}

/*
Please enter 20 integers.
The numbers you entered are:
18 0 7 5 17 0 0 24 88 36 0 9 31 26 62 0 1 92 55 0
18 0 7 5 17 0 0 24 88 36 0 9 31 26 62 0 1 92 55 0
There are 13 evens, which includes 6 zeros
The number of odd numbers is: 7
*/