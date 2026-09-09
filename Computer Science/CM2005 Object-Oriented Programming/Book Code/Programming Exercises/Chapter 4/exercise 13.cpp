#include <iostream>

using namespace std;

int main()
{

 // Variables
 double paperLength, paperWidth;
 double marginTop, marginBottom, marginLeft, marginRight;
 int pointSize;
 int spacing;

 // Ask for input
 cout << "Enter the length, width in inches of the paper: ";
 cin >> paperLength >> paperWidth;
 cout << endl;

 cout << "Enter top, bottom, left and right margins: ";
 cin >> marginTop >> marginBottom >> marginLeft >> marginRight;
 cout << endl;

 cout << "Enter the point size of a line: ";
 cin >> pointSize;
 cout << endl;

 cout << "Enter 1 for single-spaced or 2 for double-spaced ";
 cin >> spacing;
 cout << endl;

 // Calculation

 // Calculate characters per line
 // Find the usable width in inches
 double usableWidthInc = paperWidth - marginLeft - marginRight;

 // Convert usable width to points
 // Since 1 inch = 72points, multiply by 72

 double usableWidthPoin = usableWidthInc * 72;

 // Divide by the character pont size
 int characters = usableWidthPoin / pointSize;

 // Calculate lines per page
 double usableLengthInc = paperLength - marginTop - marginBottom;

 double usableLengthPoin = usableLengthInc * 72;

 // Determine the line height
 int lineHeight = pointSize * spacing;

 // Divide usable length by line height
 int lines = usableLengthPoin / lineHeight;

 cout << "Characters per line: " << characters << " characters" << endl;
 cout << "Lines per page: " << lines << " lines" << endl;

 return 0;
}