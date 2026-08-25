/*
A box of cookies can hold 24 cookies, and a container can hold 75 boxes of cookies. Write a program that prompts the user to enter the total number of cookies, the number of cookies in a box, and the number of cookie boxes in a container.
The program then outputs the number of boxes and the number of containers to ship the cookies.
Note that each box must contain the specified number of cookies, and each container must contain the specified number of boxes.
If the last box of cookies contains less than the number of specified cookies, you
can discard it and output the number of leftover cookies.
Similarly, if the last container contains less than the number of specified boxes,
you can discard it and output the number of leftover boxes.
*/

// 1 box = 24 cookies
// 1 container = 75 boxes

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 // 1. Declare variables
 int totalCookies, cookiesPerBox, boxesPerContainer;
 int totalBoxes, leftOverCookies;
 int totalContainers, leftOverBoxes;

 // 2. Prompt for inputs
 cout << "Enter the number of cookies: ";
 cin >> totalCookies;
 cout << endl;

 cout << "Enter the amount of cookies per box: ";
 cin >> cookiesPerBox;
 cout << endl;

 cout << "Enter the amount of boxes per container: ";
 cin >> boxesPerContainer;
 cout << endl;

 // 3. Calculate
 totalBoxes = totalCookies / cookiesPerBox;
 leftOverCookies = totalCookies % cookiesPerBox;

 totalContainers = totalBoxes / boxesPerContainer;
 leftOverBoxes = totalBoxes % boxesPerContainer;

 // 4. Output the main shipping numbers
 cout << "Total fully packed container: " << totalContainers << endl;
 cout << "Total fully packed boxes to ship: " << totalBoxes << endl;

 // 5. Add the if statement
 if (leftOverCookies > 0)
 {
  cout << "We discarded " << leftOverCookies << " leftover cookies" << endl;
 }
 if (leftOverBoxes > 0)
 {
  cout << "We discarded " << leftOverBoxes << " leftover boxes" << endl;
 }

 return 0;
}