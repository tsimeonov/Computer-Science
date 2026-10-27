#include <iostream>
#include <iomanip>

using namespace std;

// Prototype: 3 value inputs, 3 reference outputs
void customFunc(double num1, double num2, double num3, double &sum, double &avg, string &status);

int main()
{
 cout << fixed << setprecision(2);

 double mySum, myAvg;
 string myStatus;

 customFunc(30, 50, 60, mySum, myAvg, myStatus);
 cout << "Status is: " << myStatus << endl;
 cout << "Sum is: " << mySum << endl;
 cout << "Avg is: " << myAvg << endl;

 return 0;
}

void customFunc(double num1, double num2, double num3, double &sum, double &avg, string &status)
{
 sum = num1 + num2 + num3;
 avg = sum / 3;

 if (avg >= 70)
 {
  status = "Pass";
 }
 else
 {
  status = "Fail";
 }
}
