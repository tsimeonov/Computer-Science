#include <iostream>
#include <iomanip>

using namespace std;

// Prototype: 3 value inputs, 3 reference outputs
void customFunc(double num1, double num2, double num3,
                double &sum, double &avg, string &status);

int main()
{
 cout << fixed << setprecision(2);

 double mySum, myAvg;
 string myStatus;

 cout << "======================" << endl;
 customFunc(20, 100, 50, mySum, myAvg, myStatus);
 cout << "Status: " << myStatus << endl;
 cout << "Sum: " << mySum << endl;
 cout << "Avg: " << myAvg << endl;

 return 0;
}

void customFunc(double num1, double num2, double num3,
                double &sum, double &avg, string &status)
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
