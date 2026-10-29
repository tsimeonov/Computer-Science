#include <iostream>

using namespace std;

void compute(int x, int &y, int &z);

int main()
{
 int one = 7;
 int two = 5;
 int three = 6;

 compute(one, two, three);
 cout << one << ", " << two << ", " << three << endl;

 compute(one, two, three);
 cout << one << ", " << two << ", " << three << endl;

 compute(one, two, three);
 cout << one << ", " << two << ", " << three << endl;

 compute(one, two, three);
 cout << one << ", " << two << ", " << three << endl;

 return 0;
}

void compute(int x, int &y, int &z)
{
 int w = x + y - z;

 y = w % 2;
 x = y + w;
 z = x * y;
}

/*
Output

7, 0, 0
7, 1, 8
7, 0, 0
7, 1, 8
*/