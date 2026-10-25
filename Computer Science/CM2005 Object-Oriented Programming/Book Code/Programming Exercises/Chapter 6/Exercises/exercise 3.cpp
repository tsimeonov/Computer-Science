#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 cout << fixed << setprecision(2);

 cout << "a: " << abs(-18) << endl;                               // a: 18
 cout << "b: " << fabs(20.5) << endl;                             // b: 20.50
 cout << "c: " << fabs(-87.2) << endl;                            // c: 87.20
 cout << "d: " << pow(4, 2.0) << endl;                            // d: 16.00
 cout << "e: " << pow(8.4, 3.5) << endl;                          // e: 1717.82
 cout << "f: " << sqrt(7.84) << endl;                             // f: 2.80
 cout << "g: " << sqrt(196.0) << endl;                            // g: 14.00
 cout << "h: " << sqrt(38.44) * pow(2.4, 2) / fabs(-3.2) << endl; // h: 11.16
 cout << "i: " << floor(27.37) << endl;                           // i: 27.00
 cout << "j: " << ceil(19.2) << endl;                             // j: 20.00
 cout << "k: " << floor(12.45) + ceil(6.7) << endl;               // k: 19.00
 cout << "l: " << floor(-8.9) + ceil(3.45) << endl;               // l: -5.00
 cout << "m: " << floor(9.6) / ceil(3.7) << endl;                 // m: 2.25
 cout << "n: " << pow(-4.0, 6.0) << endl;                         // n: 4096.00
 cout << "o: " << pow(10, -2.0) << endl;                          // o: 0.01
 cout << "p: " << pow(9.2, 1.0 / 2) << endl;                      // p: 3.03

 return 0;
}