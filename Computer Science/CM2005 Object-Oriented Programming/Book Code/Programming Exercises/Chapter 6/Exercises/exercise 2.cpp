/*
Determine the value of each of the following expressions
*/

#include <iostream>

using namespace std;

int main()
{
 cout << static_cast<char>(toupper('#')) << endl; // a: #
 cout << static_cast<char>(toupper('k')) << endl; // b: K
 cout << static_cast<char>(toupper('3')) << endl; // c: 3
 cout << static_cast<char>(toupper('-')) << endl; // d: -
 cout << static_cast<char>(toupper('T')) << endl; // e: T
 cout << static_cast<char>(toupper(':')) << endl; // f: :
 cout << static_cast<char>(toupper('u')) << endl; // g: U
 cout << static_cast<char>(toupper('{')) << endl; // h: {

 return 0;
}