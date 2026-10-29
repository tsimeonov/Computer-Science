#include <iostream>

using namespace std;

void customFunc(int n, int m, int &sum, double &avg);

int main()
{
 int firstNum = 2;
 int secondtNum = 4;
 int totalSum = 0;
 double average = 0.0;

 customFunc(firstNum, secondtNum, totalSum, average);
 cout << "Numbers between " << firstNum << " and " << secondtNum << endl;
 cout << "Sum: " << totalSum << endl;
 cout << "Average: " << average << endl;

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
   count++; // Count each number
  }
  // Floating-point division
  avg = static_cast<double>(sum) / count;
 }
 else
 {
  cout << "The first number needs to be less than the second" << endl;
 }
}
