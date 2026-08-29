/*
A box of cookies can hold 24 cookies, and a container can hold 75 boxes of cookies. Write a program that prompts the user to enter the total number of cookies, the number of cookies in a box, and the number of cookie boxes in a container.
The program then outputs the number of boxes and the number of containers to ship the cookies.
Note that each box must contain the specified number of cookies, and each container must contain the specified number of boxes.
If the last box of cookies contains less than the number of specified cookies, you
can discard it and output the number of leftover cookies.
Similarly, if the last container contains less than the number of specified boxes,
you can discard it and output the number of leftover boxes.

totalCookies = 100
cookiesPerBox = 24
boxesPerContainer = 75
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

 // Variables
 int totalCookies, cookiesPerBox, boxesPerContainer;
 int totalBoxes, leftOverCookies;
 int totalContainers, leftOverBoxes;

 // Ask for input
 cout << "Total number of cookies: ";
 cin >> totalCookies;
 cout << endl;

 cout << "Total number of cookies per box: ";
 cin >> totalCookies;
 cout << endl;

 cout << "Total number of cookies per container: ";
 cin >> totalCookies;
 cout << endl;

 // Calculate
 totalBoxes = totalCookies / cookiesPerBox;
 leftOverCookies = totalCookies % cookiesPerBox;

 totalContainers = totalBoxes / boxesPerContainer;
 totalContainers = totalBoxes % boxesPerContainer;

 return 0;
}