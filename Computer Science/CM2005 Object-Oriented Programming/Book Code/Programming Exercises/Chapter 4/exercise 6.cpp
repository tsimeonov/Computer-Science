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

 // Add Variables
 int totalCookies, cookiesPerBox, boxesPerContainer;
 int totalBoxes, leftOverCookies;
 int totalContainers, leftOverBoxes;

 // Ask for input
 cout << "What is the total number of cookies: ";
 cin >> totalCookies;
 cout << endl;

 cout << "What is the total number of cookies per box: ";
 cin >> totalBoxes;
 cout << endl;

 cout << "What is the total number of boxes per container: ";
 cin >> totalContainers;
 cout << endl;

 // Calculate
 // boxes
 totalBoxes = totalCookies / cookiesPerBox;
 leftOverCookies = totalCookies % cookiesPerBox;
 // container
 totalContainers = totalBoxes / boxesPerContainer;
 leftOverBoxes = totalBoxes % boxesPerContainer;

 // Output
 cout << "We delivered: " << totalBoxes << " boxes\n";
 cout << "We delivered: " << totalContainers << " containers";

 return 0;
}