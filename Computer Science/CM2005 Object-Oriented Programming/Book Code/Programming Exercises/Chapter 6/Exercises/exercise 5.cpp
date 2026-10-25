#include <iostream>

using namespace std;

double funcTest(string, char, int, double);          // a: CORRECT
double funcTest(string n, char ch, int x, double t); // b: CORRECT
// double funcTest(name, u, num, y);                    // c: INCORRECT
double funcTest(string, char, int, double); // d: CORRECT

int main() { return 0; }

double funcTest(string name, char u, int num, double y) {}
