#include <iostream>

using namespace std;

void customFunc(int);

int main()
{
 customFunc(2); // 4
 customFunc(3); // 15

 return 0;
}

void customFunc(int num)
{
 if (num % 2 == 0)
 {
  cout << 2 * num << endl;
 }
 else
 {
  cout << 5 * num << endl;
 }
}